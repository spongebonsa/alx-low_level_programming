#include <stdio.h>
/**
 * main - print base 16 numbers in lowercase
 *
 * Return: 0 always
 */
int main(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		putchar(ch);
	}
	for (ch = 97; ch <= 102; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
