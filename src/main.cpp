#include "wifi_creds.hpp"

#include <Arduino.h>
#include <WiFi.h>
#include <ESPAsyncWebServer.h>
#include <SPIFFS.h>
//#include "gui/gui_setup.cpp"

AsyncWebServer server(80);

const char* ssid         = NIFTYDSC_SSID;
const char* password     = NIFTYDSC_PASSWORD;
const char* htmlFilePath = "/index.html";
const char* jsFilePath   = "/location.js";

String html;
String js;
String location = "";

IPAddress local_IP(192, 168, 1, 64);
IPAddress gateway(192, 168, 1, 1);
IPAddress subnet(255, 255, 255, 0);

void setup()
{
    Serial.begin(115200);
    while (!Serial)
    {
        delay(10);
    }

    Serial.println("Starting WiFi access point...");
    // WiFi.mode(WIFI_AP);
    WiFi.config(local_IP, gateway, subnet);
    WiFi.begin(ssid, password);
    Serial.printf("IP Address: %s\n", WiFi.localIP().toString());

    if (SPIFFS.begin())
    {
        Serial.println("SPIFFS mounted successfully");
    }
    else
    {
        Serial.println("SPIFFS mount failed");
    }

    if (SPIFFS.exists(htmlFilePath))
    {
        File html_file = SPIFFS.open(htmlFilePath, "r");
        if (html_file)
        {
            html = html_file.readString();  // html_file.readStringUntil('\n');
            html_file.close();
            Serial.println("HTML file loaded successfully");
            Serial.printf("\n%s\n", html.c_str());
        }
        else
        {
            Serial.println("Failed to open HTML file");
        }
    }
    else
    {
        Serial.println("HTML file not found");
    }

    if (SPIFFS.exists(jsFilePath))
    {
        File js_file = SPIFFS.open(jsFilePath, "r");
        if (js_file)
        {
            js = js_file.readString();  // js_file.readStringUntil('\n');
            js_file.close();
            Serial.println("JavaScript file loaded successfully");
            Serial.printf("\n%s\n", js.c_str());
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

    server.on("/", HTTP_GET, [](AsyncWebServerRequest* request) {
        Serial.println("Requesting page.html");
        request->send(200, "text/javascript", js);
        request->send(200, "text/html", html);
    });

    // Handle location data sent from webpage
    server.on("/location", HTTP_POST, [](AsyncWebServerRequest* request) {
        if (request->hasParam("latitude", true) && request->hasParam("longitude", true))
        {
            location = "Latitude: " + request->getParam("latitude")->value()
                       + "\nLongitude: " + request->getParam("longitude")->value();
            Serial.println(location);
            request->send(200, "text/plain", "Location received!");
        }
        else
        {
            request->send(400, "text/plain", "Missing location data!");
        }
    });

    server.begin();
    Serial.println("Server started");
}

void loop()
{
    Serial.println("still alive...");
    delay(1000);
}
