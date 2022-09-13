#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints _putchar followed by a new line to the standard output
 *
 * Return: always 0
 */

	int main()
	{
		char ch;

		for(ch = 'A' ; ch <= 'Z' ; ch++);
		{
			putchar (ch);
		}
		
		return(0);
	}
