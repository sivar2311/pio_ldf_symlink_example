#include "LibA.h"

#include <ArduinoJson.h>

String functionFormLibA(const String& name) {
    JsonDocument doc;
    doc["name"] = name;
    String result;
    serializeJson(doc, result);
    return result;
}