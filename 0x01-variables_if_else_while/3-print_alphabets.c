#include <stdio.h>
/**
 * main - putchar a character
 * it executes, and pr...
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	 char i='a';
	 char j='A';
	 for(i='a';i<='z';i++)
		putchar(i); 
	 for(j='A';j<='Z';j++)
		 putchar(j);
	 putchar('\n');
	 return (0);
}
