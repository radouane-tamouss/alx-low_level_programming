#include "main.h"

/**
 * main - _putchar
 * follwwed by a new line
 * Return: Always 0 Sucess
 */
int main(void)
{
	char text[9] = "_putchar";
	int i = 0;

	for (i = 0 ; i < 8 ; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
