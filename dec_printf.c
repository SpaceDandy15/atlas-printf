#include "main.h"

/**
 * print_dec - prints decimal
 * @args: the argument decimal
 * 
 * Return: number of characters printed
 */
int print_dec(va_list args)
{
    int value;
    unsigned int abs, a, len;
    unsigned int countn = 1;

    len = 0;
    value = va_arg(args, int);

    if (value < 0)
    {
        len += _putchar('-');
        abs = -value;
    }
    else
    {
        abs = value;
    }

    a = abs;
    while (a > 9)
    {
        a = a / 10;
        countn = countn * 10;
    }
    while (countn >= 1)
    {
        len += _putchar(((abs / countn) % 10) + '0');
        countn = countn / 10;
    }
    return (len);
}

