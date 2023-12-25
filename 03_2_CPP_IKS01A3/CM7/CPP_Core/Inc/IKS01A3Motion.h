/*
 * IKS01A3Motion.h
 *
 *  Created on: Mar 25, 2022
 *      Author: dominique.kunz
 */

#ifndef SRC_IKS01A3MOTION_H_
#define SRC_IKS01A3MOTION_H_

#include <algorithm>
#include "iks01a3_motion_sensors.h"



class IKS01A3_Motion {
private:
    IKS01A3_MOTION_SENSOR_Axes_t AxisValues;
    IKS01A3_MOTION_SENSOR_Axes_t AxisOffsets;


public:
	IKS01A3_Motion();
	virtual ~IKS01A3_Motion();
	void enable(uint32_t Instance, uint32_t Function);
    void getValue(uint32_t Instance, uint32_t Function,int32_t *XAxis, int32_t *YAxis, int32_t *ZAxis);
    void init(uint32_t Instance, uint32_t Function);
    void setZero(void);
    void updateValues(uint32_t Instance, uint32_t Function);
    void getAVGValues(int32_t *XAxis, int32_t *YAxis, int32_t *ZAxis);
};

#endif /* SRC_IKS01A3MOTION_H_ */
