################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/matth/Documents/Matthias_Meyer/Schule/Master/3.\ Semester/TSM_EmbReal/03_workspace/03_2_CPP_IKS01A3/Drivers/BSP/Components/lis2mdl/lis2mdl.c \
C:/Users/matth/Documents/Matthias_Meyer/Schule/Master/3.\ Semester/TSM_EmbReal/03_workspace/03_2_CPP_IKS01A3/Drivers/BSP/Components/lis2mdl/lis2mdl_reg.c 

C_DEPS += \
./Drivers/BSP/Components/lis2mdl/lis2mdl.d \
./Drivers/BSP/Components/lis2mdl/lis2mdl_reg.d 

OBJS += \
./Drivers/BSP/Components/lis2mdl/lis2mdl.o \
./Drivers/BSP/Components/lis2mdl/lis2mdl_reg.o 


# Each subdirectory must supply rules for building sources it contributes
Drivers/BSP/Components/lis2mdl/lis2mdl.o: C:/Users/matth/Documents/Matthias_Meyer/Schule/Master/3.\ Semester/TSM_EmbReal/03_workspace/03_2_CPP_IKS01A3/Drivers/BSP/Components/lis2mdl/lis2mdl.c Drivers/BSP/Components/lis2mdl/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DCORE_CM7 -DUSE_HAL_DRIVER -DSTM32H745xx -c -I../Core/Inc -I../../Drivers/STM32H7xx_HAL_Driver/Inc -I../../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../Drivers/CMSIS/Include -I../../Drivers/BSP/Components/lsm6dso -I../../Drivers/BSP/Components/lis2dw12 -I../../Drivers/BSP/Components/lis2mdl -I../../Drivers/BSP/Components/hts221 -I../../Drivers/BSP/Components/lps22hh -I../../Drivers/BSP/Components/stts751 -I../../Drivers/BSP/IKS01A3 -I../../Drivers/BSP/Components/Common -I../X-CUBE-MEMS1/Target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/BSP/Components/lis2mdl/lis2mdl_reg.o: C:/Users/matth/Documents/Matthias_Meyer/Schule/Master/3.\ Semester/TSM_EmbReal/03_workspace/03_2_CPP_IKS01A3/Drivers/BSP/Components/lis2mdl/lis2mdl_reg.c Drivers/BSP/Components/lis2mdl/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DCORE_CM7 -DUSE_HAL_DRIVER -DSTM32H745xx -c -I../Core/Inc -I../../Drivers/STM32H7xx_HAL_Driver/Inc -I../../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../Drivers/CMSIS/Include -I../../Drivers/BSP/Components/lsm6dso -I../../Drivers/BSP/Components/lis2dw12 -I../../Drivers/BSP/Components/lis2mdl -I../../Drivers/BSP/Components/hts221 -I../../Drivers/BSP/Components/lps22hh -I../../Drivers/BSP/Components/stts751 -I../../Drivers/BSP/IKS01A3 -I../../Drivers/BSP/Components/Common -I../X-CUBE-MEMS1/Target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-BSP-2f-Components-2f-lis2mdl

clean-Drivers-2f-BSP-2f-Components-2f-lis2mdl:
	-$(RM) ./Drivers/BSP/Components/lis2mdl/lis2mdl.cyclo ./Drivers/BSP/Components/lis2mdl/lis2mdl.d ./Drivers/BSP/Components/lis2mdl/lis2mdl.o ./Drivers/BSP/Components/lis2mdl/lis2mdl.su ./Drivers/BSP/Components/lis2mdl/lis2mdl_reg.cyclo ./Drivers/BSP/Components/lis2mdl/lis2mdl_reg.d ./Drivers/BSP/Components/lis2mdl/lis2mdl_reg.o ./Drivers/BSP/Components/lis2mdl/lis2mdl_reg.su

.PHONY: clean-Drivers-2f-BSP-2f-Components-2f-lis2mdl

