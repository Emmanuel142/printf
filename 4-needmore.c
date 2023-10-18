#include "main.h"

void print_hex_upper(unsigned int num)
{
	char hex_str[100];
	const char *hex_digits = "0123456789ABCDEF";
	unsigned int i, j, len, remainder;
	char temp;

	i = j = 0;
	if (num == 0)
	{
		hex_str[0] = '0';
		hex_str[1] = '\0';
		_puts(hex_str);
		return;
	}
	while (num != 0)
	{
		remainder = num % 16;
		hex_str[i++] = hex_digits[remainder];
		num /= 16;
	}
	hex_str[i] = '\0';
	len = i;
	for (j = 0; j < len / 2; j++)
	{
		temp = hex_str[j];
		hex_str[j] = hex_str[len - j - 1];
		hex_str[len - j - 1] = temp;
	}
	while (hex_str[j] != '\0')
	{
		hex_str[j] = _toupper(hex_str[j]);
		j++;
	}
	_puts(hex_str);
}
void handle_unsigned(va_list args)
{
	unsigned int num;

	num = va_arg(args, unsigned int);
	print_unsign(num);
}
void print_pointer(void **ptr)
{
	unsigned long address;
	address = (unsigned long)ptr;
	_putchar('0');
	_putchar('x');
	print_hex(address);
}
