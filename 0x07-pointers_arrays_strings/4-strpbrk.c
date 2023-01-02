#include "main.h"
#include <stdio.h>

/**
* _strpbrk - locates the first occurence in the string s of any of the
* bytes in the string accept
* @s: string to be searched
* @accept: substring
*
* Return: returns pointer to byte
*/
char *_strpbrk(char *s, char *accept)
{
	int w;

	while (*s)
	{
		for (w = 0; accept[w]; w++)
		{
			if (*s == accept[w])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
