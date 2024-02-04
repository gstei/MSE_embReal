#include <iostream>
#include <cstdint>

#ifndef STM32H7LED_H
#define STM32H7LED_H
class STM32H7Led {
protected:
    // Private member variables
    uint32_t *Port;
    uint16_t Pin;
public:
    constexpr void toggleLED() {
        printf("Toggle LED\n");
        // Code to toggle the LED
    }
    //Constructor
    STM32H7Led(uint32_t *Port, uint16_t Pin) {
        this->Port = Port;
        this->Pin = Pin;
    }
    STM32H7Led() {}
};
#endif



