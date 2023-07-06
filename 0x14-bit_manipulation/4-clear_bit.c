#include "main.h"

/**
 * clear_bit - it sets the value of given bit to 0.
 * @n: pointr to the num to change
 * @index: the index of the bit to remove
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

