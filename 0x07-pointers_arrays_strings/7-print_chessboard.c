#include "main.h"

/**
* print_chessboard - prints the chessboard
* @a: board to be printed
*
* Return: no return
*/
void print_chessboard(char (*a)[8])
{
	int t, y;

	for (t = 0; t < 8; t++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[t][y]);
			if (y == 7)
			{
				_putchar('\n');
			}
		}
	}
}
