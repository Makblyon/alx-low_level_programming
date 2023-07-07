#include "main.h"
#include <unistd.h>
/**
 * _putchar - this writes character c to stdout
 * @c: main character to print
 *
 * Return: success on is 1.
 * On error, -1 will return, and error wil set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
