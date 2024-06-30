<<<<<<< HEAD
#ifndef MAIN_H
#define MAIN_H

/* Standard Libraries */
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/* Function Prototypes */

/**
 * _printf - Produces output according to a format.
 * @format: A character string. The format string is composed of zero or more
 * directives. See man 3 printf for more detail.
 *
 * Return: The number of characters printed (excluding the null byte
 * used to end output to strings).
 */
int _printf(const char *format, ...);

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to print.
 *
 * Return: On success, returns the number of characters printed (1).
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * print_char - Prints a character.
 * @args: A list of variadic arguments.
 *
 * Return: The number of characters printed (1).
 */
int print_char(va_list args);

/**
 * print_string - Prints a string.
 * @args: A list of variadic arguments.
 *
 * Return: The number of characters printed.
 */
int print_string(va_list args);

/**
 * print_int - Prints an integer.
 * @args: A list of variadic arguments.
 *
 * Return: The number of characters printed.
 */
int print_int(va_list args);

/**
 * get_function - Selects the correct function to perform the operation
 * requested by the format specifier.
 * @s: The format specifier passed to _printf.
 *
 * Return: A pointer to the function that corresponds to the format specifier.
 */
int (*get_function(char s))(va_list args);

#endif /* MAIN_H */

=======
hello do you see me.
i do can you see me?
>>>>>>> d7871f5b73c137d8887ee83096a7ed8e459b104b
