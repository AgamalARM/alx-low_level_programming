#include <unistd.h>
#include "main.h"

/**
 * _putchar - function that write a char c to output
 * @ch: the char to print
 *
 * Return: 1 for success and -1 for error
*/

int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
