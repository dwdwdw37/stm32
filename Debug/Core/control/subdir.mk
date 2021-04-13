################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/control/control.c 

OBJS += \
./Core/control/control.o 

C_DEPS += \
./Core/control/control.d 


# Each subdirectory must supply rules for building sources it contributes
Core/control/control.o: ../Core/control/control.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F103xB -DDEBUG -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/10970/Documents/STM32_Source/encoder/Core/printf" -I"C:/Users/10970/Documents/STM32_Source/encoder/Core/control" -I"C:/Users/10970/Documents/STM32_Source/encoder/Core/DataScope" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/control/control.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

