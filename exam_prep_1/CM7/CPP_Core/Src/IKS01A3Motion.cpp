/*
 * IKS01A3Motion.cpp
 *
 *  Created on: Mar 25, 2022
 *      Author: dominique.kunz
 */

#include "IKS01A3Motion.h"


IKS01A3_Motion::IKS01A3_Motion() {
	// TODO Auto-generated constructor stub
    AxisOffsets.x=0;
    AxisValues.x=0;
    AxisOffsets.y=0;
    AxisValues.y=0;
    AxisOffsets.z=0;
    AxisValues.z=0;
}

IKS01A3_Motion::~IKS01A3_Motion() {
	// TODO Auto-generated destructor stub
}

void IKS01A3_Motion::init(uint32_t Instance, uint32_t Function){
    IKS01A3_MOTION_SENSOR_Init(Instance, Function);
}

void IKS01A3_Motion::enable(uint32_t Instance, uint32_t Function){
    IKS01A3_MOTION_SENSOR_Enable(Instance, Function);
}

void IKS01A3_Motion::getValue(uint32_t Instance, uint32_t Function,int32_t *XAxis, int32_t *YAxis, int32_t *ZAxis){
    IKS01A3_MOTION_SENSOR_GetAxes(Instance, Function, &AxisValues);
    *XAxis=AxisValues.x;
    *YAxis=AxisValues.y;
    *ZAxis=AxisValues.z;
}

void IKS01A3_Motion::setZero(void){
    AxisOffsets.x=-AxisValues.x;
    AxisOffsets.y=-AxisValues.y;
    AxisOffsets.z=-AxisValues.z;
}

void IKS01A3_Motion::updateValues(uint32_t Instance, uint32_t Function){

	IKS01A3_MOTION_SENSOR_Axes_t CurrentAxisValues;

    IKS01A3_MOTION_SENSOR_GetAxes(Instance, Function, &CurrentAxisValues);

    std::rotate(RingBufferAxisX.begin(),RingBufferAxisX.begin()+1,RingBufferAxisX.end());
    RingBufferAxisX[5]=CurrentAxisValues.x;

    std::rotate(RingBufferAxisY.begin(),RingBufferAxisY.begin()+1,RingBufferAxisY.end());
    RingBufferAxisY[5]=CurrentAxisValues.y;

    std::rotate(RingBufferAxisZ.begin(),RingBufferAxisZ.begin()+1,RingBufferAxisZ.end());
    RingBufferAxisZ[5]=CurrentAxisValues.z;

    AxisValues.x = std::accumulate(RingBufferAxisX.begin(), RingBufferAxisX.end(), 0LL) / RingBufferAxisX.size();
    AxisValues.y = std::accumulate(RingBufferAxisY.begin(), RingBufferAxisY.end(), 0LL) / RingBufferAxisY.size();
    AxisValues.z = std::accumulate(RingBufferAxisZ.begin(), RingBufferAxisZ.end(), 0LL) / RingBufferAxisZ.size();
}

void IKS01A3_Motion::getAVGValues(int32_t *XAxis, int32_t *YAxis, int32_t *ZAxis){
    *XAxis=AxisValues.x+AxisOffsets.x;
    *YAxis=AxisValues.y+AxisOffsets.y;
    *ZAxis=AxisValues.z+AxisOffsets.z;
}
