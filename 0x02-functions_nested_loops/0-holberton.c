#include "holberton.h"
/**
 * main - print "Holberton" followed by new line
 * 
 * Return: 0 always
 */
int main(void)
{
	char holberton[] = "Holberton";
	int i = 0;

	while (holberton[i] != '\0')
	{
		_putchar(holberton[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
