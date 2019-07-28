################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/led.c" \
"../Sources/main.c" \
"../Sources/rtos.c" \
"../Sources/uart.c" \

C_SRCS += \
../Sources/led.c \
../Sources/main.c \
../Sources/rtos.c \
../Sources/uart.c \

OBJS_OS_FORMAT += \
./Sources/led.o \
./Sources/main.o \
./Sources/rtos.o \
./Sources/uart.o \

C_DEPS_QUOTED += \
"./Sources/led.d" \
"./Sources/main.d" \
"./Sources/rtos.d" \
"./Sources/uart.d" \

OBJS += \
./Sources/led.o \
./Sources/main.o \
./Sources/rtos.o \
./Sources/uart.o \

OBJS_QUOTED += \
"./Sources/led.o" \
"./Sources/main.o" \
"./Sources/rtos.o" \
"./Sources/uart.o" \

C_DEPS += \
./Sources/led.d \
./Sources/main.d \
./Sources/rtos.d \
./Sources/uart.d \


# Each subdirectory must supply rules for building sources it contributes
Sources/led.o: ../Sources/led.c
	@echo 'Building file: $<'
	@echo 'Executing target #30 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@Sources/led.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "Sources/led.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Sources/main.o: ../Sources/main.c
	@echo 'Building file: $<'
	@echo 'Executing target #31 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@Sources/main.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "Sources/main.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Sources/rtos.o: ../Sources/rtos.c
	@echo 'Building file: $<'
	@echo 'Executing target #32 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@Sources/rtos.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "Sources/rtos.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Sources/uart.o: ../Sources/uart.c
	@echo 'Building file: $<'
	@echo 'Executing target #33 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@Sources/uart.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "Sources/uart.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '


