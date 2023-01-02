#include "main.h"
/**
 * _strspn - get length of prefix substring
 * @s: string
 * @accept: substring
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b, match = 0;

	a = 0;
	while (s[a] != '\0')
	{
		if (s[a] != ' ')
		{
			b = 0;
			while (accept[b] != '\0')
			{
				if (s[a] == accept[b])
				{
					match++;
				}
				b++;
			}
		}
		else
		{
			return (match);
		}
		a++;
	}
	return (match);
}
