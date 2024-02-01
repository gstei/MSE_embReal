/*
This scripts has a define in the beginning where on can say if one 
just wants to toggle an LED or run a enum State state machine which is non blocking.
 */
#define LED_finite_state_machine //LED_example, LED_finite_state_machine
#include "main.h"
#include "cpp_main.h"
#include <iostream>
#include <string>
#include "NoneBlockSystemTickDelay.h"
#include "stm32H7xx_hal.h"
#include "BlinkingLed.h"

#ifdef LED_finite_state_machine   //LED_example, LED_finite_state_machine


/**
 * @brief ASCII_TAB constant representing the ASCII value for the tab character.
 */
constexpr char ASCII_TAB=	0x09;
constexpr char ASCII_LF	=	0x0A;
constexpr char ASCII_CR	=	0x0D;

// define the states
enum class State {
    INIT,
    BLINK_1HZ,
    BLINK_3HZ,
};

// define the state machine class
class StateMachine {
private:
    // define the variables which are used in the state machine but should not be changed from outside
    // state of the state machine
    State currentState;
    // GPIO port and pin
    GPIO_TypeDef *Port;
	uint16_t Pin;
    //frequency of the LED in the two different states it is actually not only 1 and 3 hz
    uint16_t freq_1;
    uint16_t freq_2;
    // define the timer variable to create a non blocking delay
    myhal::NoneBlockSystemTickDelay timer1; // Declare the timer variable
    // define a counter to count the number of toggles
    uint16_t counter=0;

public:
    /**
     * @brief Constructor for the StateMachine class.
     * 
     * @param Port The GPIO port to be used.
     * @param Pin The GPIO pin to be used.
     */
    StateMachine(GPIO_TypeDef *Port, uint16_t Pin, uint16_t freq_1, uint16_t freq_2) : currentState(State::INIT) {
        this->Port = Port;
        this->Pin = Pin;
        this->freq_1 = freq_1;
        this->freq_2 = freq_2;
    }
    
    void transition() {
        switch (currentState) {
            case State::INIT:
                std::cout << "Transitioning from INIT to BLINK_"+ std::to_string(freq_1)+"HZ" <<  ASCII_LF<< ASCII_CR;
                fflush(stdout);
                currentState = State::BLINK_1HZ;
                break;
            #include "NoneBlockSystemTickDelay.h" // Include the header file for NoneBlockSystemTickDelay

            case State::BLINK_1HZ:
                if (counter < 10)
                {
                    if(timer1.checkExpiration()) // Check if the timer has expired (at the beginning the timer is zero ==> expired)
                    {
                        // When it expired we want to toggle the led and restart the timer
                        HAL_GPIO_TogglePin(Port, Pin); // Toggle the LED
                        timer1.initialise(1000/2/freq_1); // Initialise the timer with 1000ms
                        counter++;
                    }
                }
                else
                {
                    counter=0; // Reset the counter
                    // print the transition
                    std::cout << "Transitioning from BLINK_"+ std::to_string(freq_1)+"HZ to BLINK_"+ std::to_string(freq_2)+"HZ" <<  ASCII_LF<< ASCII_CR;
                    fflush(stdout);
                    // change the state
                    currentState = State::BLINK_3HZ;
                }
                break;
            case State::BLINK_3HZ:
                if (counter < 10)
                {
                    if(timer1.checkExpiration()) // Check if the timer has expired
                    {
                        HAL_GPIO_TogglePin(Port, Pin); // Toggle the LED
                        timer1.initialise(1000/2/freq_2); // Initialise the timer with 1000ms
                        counter++;
                    }
                }
                else
                {
                    counter=0;
                    std::cout << "Transitioning from BLINK_"+ std::to_string(freq_2)+"HZ to BLINK_"+ std::to_string(freq_1)+"HZ" <<  ASCII_LF<< ASCII_CR;
                    fflush(stdout);
                    currentState = State::BLINK_1HZ;
                }
                break;
        }
    }

    /**
     * @brief Prints the current state of the state machine. Is currently not used
     * 
     */ 
    void printCurrentState() const {
        std::cout << "Current State: "<<  ASCII_LF<< ASCII_CR;;
        fflush(stdout);
        switch (currentState) {
            case State::INIT:
                std::cout << "INIT"<<  ASCII_LF<< ASCII_CR;;
                fflush(stdout);
                break;
            case State::BLINK_1HZ:
                std::cout << "BLINK_1HZ"<<  ASCII_LF<< ASCII_CR;;
                fflush(stdout);
                break;
            case State::BLINK_3HZ:
                std::cout << "BLINK_3HZ"<<  ASCII_LF<< ASCII_CR;;
                fflush(stdout);
                break;
        }
        std::cout << std::endl;
    }
};
#endif

void cpp_main()
{
    // Simple example how to turn an led on
    // HAL_GPIO_WritePin(LD1_GPIO_Port, LD1_Pin, GPIO_PIN_SET);
    #ifdef LED_example
    // Initiate the LED
    BlinkingLed Led1Blinker{LD1_GPIO_Port,LD1_Pin};
    // Set the frequency of the LED
	Led1Blinker.setFrequency(0.5);
    #endif
    #ifdef LED_finite_state_machine
    // check if console is working
	std::cout << "Test1" <<  ASCII_LF<< ASCII_CR;;
    fflush(stdout);
    // Initiate the state machines
    StateMachine fsm1(LD1_GPIO_Port,LD1_Pin,1,3);
    StateMachine fsm2(LD2_GPIO_Port,LD2_Pin,1,2);
    #endif
	// ObjAccGyroSensor.initSensor();

	// for(int i=0;i<6;i++) //fill the Ringbuffers
	// ObjAccGyroSensor.updateValues();

while (1)
	{
        #ifdef LED_example
        // Update the timer and toggle the LED when timer has triggerd event
        Led1Blinker.processBlinking();
        #endif
        #ifdef LED_finite_state_machine
        // fsm.printCurrentState();
        //update the state machines
        fsm1.transition();
        fsm2.transition();
        #endif
	// ObjAccGyroSensor.updateValues();

	// ObjAccGyroSensor.Acc.getAVGValues(&AccAvgXAxis, &AccAvgYAxis, &AccAvgZAxis);
    // ObjAccGyroSensor.Gyro.getAVGValues(&GyrAvgXAxis, &GyrAvgYAxis, &GyrAvgZAxis);

	// if(HAL_GPIO_ReadPin(B1_GPIO_Port, B1_Pin))
    //     {
    //     ObjAccGyroSensor.Acc.setZero();
    //     ObjAccGyroSensor.Gyro.setZero();
    //     }

    // std::cout<<"Acc.: \t";
    // std::cout<<"X-Axis: "<< AccAvgXAxis << (char) ASCII_TAB;
    // std::cout<<"Y-Axis: "<< AccAvgYAxis << (char) ASCII_TAB;
    // std::cout<<"Z-Axis: "<< AccAvgZAxis << (char) ASCII_TAB;


    // std::cout<<"Gyro.: \t";
    // std::cout<<"X-Axis: "<< GyrAvgXAxis << (char) ASCII_TAB;
    // std::cout<<"Y-Axis: "<< GyrAvgYAxis << (char) ASCII_TAB;
    // std::cout<<"Z-Axis: "<< GyrAvgZAxis;
    // std::cout<< (char) ASCII_LF << (char) ASCII_CR;

    // fflush(stdout);
    // HAL_Delay(200);

}
}

