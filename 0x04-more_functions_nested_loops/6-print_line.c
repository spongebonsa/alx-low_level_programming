#include "main.h"
/**
 * print_line - draw line
 * @n: parameter
 * Return: something
 */
void print_line(int n)
{
	int r;

	if (n > 0)
	{
		for (r = 0; r < n; r++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
