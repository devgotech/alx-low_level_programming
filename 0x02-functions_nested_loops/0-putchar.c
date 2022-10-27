#include "main.h"

/**
 * main - Print _putchar as output
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char str[] = "_putchar";
	int count, sz;

	sz = sizeof(str) / sizeof(char);
	for (count = 0; count < sz; ++count)
	{
		_putchar(str[count]);
	}
	_putchar('\n');

	return (0);
}
