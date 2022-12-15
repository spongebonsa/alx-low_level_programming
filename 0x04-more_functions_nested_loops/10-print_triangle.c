#include "main.h"
/**
 * print_triangle - draw triangle
 * @size: parameter
 * Return: traingle shape
 */
void print_triangle(int size)
{
	int i, j, k, l;

	l = size - 1;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < l; j++)
			{
				_putchar(' ');
			}
			l--;
			for (k = 0; k < (i + 1); k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else if (size <= 0)
	{
		_putchar('\n');
	}
}
