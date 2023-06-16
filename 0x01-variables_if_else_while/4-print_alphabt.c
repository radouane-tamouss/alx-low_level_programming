#include <stdio.h>

/**
 * main - pprints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' || ch != 'e')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
