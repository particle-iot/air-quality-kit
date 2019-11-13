# Particle Air Quality Monitoring Kit

![](assets/10-solution.png)

This repository contains the source for an example project that uses the [Particle Air Quality Monitoring Kit](https://part.cl/air-quality-kit).

## Importing this Project into Particle Workbench

To use this project with Particle Workbench, do the following:

1. Clone this project

```bash
git clone git@github.com:particle-iot/air-quality-kit.git
```

2. Create a new project in Particle workbench using the `Particle: Create new project` command.

3. In the command palette, run the `Particle: Import Project`.

4. When asked, navigate to the `project.properties` file for this repository. Workbench will pull down the libraries needed and copy the source code into your project.

5. Compile and flash to your device!

## Using this project in the Particle Web IDE

To use this project in the Particle Web IDE, do the following:

1. Create a new project.

2. Copy the source from `src/air-quality-kit.cpp` into the main source file for your Web IDE project.

3. Install the following libraries:

  - OLED_Display_128X64
  - Grove_Air_quality_Sensor
  - Adafruit_BME280
  - JsonParserGeneratorRK

4. Compile and flash to your device!