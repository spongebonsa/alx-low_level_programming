#include <stdio.h>
#include <unistd.h>
/**
 * main - print the alphabet in lowcase
 *
 * Return: 0 always
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		else
		{
		}
	}
	putchar('\n');
	return (0);
}
