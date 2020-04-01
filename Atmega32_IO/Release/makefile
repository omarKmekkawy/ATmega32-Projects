################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include MCAL/subdir.mk
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
Atmega32_IO.lss \

FLASH_IMAGE += \
Atmega32_IO.hex \

EEPROM_IMAGE += \
Atmega32_IO.eep \

SIZEDUMMY += \
sizedummy \


# All Target
all: Atmega32_IO.elf secondary-outputs

# Tool invocations
Atmega32_IO.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Atmega32_IO.map -mmcu=atmega32 -o "Atmega32_IO.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Atmega32_IO.lss: Atmega32_IO.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Atmega32_IO.elf  >"Atmega32_IO.lss"
	@echo 'Finished building: $@'
	@echo ' '

Atmega32_IO.hex: Atmega32_IO.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex Atmega32_IO.elf  "Atmega32_IO.hex"
	@echo 'Finished building: $@'
	@echo ' '

Atmega32_IO.eep: Atmega32_IO.elf
	@echo 'Create eeprom image (ihex format)'
	-avr-objcopy -j .eeprom --no-change-warnings --change-section-lma .eeprom=0 -O ihex Atmega32_IO.elf  "Atmega32_IO.eep"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Atmega32_IO.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 Atmega32_IO.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(EEPROM_IMAGE)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) Atmega32_IO.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(EEPROM_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
