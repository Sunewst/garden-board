#include "esp32-hal-gpio.h"
#include "pins_arduino.h"

extern "C" {

// Initialize variant/board, called before setup()
void initVariant(void) {
  // This board has a power control pin, and we must set it to output and high
  // in order to enable the NeoPixels & I2C
  pinMode(MUX_I2C_POWER, OUTPUT);
  digitalWrite(MUX_I2C_POWER, HIGH);
}
}