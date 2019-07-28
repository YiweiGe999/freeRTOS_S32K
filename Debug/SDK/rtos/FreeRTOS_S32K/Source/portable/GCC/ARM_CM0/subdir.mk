################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../../../../../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../SDK/rtos/FreeRTOS_S32K/Source/portable/GCC/ARM_CM0/port.c" \

C_SRCS += \
../SDK/rtos/FreeRTOS_S32K/Source/portable/GCC/ARM_CM0/port.c \

OBJS_OS_FORMAT += \
./SDK/rtos/FreeRTOS_S32K/Source/portable/GCC/ARM_CM0/port.o \

C_DEPS_QUOTED += \
"./SDK/rtos/FreeRTOS_S32K/Source/portable/GCC/ARM_CM0/port.d" \

OBJS += \
./SDK/rtos/FreeRTOS_S32K/Source/portable/GCC/ARM_CM0/port.o \

OBJS_QUOTED += \
"./SDK/rtos/FreeRTOS_S32K/Source/portable/GCC/ARM_CM0/port.o" \

C_DEPS += \
./SDK/rtos/FreeRTOS_S32K/Source/portable/GCC/ARM_CM0/port.d \


# Each subdirectory must supply rules for building sources it contributes
SDK/rtos/FreeRTOS_S32K/Source/portable/GCC/ARM_CM0/port.o: ../SDK/rtos/FreeRTOS_S32K/Source/portable/GCC/ARM_CM0/port.c
	@echo 'Building file: $<'
	@echo 'Executing target #27 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@SDK/rtos/FreeRTOS_S32K/Source/portable/GCC/ARM_CM0/port.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "SDK/rtos/FreeRTOS_S32K/Source/portable/GCC/ARM_CM0/port.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '


