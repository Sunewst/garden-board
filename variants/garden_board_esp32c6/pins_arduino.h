#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>
#include "soc/soc_caps.h"


#define MUX_I2C_POWER     14
#define PIN_MUX_I2C_POWER 14 

static const uint8_t TX = 16;
static const uint8_t RX = 17;

static const uint8_t SDA = 6;
static const uint8_t SCL = 7;

static const uint8_t SS = 0;
static const uint8_t MOSI = 22;
static const uint8_t MISO = 23;
static const uint8_t SCK = 21;

static const uint8_t A0 = 1;
static const uint8_t A1 = 4;
static const uint8_t A2 = 6;
static const uint8_t A3 = 5;
static const uint8_t A4 = 3;
static const uint8_t A5 = 2;
static const uint8_t A6 = 0;

#endif /* Pins_Arduino_h */