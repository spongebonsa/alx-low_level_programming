#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: 1 if it succeded
 * error if -1 returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
