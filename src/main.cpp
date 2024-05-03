#include <Arduino.h>
#include <WiFi.h>
#include <ESPAsyncWebServer.h>
#include <LittleFS.h>
//#include "gui/gui_setup.cpp"

AsyncWebServer server(80);

const char* ssid         = "ORBI50";
const char* password     = "calmcar361";
const char* htmlFilePath = "/index.html";
const char* jsFilePath   = "/location.js";

String html;
String js;
String location = "";

IPAddress local_IP(192, 168, 1, 200);
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
    // WiFi.config(local_IP, gateway, subnet);
    WiFi.begin(ssid, password);
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

    if (LittleFS.exists(jsFilePath))
    {
        File js_file = LittleFS.open(jsFilePath, "r");
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

/*
AsyncWebServer server(80);

const char* ssid         = "iseeu";
const char* password     = "nowidont";
const char* htmlFilePath = "/web_ui/page.html";

String webpage;

void setup()
{
    Serial.begin(115200);
    while (!Serial)
    {
        delay(10);
    }
    delay(50);

    WiFi.begin(ssid, password);
    // ... (rest of WiFi connection logic)

    // Mount LittleFS file system
    if (LittleFS.begin(true))
    {
        Serial.println("LittleFS mounted successfully");
    }
    else
    {
        Serial.println("LittleFS mount failed");
        // Handle error
    }

    // Read HTML file contents into a String
    if (LittleFS.exists(htmlFilePath))
    {
        fs::File file = LittleFS.open(htmlFilePath, "r");
        if (file)
        {
            Serial.println("reading HTML file...");
            webpage = file.readStringUntil('\0');
            file.close();
            Serial.println("HTML file loaded successfully");
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

    server.on("/", HTTP_GET, [](AsyncWebServerRequest* request) {
        request->send(200, "text/html", webpage);
    });

    server.begin();
    Serial.println("Server started");

    // gui_setup();
}

void loop()
{
    // lv_task_handler();
    delay(5);
}

*/
