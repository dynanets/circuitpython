// LEDs
//#define MICROPY_HW_LED_MSC              PIN_PA17 // red

#define MICROPY_HW_BOARD_NAME "Adafruit Feather M0 RFM69"
#define MICROPY_HW_MCU_NAME "samd21g18"

#define MICROPY_PORT_A        (PORT_PA24 | PORT_PA25)
#define MICROPY_PORT_B        (0)
#define MICROPY_PORT_C        (0)

#include "internal_flash.h"

#define CIRCUITPY_INTERNAL_NVM_SIZE 0

#define BOARD_FLASH_SIZE (0x00040000 - 0x2000 - 0x010000)

// https://learn.adafruit.com/assets/46254
// https://learn.adafruit.com/assets/46255
#define DEFAULT_I2C_BUS_SCL (&pin_PA23)
#define DEFAULT_I2C_BUS_SDA (&pin_PA22)
