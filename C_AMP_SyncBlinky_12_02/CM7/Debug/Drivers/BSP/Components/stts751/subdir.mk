################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/matth/Documents/Matthias_Meyer/Schule/Master/3.\ Semester/TSM_EmbReal/03_workspace/C_AMP_SyncBlinky_12_02/Drivers/BSP/Components/stts751/stts751.c \
C:/Users/matth/Documents/Matthias_Meyer/Schule/Master/3.\ Semester/TSM_EmbReal/03_workspace/C_AMP_SyncBlinky_12_02/Drivers/BSP/Components/stts751/stts751_reg.c 

OBJS += \
./Drivers/BSP/Components/stts751/stts751.o \
./Drivers/BSP/Components/stts751/stts751_reg.o 

C_DEPS += \
./Drivers/BSP/Components/stts751/stts751.d \
./Drivers/BSP/Components/stts751/stts751_reg.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/BSP/Components/stts751/stts751.o: C:/Users/matth/Documents/Matthias_Meyer/Schule/Master/3.\ Semester/TSM_EmbReal/03_workspace/C_AMP_SyncBlinky_12_02/Drivers/BSP/Components/stts751/stts751.c Drivers/BSP/Components/stts751/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DCORE_CM7 -DUSE_HAL_DRIVER -DSTM32H745xx -c -I../X-CUBE-MEMS1/Target -I../Core/Inc -I../../Drivers/BSP/Components/lsm6dso -I../../Drivers/BSP/Components/lis2dw12 -I../../Drivers/BSP/Components/lis2mdl -I../../Drivers/BSP/Components/hts221 -I../../Drivers/BSP/Components/lps22hh -I../../Drivers/BSP/Components/stts751 -I../../Drivers/BSP/IKS01A3 -I../../Drivers/BSP/Components/Common -I../../Drivers/STM32H7xx_HAL_Driver/Inc -I../../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/BSP/Components/stts751/stts751_reg.o: C:/Users/matth/Documents/Matthias_Meyer/Schule/Master/3.\ Semester/TSM_EmbReal/03_workspace/C_AMP_SyncBlinky_12_02/Drivers/BSP/Components/stts751/stts751_reg.c Drivers/BSP/Components/stts751/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DCORE_CM7 -DUSE_HAL_DRIVER -DSTM32H745xx -c -I../X-CUBE-MEMS1/Target -I../Core/Inc -I../../Drivers/BSP/Components/lsm6dso -I../../Drivers/BSP/Components/lis2dw12 -I../../Drivers/BSP/Components/lis2mdl -I../../Drivers/BSP/Components/hts221 -I../../Drivers/BSP/Components/lps22hh -I../../Drivers/BSP/Components/stts751 -I../../Drivers/BSP/IKS01A3 -I../../Drivers/BSP/Components/Common -I../../Drivers/STM32H7xx_HAL_Driver/Inc -I../../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-BSP-2f-Components-2f-stts751

clean-Drivers-2f-BSP-2f-Components-2f-stts751:
	-$(RM) ./Drivers/BSP/Components/stts751/stts751.cyclo ./Drivers/BSP/Components/stts751/stts751.d ./Drivers/BSP/Components/stts751/stts751.o ./Drivers/BSP/Components/stts751/stts751.su ./Drivers/BSP/Components/stts751/stts751_reg.cyclo ./Drivers/BSP/Components/stts751/stts751_reg.d ./Drivers/BSP/Components/stts751/stts751_reg.o ./Drivers/BSP/Components/stts751/stts751_reg.su

.PHONY: clean-Drivers-2f-BSP-2f-Components-2f-stts751

