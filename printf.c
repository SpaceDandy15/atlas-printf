#include "main.h"

/**
 * _printf - Custom printf function implementation
 * @format: Format string
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;
    func_t p[] = {
        {'c', print_char},
        {'s', print_str},
        {'%', print_pct},
        {'d', print_dec},
        {'i', print_dec},
        {0, NULL}
    };

    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            for (int i = 0; p[i].t; i++)
            {
                if (*format == p[i].t)
                    count += p[i].f(args);
            }
        }
        else
        {
            putchar(*format);
            count++;
        }
        format++;
    }

    va_end(args);
    return count;
}

