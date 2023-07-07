#include "main.h"

/**
 * get_bit - value of bit of index in a decimal number is returned
 * @n: search number
 * @index: bit of an index
 *
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
