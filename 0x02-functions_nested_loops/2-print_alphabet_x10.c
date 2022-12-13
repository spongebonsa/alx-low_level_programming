#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10 times
 */
void print_alphabet_x10(void)
{
	int n;
	char b;

	for (n = 0; n <= 9; n++)
	{
		for (b = 'a'; b <= 'z'; b++)
			_putchar(b);
		_putchar('\n');
	}
}
