/*
 * STM32H7led.h
 *
 *  Created on: Mar 13, 2022
 *      Author: dominique.kunz
 */

#ifndef SRC_STM32H7LED_H_
#define SRC_STM32H7LED_H_

#include "stm32H7xx_hal.h"


/**
 * @brief Class representing an STM32H7 LED.
 */
class STM32H7_led {
public:
	/**
	 * @brief Constructor for the STM32H7_led class.
	 */
	STM32H7_led(void);

	/**
	 * @brief Constructor for the STM32H7_led class.
	 * @param Port The GPIO port to which the LED is connected.
	 * @param Pin The pin number of the LED.
	 */
	STM32H7_led(GPIO_TypeDef *Port, uint16_t Pin);

	/**
	 * @brief Destructor for the STM32H7_led class.
	 */
	virtual ~STM32H7_led();

	/**
	 * @brief Toggles the state of the LED.
	 */
	void toggleLED(void);

protected:
	GPIO_TypeDef *Port; /**< The GPIO port to which the LED is connected. */
	uint16_t Pin; /**< The pin number of the LED. */
};

#endif /* SRC_STM32H7LED_H_ */
