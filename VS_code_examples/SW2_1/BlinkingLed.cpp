#include "STM32H7Led.h"
#include "NoneBlockSystemTickDelay.h"
#include <iostream>
#include <cstdint>
#include <cmath>
namespace led123
{
    


class BlinkingLed : public STM32H7Led, NoneBlockSystemTickDelay
{ 
    private:
    float_t Frequency = 1.0;
    uint8_t DutyCycle = 50;
    public:
    void setDutyCycle(uint8_t DutyCycle){
        printf("Set Duty Cycle\n");
    };
    void setFrequency(float_t Frequency){
        printf("Set Frequency\n");
    };
    void processBlinking(){
        // toggleLED();
    };
    BlinkingLed(uint32_t *Port, uint16_t Pin, float_t Frequency, uint8_t DutyCycle) : STM32H7Led(Port, Pin), NoneBlockSystemTickDelay(){
        this->Frequency = Frequency;
        this->DutyCycle = DutyCycle;
    }
    BlinkingLed(uint32_t *Port, uint16_t Pin){
        this->Port = Port;
        this->Pin = Pin;
    };
};
} // namespace led123
int main() {
    // Create an instance of BlinkingLed
    uint32_t Port = 1;
    led123::BlinkingLed led(&Port,1);

    // Set the duty cycle and frequency
    led.setDutyCycle(50);
    led.setFrequency(1.0);

    // Process the blinking
    led.processBlinking();
    led.toggleLED();
    return 0;
}