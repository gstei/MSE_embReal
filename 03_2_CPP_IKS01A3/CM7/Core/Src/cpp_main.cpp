/*
 * looper.cpp
 *
 *  Created on: Mar 14, 2022
 *      Author: dominique.kunz
 */

#include "main.h"
#include "cpp_main.h"
#include <iostream>
#include <algorithm>
#include <array>
#include <numeric>
#include "AccGyroSensor.h"

int32_t AccAvgXAxis;
int32_t AccAvgYAxis;
int32_t AccAvgZAxis;
int32_t GyrAvgXAxis;
int32_t GyrAvgYAxis;
int32_t GyrAvgZAxis;
AccGyroSensor ObjAccGyroSensor;

#define ASCII_TAB 	(0x09)
#define ASCII_LF 	(0x0A)
#define ASCII_CR	(0x0D)

void cpp_main()
{

	ObjAccGyroSensor.initSensor();

	for(int i=0;i<6;i++) //fill the Ringbuffers
	ObjAccGyroSensor.updateValues();

while (1)
	{

	ObjAccGyroSensor.updateValues();

	ObjAccGyroSensor.Acc.getAVGValues(&AccAvgXAxis, &AccAvgYAxis, &AccAvgZAxis);
    ObjAccGyroSensor.Gyro.getAVGValues(&GyrAvgXAxis, &GyrAvgYAxis, &GyrAvgZAxis);

	if(HAL_GPIO_ReadPin(B1_GPIO_Port, B1_Pin))
        {
        ObjAccGyroSensor.Acc.setZero();
        ObjAccGyroSensor.Gyro.setZero();
        }

    std::cout<<"Acc.: \t";
    std::cout<<"X-Axis: "<< AccAvgXAxis << (char) ASCII_TAB;
    std::cout<<"Y-Axis: "<< AccAvgYAxis << (char) ASCII_TAB;
    std::cout<<"Z-Axis: "<< AccAvgZAxis << (char) ASCII_TAB;


    std::cout<<"Gyro.: \t";
    std::cout<<"X-Axis: "<< GyrAvgXAxis << (char) ASCII_TAB;
    std::cout<<"Y-Axis: "<< GyrAvgYAxis << (char) ASCII_TAB;
    std::cout<<"Z-Axis: "<< GyrAvgZAxis;
    std::cout<< (char) ASCII_LF << (char) ASCII_CR;

    fflush(stdout);
    HAL_Delay(200);

}
}

