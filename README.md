# `_printf` Function

## Description
The `_printf` function prints formatted output to stdout.
The format string is a string that contains special sequences
that are replaced with the corresponding arguments. 

## Simplified Flowchart

![Image Link](https://github.com/cpmoore0317/holbertonschool-printf/blob/master/Flow%20chart%20for%20_printf.c.jpg)

The `_printf` function was created using the GCC compiler with the following flags on Basic Ubuntu 20.04:
*-Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

## Instructions:

### Print string literals
`_printf`("This is a string.");
> This is a string.

## FORMAT SEQUNCES

%c: Prints  the argument as a character.
%d: Prints the argument as a decimal number.
%i: Prints the argument as an integer.
%s: Prints the argument as a string.

### EXAMPLES

`_printf`("The character 'a' is %c.", 'a');
> The character 'a' is 'a'.

`_printf`("The decimal number 123 is %d.0, 123);
> The decimal number 123 is 123.

`_printf`("The integer  123  is %i.0,  123);
> The integer 123 is 123.

`_printf`("The string "Hello, world!" is %s.0, "Hello, world!");
> The string "Hello, world!" is Hello, world!

### RETURN VALUE

The `_printf` function returns the number  of  characters
printed, not including the terminating null byte ('\0').

### ERRORS

The `_printf` function may fail for the following reasons:
* The format string is invalid.
* An error occurs while accessing the file system.


## Authors:
Parker Moore | [github - cpmoore0317](https://github.com/cpmoore0317/) 

Ethan Zalta | [github - Zal-atan](https://github.com/Zal-atan)
