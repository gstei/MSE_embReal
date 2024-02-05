################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../CPP_Core/Src/AccGyroSensor.cpp \
../CPP_Core/Src/BlinkingLed.cpp \
../CPP_Core/Src/IKS01A3Motion.cpp \
../CPP_Core/Src/NoneBlockSystemTickDelay.cpp \
../CPP_Core/Src/STM32H7led.cpp 

OBJS += \
./CPP_Core/Src/AccGyroSensor.o \
./CPP_Core/Src/BlinkingLed.o \
./CPP_Core/Src/IKS01A3Motion.o \
./CPP_Core/Src/NoneBlockSystemTickDelay.o \
./CPP_Core/Src/STM32H7led.o 

CPP_DEPS += \
./CPP_Core/Src/AccGyroSensor.d \
./CPP_Core/Src/BlinkingLed.d \
./CPP_Core/Src/IKS01A3Motion.d \
./CPP_Core/Src/NoneBlockSystemTickDelay.d \
./CPP_Core/Src/STM32H7led.d 


# Each subdirectory must supply rules for building sources it contributes
CPP_Core/Src/%.o CPP_Core/Src/%.su CPP_Core/Src/%.cyclo: ../CPP_Core/Src/%.cpp CPP_Core/Src/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m7 -std=gnu++14 -g3 -DDEBUG -DCORE_CM7 -DUSE_HAL_DRIVER -DSTM32H745xx -c -I../Core/Inc -I../../Drivers/STM32H7xx_HAL_Driver/Inc -I../../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../Drivers/CMSIS/Include -I../../Drivers/BSP/Components/lsm6dso -I../../Drivers/BSP/Components/lis2dw12 -I../../Drivers/BSP/Components/lis2mdl -I../../Drivers/BSP/Components/hts221 -I../../Drivers/BSP/Components/lps22hh -I../../Drivers/BSP/Components/stts751 -I../../Drivers/BSP/IKS01A3 -I../../Drivers/BSP/Components/Common -I../X-CUBE-MEMS1/Target -I"C:/Users/matth/Documents/Matthias_Meyer/Schule/Master/3. Semester/TSM_EmbReal/03_workspace/exam_prep_4/CM7/CPP_Core/Inc" -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-CPP_Core-2f-Src

clean-CPP_Core-2f-Src:
	-$(RM) ./CPP_Core/Src/AccGyroSensor.cyclo ./CPP_Core/Src/AccGyroSensor.d ./CPP_Core/Src/AccGyroSensor.o ./CPP_Core/Src/AccGyroSensor.su ./CPP_Core/Src/BlinkingLed.cyclo ./CPP_Core/Src/BlinkingLed.d ./CPP_Core/Src/BlinkingLed.o ./CPP_Core/Src/BlinkingLed.su ./CPP_Core/Src/IKS01A3Motion.cyclo ./CPP_Core/Src/IKS01A3Motion.d ./CPP_Core/Src/IKS01A3Motion.o ./CPP_Core/Src/IKS01A3Motion.su ./CPP_Core/Src/NoneBlockSystemTickDelay.cyclo ./CPP_Core/Src/NoneBlockSystemTickDelay.d ./CPP_Core/Src/NoneBlockSystemTickDelay.o ./CPP_Core/Src/NoneBlockSystemTickDelay.su ./CPP_Core/Src/STM32H7led.cyclo ./CPP_Core/Src/STM32H7led.d ./CPP_Core/Src/STM32H7led.o ./CPP_Core/Src/STM32H7led.su

.PHONY: clean-CPP_Core-2f-Src

