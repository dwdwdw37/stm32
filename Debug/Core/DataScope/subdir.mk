################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/DataScope/DataScope_DP.c 

OBJS += \
./Core/DataScope/DataScope_DP.o 

C_DEPS += \
./Core/DataScope/DataScope_DP.d 


# Each subdirectory must supply rules for building sources it contributes
Core/DataScope/DataScope_DP.o: ../Core/DataScope/DataScope_DP.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F103xB -DDEBUG -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/10970/Documents/STM32_Source/encoder/Core/printf" -I"C:/Users/10970/Documents/STM32_Source/encoder/Core/control" -I"C:/Users/10970/Documents/STM32_Source/encoder/Core/DataScope" -I"C:/Users/10970/Documents/STM32_Source/encoder/Core/oled" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/DataScope/DataScope_DP.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

