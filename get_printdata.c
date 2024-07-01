#include "main.h"

/**
 * get_func - Get the function corresponding to the format specifier
 * @format: Format specifier character
 * Return: Pointer to function matching the specifier
 */
int (*get_func(char s))(va_list args)
{
    func_t p[] = {
        {'c', print_char},
        {'s', print_str},
        {'%', print_pct},
        {'d', print_dec},
        {'i', print_dec},
        {0, NULL}
    };

    for (int i = 0; p[i].t; i++)
    {
        if (s == p[i].t)
            return p[i].f;
    }

    return NULL;
}

