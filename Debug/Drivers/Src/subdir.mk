################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/Src/STM32_GPIO.c 

OBJS += \
./Drivers/Src/STM32_GPIO.o 

C_DEPS += \
./Drivers/Src/STM32_GPIO.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/Src/%.o Drivers/Src/%.su Drivers/Src/%.cyclo: ../Drivers/Src/%.c Drivers/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F446RETx -DNUCLEO_F446RE -c -I../Inc -I"C:/Users/hp/STM32CubeIDE/workspace_2.0.0/STM 32 f446re drivers/Driver Devolopment/Drivers/Inc" -I"C:/Users/hp/STM32CubeIDE/workspace_2.0.0/STM 32 f446re drivers/Driver Devolopment/Drivers/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Drivers-2f-Src

clean-Drivers-2f-Src:
	-$(RM) ./Drivers/Src/STM32_GPIO.cyclo ./Drivers/Src/STM32_GPIO.d ./Drivers/Src/STM32_GPIO.o ./Drivers/Src/STM32_GPIO.su

.PHONY: clean-Drivers-2f-Src

