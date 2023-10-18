#include "main.h"

void handle_float(va_list args)
{
	double f;
	int i, count;

	f = va_arg(args, double);
	i = (int)f;
	print_number(i);
	_putchar('.');
	f = f - i;
	count = 0;
	while (count < 6)
	{
		f *= 10;
		i = (int)f;
		_putchar(i + '0');
		f = f - i;
		count++;
	}
}

void handle_percent(va_list args)
{

	(void)args;
	_putchar('%');
}

char _toupper(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return c - ('a' - 'A');
	}
	return (c);
}
void handle_hex_upper(va_list args)
{
	unsigned int x;

	x = va_arg(args, unsigned int);
	print_hex_upper(x);
}
