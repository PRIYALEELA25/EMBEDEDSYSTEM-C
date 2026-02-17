################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/Inc/stm32\ GPIO.c 

OBJS += \
./Drivers/Inc/stm32\ GPIO.o 

C_DEPS += \
./Drivers/Inc/stm32\ GPIO.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/Inc/stm32\ GPIO.o: ../Drivers/Inc/stm32\ GPIO.c Drivers/Inc/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F446RETx -DNUCLEO_F446RE -c -I../Inc -I"C:/Users/hp/STM32CubeIDE/workspace_2.0.0/STM 32 f446re drivers/Driver Devolopment/Drivers/Inc" -I"C:/Users/hp/STM32CubeIDE/workspace_2.0.0/STM 32 f446re drivers/Driver Devolopment/Drivers/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"Drivers/Inc/stm32 GPIO.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Drivers-2f-Inc

clean-Drivers-2f-Inc:
	-$(RM) ./Drivers/Inc/stm32\ GPIO.cyclo ./Drivers/Inc/stm32\ GPIO.d ./Drivers/Inc/stm32\ GPIO.o ./Drivers/Inc/stm32\ GPIO.su

.PHONY: clean-Drivers-2f-Inc

