#include "main.h"

int main(void)
{
    int len;

    /* Example usage of your printf function */
    len = _printf("Hello, %s!\n", "world");
    _printf("Length of output: %d\n", len);

    /* Additional test cases */
    _printf("Testing integer output: %d\n", 12345);
    _printf("Testing character output: %c\n", 'A');
    _printf("Testing string output: %s\n", "Hello");

    return (0);
}

