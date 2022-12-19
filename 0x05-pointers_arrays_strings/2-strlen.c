#include "main.h"

/**
* _strlen - returns strlen
* @s: par
* Return: int
*/
int _strlen(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		i++;
	}
	return (i);
}

