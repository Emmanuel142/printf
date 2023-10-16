#include "main.h"
/**
 */
void print_binary(unsigned int num)
{
	int bit, i;
	int bits = sizeof(unsigned int) * 8;

	int significant_bit_encountered = 0;

	for (i = bits - 1; i >= 0; i--)
	{
		bit = (num >> i) & 1;

		if (bit || significant_bit_encountered)
		{
			_putchar(bit + '0');
			significant_bit_encountered = 1;
		}
	}
	if (!significant_bit_encountered)
		_putchar('0');
}
/**
 */
void print_unsign(unsigned int n)
{
	unsigned int divisor = 1;
	while (n / divisor >= 10)
		divisor *= 10;

	while (divisor != 0) {
		unsigned int digit = n / divisor;
		_putchar(digit + '0');
		n %= divisor;
		divisor /= 10;
	}
}
void print_number(int n)
{
	int digit;
	int divisor;

	if (n < 0) {
		_putchar('-');
		n = -n;
	}

	divisor = 1;
	while (n / divisor >= 10)
		divisor *= 10;

	while (divisor != 0)
	{
		digit = n / divisor;
		_putchar(digit + '0');
		n %= divisor;
		divisor /= 10;
	}
}
