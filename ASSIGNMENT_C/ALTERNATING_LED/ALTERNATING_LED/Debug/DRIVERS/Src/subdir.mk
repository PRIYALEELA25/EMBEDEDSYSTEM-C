################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../DRIVERS/Src/STM32_GPIODRIVER.c 

OBJS += \
./DRIVERS/Src/STM32_GPIODRIVER.o 

C_DEPS += \
./DRIVERS/Src/STM32_GPIODRIVER.d 


# Each subdirectory must supply rules for building sources it contributes
DRIVERS/Src/%.o DRIVERS/Src/%.su DRIVERS/Src/%.cyclo: ../DRIVERS/Src/%.c DRIVERS/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F446RETx -c -I../Inc -I"C:/Users/hp/STM32CubeIDE/workspace_2.0.0/ALTERNATIMG_LED/ALTERNATING_LED/DRIVERS/Inc" -I"C:/Users/hp/STM32CubeIDE/workspace_2.0.0/ALTERNATIMG_LED/ALTERNATING_LED/DRIVERS/Src" -I"C:/Users/hp/STM32CubeIDE/workspace_2.0.0/ALTERNATIMG_LED/ALTERNATING_LED/DRIVERS" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-DRIVERS-2f-Src

clean-DRIVERS-2f-Src:
	-$(RM) ./DRIVERS/Src/STM32_GPIODRIVER.cyclo ./DRIVERS/Src/STM32_GPIODRIVER.d ./DRIVERS/Src/STM32_GPIODRIVER.o ./DRIVERS/Src/STM32_GPIODRIVER.su

.PHONY: clean-DRIVERS-2f-Src

