################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
analogRead_pot.lss \

FLASH_IMAGE += \
analogRead_pot.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: analogRead_pot.elf secondary-outputs

# Tool invocations
analogRead_pot.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,analogRead_pot.map -mmcu=atmega32 -o "analogRead_pot.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

analogRead_pot.lss: analogRead_pot.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S analogRead_pot.elf  >"analogRead_pot.lss"
	@echo 'Finished building: $@'
	@echo ' '

analogRead_pot.hex: analogRead_pot.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex analogRead_pot.elf  "analogRead_pot.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: analogRead_pot.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 analogRead_pot.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) analogRead_pot.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
