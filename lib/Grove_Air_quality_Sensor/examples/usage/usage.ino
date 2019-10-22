// Example usage for Grove_Air_quality_Sensor library by Seeeed Studio, Brandon Satrom <brandon@particle.io>.

#include "Grove_Air_quality_Sensor.h"

// Initialize objects from the lib
Grove_Air_quality_Sensor grove_Air_quality_Sensor;

void setup()
{
    // Call functions on initialized library objects that require hardware
    grove_Air_quality_Sensor.begin();
}

void loop()
{
    // Use the library's initialized objects and functions
    grove_Air_quality_Sensor.process();
}
