#include "main.h"

/**
 * _printf - Custom printf function implementation.
 * @format: Format string.
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
    va_list args;
    int printed_chars = 0;

    va_start(args, format);

    while (*format)
    {
        if (*format != '%')
        {
            printed_chars += _putchar(*format);
        }
        else
        {
            format++;
            if (*format == '\0')
                return (-1); /* Handle malformed format string*/

            if (get_func(format))
                printed_chars += get_func(format)(args);
            else
                printed_chars += _putchar('%') + _putchar(*format);
        }
        format++;
    }

    va_end(args);
    return (printed_chars);
}

/* Remove or comment out this duplicate _putchar definition

int _putchar(char c)
{
    return write(1, &c, 1);
}
*/

