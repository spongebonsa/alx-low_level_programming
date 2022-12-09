#include <stdio.h>
#include <unistd.h>
/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: 0 if it exists
 */
int main(void)
{
	int b;

	for (b = 'z'; b >= 'a'; b--)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
