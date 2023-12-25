/*
 * SpiritLevelSinglAxis3LED.cpp
 *
 *  Created on: Mar 25, 2022
 *      Author: dominique.kunz
 */

#include "SpiritLevelSinglAxis3LED.h"
#include "main.h"
#include <string>

#define ASCII_TAB 	(0x09)
#define ASCII_LF 	(0x0A)
#define ASCII_CR	(0x0D)

SpiritLevelSinglAxis3LED::SpiritLevelSinglAxis3LED() {
	// TODO Auto-generated constructor stub

}

SpiritLevelSinglAxis3LED::~SpiritLevelSinglAxis3LED() {
	// TODO Auto-generated destructor stub
}

void SpiritLevelSinglAxis3LED::init(void){
    LedNegAngle.init(LD1_GPIO_Port,LD1_Pin);
    LedBalanced.init(LD2_GPIO_Port,LD2_Pin);
    LedPosAngle.init(LD3_GPIO_Port,LD3_Pin);
    AccSensor.initSensor();
}

void SpiritLevelSinglAxis3LED::updateValues(void){
	AccSensor.updateValues();
}

void SpiritLevelSinglAxis3LED::show(void){
    int32_t AccAvgXAxis=0;
    int32_t AccAvgYAxis=0;
    int32_t AccAvgZAxis=0;

    AccSensor.Acc.getAVGValues(&AccAvgXAxis, &AccAvgYAxis, &AccAvgZAxis);

    if(AccAvgYAxis>200){
        LedNegAngle.unsetLED();
        LedBalanced.unsetLED();
        LedPosAngle.setLED();

    }
    else {
        if((AccAvgYAxis< (-200))){
            LedNegAngle.setLED();
            LedBalanced.unsetLED();
            LedPosAngle.unsetLED();
        }
        else
        {
            LedNegAngle.unsetLED();
            LedBalanced.setLED();
            LedPosAngle.unsetLED();
        }
    }

    //1. Variant
    std::cout<<"Acc.: \t";
    std::cout<<"X-Axis: "<< AccAvgXAxis << (char) ASCII_TAB;

    fflush(stdout);
    std::cout<<"Y-Axis: "<< AccAvgYAxis << (char) ASCII_TAB;

    fflush(stdout);
    std::cout<<"Z-Axis: "<< AccAvgZAxis << (char) ASCII_TAB;


    std::cout<< (char) ASCII_LF << (char) ASCII_CR;
    fflush(stdout);

}

void SpiritLevelSinglAxis3LED::setZero(void){
    AccSensor.setZero();
}
