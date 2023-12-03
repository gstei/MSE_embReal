/*
 * BlinkingLed.h
 *
 *  Created on: 14.03.2022
 *      Author: dominique.kunz
 */

#ifndef SRC_BLINKINGLED_H_
#define SRC_BLINKINGLED_H_
#include "STM32H7led.h"
#include "NoneBlockSystemTickDelay.h"
#include <cstdint>


/**
 * @brief Class representing a blinking LED.
 * 
 * This class inherits from the STM32H7_led class and the NoneBlockSystemTickDelay class.
 * It provides methods to control the blinking behavior of an LED.
 */
class BlinkingLed: protected STM32H7_led, NoneBlockSystemTickDelay{
public:
	/**
	 * @brief Constructor for the BlinkingLed class.
	 * 
	 * @param Port The GPIO port to which the LED is connected.
	 * @param Pin The pin number of the LED.
	 */
	BlinkingLed(GPIO_TypeDef *Port, uint16_t Pin);

	/**
	 * @brief Destructor for the BlinkingLed class.
	 */
	virtual ~BlinkingLed();

	/**
	 * @brief Sets the duty cycle of the blinking LED.
	 * 
	 * @param DutyCycle The duty cycle value (0-100).
	 */
	void setDutyCycle(const uint8_t DutyCycle);

	/**
	 * @brief Sets the frequency of the blinking LED.
	 * 
	 * @param Frequency The frequency value in Hz.
	 */
	void setFrequency(const float Frequency);

	/**
	 * @brief Processes the blinking of the LED.
	 * 
	 * This method should be called periodically to update the blinking behavior of the LED.
	 */
	void processBlinking(void);

private:
	float Frequency = 1.0;   ///< The frequency of the blinking LED in Hz.
	uint8_t DutyCycle = 50;  ///< The duty cycle of the blinking LED (0-100).
};


#endif /* SRC_BLINKINGLED_H_ */
