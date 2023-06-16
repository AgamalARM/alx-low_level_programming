#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: program that prints the alphabet in lowercas
 *
 * Return: 0 for success
*/

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	putchar('\n');
	return (0);
}
