#include <stdio.h>

/**
 * main - prints the alphabet in loercase, and then in uppercase,
 * folloed by a new line
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	 int ch;

	 for (ch = 'a'; ch <= 'z'; ch++)
		 putchar(ch);
	 for (ch = 'A'; ch <= 'Z'; ch++)
		 putchar(ch);
	 putchar('\n');
	 return (0);
}
