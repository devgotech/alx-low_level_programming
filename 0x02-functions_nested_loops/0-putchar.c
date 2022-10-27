#include "main.h"

/**
 * main - Print _putchar as output
 *
 * Return: Always 0 (success)
 */

int main(void)
{
<<<<<<< HEAD
	char str[] = "_putchar";
	int count;

	for (count = 0; count < 8; ++count)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
=======
    char str[] = "_putchar";
    int count, sz;

    sz = sizeof(str) / sizeof(char);
    for (count = 0; count < sz; count++)
    {
        _putchar(str[count]);
    }
    _putchar('\n');
>>>>>>> 50786a94da5bb3959f464a95eb2418664bee949f

	return (0);
}
