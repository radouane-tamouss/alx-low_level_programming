#include <stdio.h>

/**
 * main - print all single digit numbers of base 10
 * followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58 ; i++)
		putchar(i);

	putchar('\n');
	return (0);
}
