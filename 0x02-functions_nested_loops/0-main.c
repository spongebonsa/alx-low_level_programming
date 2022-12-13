#include "main.h"
/**
 * main - entry point
 * description: print main \n'
 * Return: 0 always
 */
int main(void)
{
	car str[] = "main\n";
	int i = 0;

	while (str[i] != '\0')
	{
		char c = str[i];

		_putchar(c);
		i++;
	}
	return (0);
}
