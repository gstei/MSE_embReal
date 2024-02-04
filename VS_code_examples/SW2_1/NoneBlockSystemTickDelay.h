#include <iostream>
#include <cstdint>

#ifndef NoneBlockSystemTickDelay_h
#define NoneBlockSystemTickDelay_h
class NoneBlockSystemTickDelay {
protected:
    // Private member variables
    uint32_t Wait=0;
    uint32_t Tickstart=0;
public:
    void initialise(uint32_t Delay) {
        // Code to toggle the LED
    }
    uint8_t checkExpiration() {
        return 0;
    }
    //constructor
    NoneBlockSystemTickDelay() {
    }
};
#endif