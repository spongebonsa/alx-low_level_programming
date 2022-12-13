#include <stdio.h>
/**
 * main - prints sum of 3 or 5 upto 1024
 * Return: 0 if its success
 */
int main(void)
{
	int a, b = 0;

	while (a < 1024)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			b += a;
		}

		a++;
	}
	printf("%d\n", b);
	return (0);
}
