#include <stdio.h>
/**
 * main - prints even number less than 4 million
 * Return: 0 always
 */
int main(void)
{
	int a = 0, b = 1, c = 0;
	int add = 0;

	while (c < 4000000)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0)
			add += c;
	}
	printf("i\n", add);
	return (0);
}
