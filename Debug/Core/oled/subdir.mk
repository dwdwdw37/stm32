################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/oled/oled.c 

OBJS += \
./Core/oled/oled.o 

C_DEPS += \
./Core/oled/oled.d 


# Each subdirectory must supply rules for building sources it contributes
Core/oled/oled.o: ../Core/oled/oled.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F103xB -DDEBUG -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/10970/Documents/STM32_Source/encoder/Core/printf" -I"C:/Users/10970/Documents/STM32_Source/encoder/Core/control" -I"C:/Users/10970/Documents/STM32_Source/encoder/Core/DataScope" -I"C:/Users/10970/Documents/STM32_Source/encoder/Core/oled" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/oled/oled.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

