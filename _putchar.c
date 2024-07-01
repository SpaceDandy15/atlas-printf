#include "main.h"

/**
 * _putchar - writes the character to c to stdout
 * @c: Character to print
 *
 * Return: On success 1.
 * On error, -1 is reurned, and errno is set appropriately. 
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}