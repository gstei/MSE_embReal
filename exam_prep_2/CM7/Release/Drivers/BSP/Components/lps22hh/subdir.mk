################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/matth/Documents/Matthias_Meyer/Schule/Master/3.\ Semester/TSM_EmbReal/03_workspace/exam_prep_2/Drivers/BSP/Components/lps22hh/lps22hh.c \
C:/Users/matth/Documents/Matthias_Meyer/Schule/Master/3.\ Semester/TSM_EmbReal/03_workspace/exam_prep_2/Drivers/BSP/Components/lps22hh/lps22hh_reg.c 

C_DEPS += \
./Drivers/BSP/Components/lps22hh/lps22hh.d \
./Drivers/BSP/Components/lps22hh/lps22hh_reg.d 

OBJS += \
./Drivers/BSP/Components/lps22hh/lps22hh.o \
./Drivers/BSP/Components/lps22hh/lps22hh_reg.o 


# Each subdirectory must supply rules for building sources it contributes
Drivers/BSP/Components/lps22hh/lps22hh.o: C:/Users/matth/Documents/Matthias_Meyer/Schule/Master/3.\ Semester/TSM_EmbReal/03_workspace/exam_prep_2/Drivers/BSP/Components/lps22hh/lps22hh.c Drivers/BSP/Components/lps22hh/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -DCORE_CM7 -DUSE_HAL_DRIVER -DSTM32H745xx -c -I../Core/Inc -I../../Drivers/STM32H7xx_HAL_Driver/Inc -I../../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../Drivers/CMSIS/Include -I../X-CUBE-MEMS1/Target -I../../Drivers/BSP/Components/lsm6dso -I../../Drivers/BSP/Components/lis2dw12 -I../../Drivers/BSP/Components/lis2mdl -I../../Drivers/BSP/Components/hts221 -I../../Drivers/BSP/Components/lps22hh -I../../Drivers/BSP/Components/stts751 -I../../Drivers/BSP/IKS01A3 -I../../Drivers/BSP/Components/Common -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/BSP/Components/lps22hh/lps22hh_reg.o: C:/Users/matth/Documents/Matthias_Meyer/Schule/Master/3.\ Semester/TSM_EmbReal/03_workspace/exam_prep_2/Drivers/BSP/Components/lps22hh/lps22hh_reg.c Drivers/BSP/Components/lps22hh/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -DCORE_CM7 -DUSE_HAL_DRIVER -DSTM32H745xx -c -I../Core/Inc -I../../Drivers/STM32H7xx_HAL_Driver/Inc -I../../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../Drivers/CMSIS/Include -I../X-CUBE-MEMS1/Target -I../../Drivers/BSP/Components/lsm6dso -I../../Drivers/BSP/Components/lis2dw12 -I../../Drivers/BSP/Components/lis2mdl -I../../Drivers/BSP/Components/hts221 -I../../Drivers/BSP/Components/lps22hh -I../../Drivers/BSP/Components/stts751 -I../../Drivers/BSP/IKS01A3 -I../../Drivers/BSP/Components/Common -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-BSP-2f-Components-2f-lps22hh

clean-Drivers-2f-BSP-2f-Components-2f-lps22hh:
	-$(RM) ./Drivers/BSP/Components/lps22hh/lps22hh.cyclo ./Drivers/BSP/Components/lps22hh/lps22hh.d ./Drivers/BSP/Components/lps22hh/lps22hh.o ./Drivers/BSP/Components/lps22hh/lps22hh.su ./Drivers/BSP/Components/lps22hh/lps22hh_reg.cyclo ./Drivers/BSP/Components/lps22hh/lps22hh_reg.d ./Drivers/BSP/Components/lps22hh/lps22hh_reg.o ./Drivers/BSP/Components/lps22hh/lps22hh_reg.su

.PHONY: clean-Drivers-2f-BSP-2f-Components-2f-lps22hh
