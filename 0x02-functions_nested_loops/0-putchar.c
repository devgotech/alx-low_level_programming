#include "main.h"

/**
 * main - Print _putchar as output
 *
 * Return: Always 0 (success)
 */

int main(void)
{
    char str[] = "_putchar";
    int count;

    for (count = 0; count < 8; ++count)
    {
        _putchar(str[count]);
    }
    _putchar('\n');

    return (0);
}