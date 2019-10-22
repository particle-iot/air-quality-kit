// Example usage for OLED_Display_128X64 library by Seeed Studio, Brandon Satrom <brandon@particle.io>.

#include "OLED_Display_128X64.h"

// Initialize objects from the lib
OLED_Display_128X64 oLED_Display_128X64;

void setup() {
    // Call functions on initialized library objects that require hardware
    oLED_Display_128X64.begin();
}

void loop() {
    // Use the library's initialized objects and functions
    oLED_Display_128X64.process();
}
