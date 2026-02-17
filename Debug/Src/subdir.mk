################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/gpio\ toggle.c \
../Src/syscalls.c \
../Src/sysmem.c 

OBJS += \
./Src/gpio\ toggle.o \
./Src/syscalls.o \
./Src/sysmem.o 

C_DEPS += \
./Src/gpio\ toggle.d \
./Src/syscalls.d \
./Src/sysmem.d 


# Each subdirectory must supply rules for building sources it contributes
Src/gpio\ toggle.o: ../Src/gpio\ toggle.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F446RETx -DNUCLEO_F446RE -c -I../Inc -I"C:/Users/hp/STM32CubeIDE/workspace_2.0.0/STM 32 f446re drivers/Driver Devolopment/Drivers/Inc" -I"C:/Users/hp/STM32CubeIDE/workspace_2.0.0/STM 32 f446re drivers/Driver Devolopment/Drivers/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"Src/gpio toggle.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/%.o Src/%.su Src/%.cyclo: ../Src/%.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F446RETx -DNUCLEO_F446RE -c -I../Inc -I"C:/Users/hp/STM32CubeIDE/workspace_2.0.0/STM 32 f446re drivers/Driver Devolopment/Drivers/Inc" -I"C:/Users/hp/STM32CubeIDE/workspace_2.0.0/STM 32 f446re drivers/Driver Devolopment/Drivers/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Src

clean-Src:
	-$(RM) ./Src/gpio\ toggle.cyclo ./Src/gpio\ toggle.d ./Src/gpio\ toggle.o ./Src/gpio\ toggle.su ./Src/syscalls.cyclo ./Src/syscalls.d ./Src/syscalls.o ./Src/syscalls.su ./Src/sysmem.cyclo ./Src/sysmem.d ./Src/sysmem.o ./Src/sysmem.su

.PHONY: clean-Src

