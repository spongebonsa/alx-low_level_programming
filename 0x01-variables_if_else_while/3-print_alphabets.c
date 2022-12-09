#include <stdio.h>
#include <unistd.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase
 *
 * Return: 0 if it exists
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
