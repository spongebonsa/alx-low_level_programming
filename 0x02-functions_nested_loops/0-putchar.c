#include <unistd.h>
/**
 * _putchar - Write a program that prints _putchar
 * @c: the character to print 
 * Return: The program should return 1
 * on error,  -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
