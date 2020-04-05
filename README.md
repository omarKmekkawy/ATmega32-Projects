# ATmega32-Projects
This repository for my ATmega32 Projects

<img src="https://raw.githubusercontent.com/rxtxinv/ATmega32-Projects/master/Images/IM001.jpg" height="600" width="700">

## Getting Started
In this repository, I will create new projects for the ATmega32 microcontroller.

### Prerequisites
* Eclipse IDE with AVR plugin installed.
* Extreme burner software (optional: for editing the fuses).
* USBASP programmer (or any AVR programmer).
* [Atmega32 Datasheet](https://github.com/rxtxinv/ATmega32-Projects/blob/master/Atmega32.pdf) (Optional).

### ATmega32 Fuse Settings
I have used custom AVR Fuses for my projects. These Fuses are as follows:

```
High Fuse: 0xBF
Low Fuse: 0xD9
```

<img src="https://github.com/rxtxinv/ATmega32-Projects/blob/master/Images/Fuses.PNG" height="600" width="800">

```
* The Fuses makes the AVR runs @ 16MHz with external crystal oscillator.
* Disabling the JTAG.
* Enabling the Brown out detection @ 2.7V 
```

#### Projects contained
* [Atmega32_Blink](https://github.com/rxtxinv/ATmega32-Projects/tree/master/Atmega32_Blink) Simple LED blink example.
* [Atmega32_IO](https://github.com/rxtxinv/ATmega32-Projects/tree/master/Atmega32_IO) Digital I/O and pull up resistor.
* [Atmega32_LCD](https://github.com/rxtxinv/ATmega32-Projects/tree/master/Atmega32_LCD) LCD Driver (Not completed yet).
*  
