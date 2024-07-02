Hello, welcome to our README.md this is the one stop shop for
info on how we created our very own printf function!
TO get started we needed to make some files 

MAIN.H
* Contains the declaration of the func_type structure, which maps format specifiers
 to their corresponding handler functions.
* Includes necessary standard libraries such as <stdarg.h> <unistd.h> <stdlib.h>
<stdio.h> <limits.h> and <string.h>
* Declares Function prototypes for _print, _putchar, print_dec, print_ char, print_str,
print_pct, and get_func.

_putchar.c
*Implements the _putchar function, which writes a single character to stdout. It uses th writes system call to achieve this.

print_dec.c
* Implements the print_dec function, which prints an integer value. It handles both positive and negative integars, converting them to their ASC rpresentation and printing each digit individually.

print_char.c
* Implements the print_char function, which pritns a single character. It simply calls _putchar
with the character to be printed.

print_str.call
*Implements the print_str function, which prints a stirng. it iterates through each
character of the string and prints it using _putchar. if the string is NULL, it prints (null) instead.

print_pct.c
*Implements the print_pct function, whic prints a percent sign %. It does not take any arguments and simply
writs % to stdout.

get_func.c
* Implements the get_func fucntions, which maps a format specifier to its coresponding handler
function. It uses an array of func_type structures to perform this mapping.

main.c
*contains the main function, which demonstrates the usage of _printf wiht various format
specifiers and arguments.

Here is a quick summary of the functions: 
_putchar: Writs a single character to stdout.
print_dec: Prints an integer value, handling both positve and negative numbers.
print_char: Prints a single character.
print_str: Prints a string, handling NULL values gracefully.
print_pct: Prints a percent sign %.
get_func: Maps format specifiers to their corresponding handler functions.
_printf: The main function that parses a format string and variable arguments, calling the
appropriate handler functions based on the format specifiers encountered.

*insert flow chart  here*

Creators of this printf are SpaceDandy15 & NamesteSensei