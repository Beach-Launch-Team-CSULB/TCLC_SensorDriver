#ifndef TCLCSENSORDRIVER_LOG_H_ 
#define TCLCSENSORDRIVER_LOG_H_

#include <Adafruit_MAX31856.h>
#include <SD.h>
#include <SPI.h>

#define DRDY_PIN 5

// change to desired number of samples per second
#define SAMPLES_PER_SECOND 10 

// SD CARD CS
const int chipSelect = BUILTIN_SDCARD;
const char* fileName = "thisisatest.csv";
unsigned long currTime = 0;
unsigned long prevTime = 0;
unsigned long initialTime = 0;
void sdWrite(unsigned long currTime);
void sdInit();
void maxInit();
// Use software SPI: CS, DI, DO, CLK
// Adafruit_MAX31856 maxthermo = Adafruit_MAX31856(10, 11, 12, 13);
// use hardware SPI, just pass in the CS pin
Adafruit_MAX31856 maxthermo = Adafruit_MAX31856(10);


// Declarations and Definitions go here

// Example Class Declaration
class LogClass {
public:
    LogClass();  // Constructor declaration

    void myFunction();  // Member function declaration

private:
    int myPrivateVariable;  // Private member variable declaration
};

#endif  // MYHEADER_H
