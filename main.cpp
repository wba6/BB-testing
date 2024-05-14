#include <iostream>
#include <unistd.h>  // for usleep
#include "BlackGPIO/BlackGPIO.h"  // BlackLib GPIO class

using namespace BlackLib;

int main() {
    // Create a GPIO object for pin P8_14 (GPIO 26)
    BlackGPIO led(GPIO_26, output, SecureMode);

    // Blink the LED 10 times
    for (int i = 0; i < 10; ++i) {
        led.setValue(high);
        std::cout << "LED ON" << std::endl;
        usleep(500000);  // Sleep for 500 milliseconds

        led.setValue(low);
        std::cout << "LED OFF" << std::endl;
        usleep(500000);  // Sleep for 500 milliseconds
    }

    return 0;
}
