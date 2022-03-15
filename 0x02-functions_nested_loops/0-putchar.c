#include "0-putchar.c.h"

/**
 * main - prints 0-putchar.c
 *
 * Description: prints 0-putchar.c
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char text[10] = "0-putchar.c";
	int i = 0;

	for (i = 0; i < 9; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);}
