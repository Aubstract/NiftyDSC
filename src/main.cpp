#include "wifi_creds.hpp"

#include <Arduino.h>
#include <WiFi.h>
#include <WebServer.h>
#include <LittleFS.h>
#include <cstdint>
//#include "gui/gui_setup.cpp"

WebServer server(80);

const char* ssid         = NIFTYDSC_SSID;
const char* password     = NIFTYDSC_PASSWORD;
const char* htmlFilePath = "/index.html";
const char* jsFilePath   = "/dateTime.js";

String index_html;
String date_time_js;
String location = "";

IPAddress local_IP(192, 168, 1, 201);
IPAddress gateway(192, 168, 1, 1);
IPAddress subnet(255, 255, 255, 0);

void setup()
{
    Serial.begin(115200);
    while (!Serial)
    {
        delay(10);
    }
    delay(50);

    // Serial.println("Starting WiFi access point...");
    // WiFi.mode(WIFI_AP);

    Serial.printf("ssid: %s password: %s\n", ssid, password);

    Serial.printf("Wifi startup status: %u\n", WiFi.begin(ssid, password));
    while (WiFi.status() != WL_CONNECTED)
    {
        Serial.println("waiting to connect...");
        delay(200);
    }
    Serial.printf("IP Address: %s\n", WiFi.localIP().toString());

    if (LittleFS.begin())
    {
        Serial.println("LittleFS mounted successfully");
    }
    else
    {
        Serial.println("LittleFS mount failed");
    }

    if (LittleFS.exists(htmlFilePath))
    {
        File html_file = LittleFS.open(htmlFilePath, "r");
        if (html_file)
        {
            index_html = html_file.readString();  // html_file.readStringUntil('\n');
            html_file.close();
            Serial.println("HTML file loaded successfully");
        }
        else
        {
            Serial.println("Failed to open HTML file");
        }
    }
    else
    {
        Serial.println("index_html file not found");
    }

    if (LittleFS.exists(jsFilePath))
    {
        File js_file = LittleFS.open(jsFilePath, "r");
        if (js_file)
        {
            date_time_js = js_file.readString();  // js_file.readStringUntil('\n');
            js_file.close();
            Serial.println("JavaScript file loaded successfully");
        }
        else
        {
            Serial.println("Failed to open JavaScript file");
        }
    }
    else
    {
        Serial.println("JavaScript file not found");
    }

    LittleFS.end();

    server.on("/", HTTP_GET, []() {
        Serial.println("Requesting index.html");
        if (!LittleFS.begin())
        {
            Serial.println("LittleFS Mount Failed");
            return;
        }
        File file = LittleFS.open("/index.html", "r");
        if (file)
        {
            server.send(200, "text/html", file.readString());
            file.close();
        }
        else
        {
            server.send(404, "text/plain", "404 Not Found");
        }
        LittleFS.end();
    });

    server.on("/dateTime.js", HTTP_GET, []() {
        Serial.println("Requesting dateTime.js");
        if (!LittleFS.begin())
        {
            Serial.println("LittleFS Mount Failed");
            return;
        }
        File file = LittleFS.open("/dateTime.js", "r");
        if (file)
        {
            server.send(200, "text/javascript", file.readString());
            file.close();
        }
        else
        {
            server.send(404, "text/plain", "404 Not Found");
        }
        LittleFS.end();
    });

    server.on("/date-time", HTTP_POST, []() {
        uint32_t server_now = millis();
        if (!LittleFS.begin())
        {
            Serial.println("LittleFS Mount Failed");
            return;
        }
        if (!server.hasArg("dateTime"))
        {
            server.send(400, "text/plain", "Missing date and time data!");
            LittleFS.end();
            return;
        }
        String   dateTime         = server.arg("dateTime");
        uint32_t server_proc_time = millis() - server_now;
        uint32_t network_time     = server_proc_time + server.arg("elapsedTime").toInt();

        Serial.println("Received date and time: " + dateTime);
        Serial.printf("Offset: %u, server_proc_time: %u, elapsed_time: %u\n",
                      network_time,
                      server_proc_time,
                      network_time);
        server.send(200, "text/plain", "Date and time received!");
        LittleFS.end();
    });

    server.on("/submit", HTTP_POST, []() {
        if (!LittleFS.begin())
        {
            Serial.println("LittleFS Mount Failed");
            return;
        }
        if (!server.hasArg("dateTime"))
        {
            server.send(400, "text/plain", "Missing date and time data!");
            LittleFS.end();
            return;
        }

        server.send(200, "text/plain", "Date and time received!");
        LittleFS.end();
    });

    server.begin();
    Serial.println("Server started");
}

void loop()
{
    server.handleClient();  // Handle incoming client requests
}
