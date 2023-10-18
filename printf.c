#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	int i, len;
	char placeholder;
	void (*handlers[128])(va_list);

	for (i = 0; i < 128; i++)
		handlers[i] = NULL;
	va_start(args, format);
	len = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			placeholder = *format;
			handlers['c'] = handle_char;
			handlers['s'] = handle_string;
			handlers['d'] = handle_integer;
			handlers['i'] = handle_integer;
			handlers['f'] = handle_float;
			handlers['%'] = handle_percent;
			handlers['x'] = handle_hex;
			handlers['X'] = handle_hex_upper;
			handlers['u'] = handle_unsigned;
			handlers['o'] = handle_octal;
			handlers['p'] = handle_pointer;
			if (handlers[(int)placeholder] != NULL)
				handlers[(int)placeholder](args);
			else
			{
				_putchar('%');
				_putchar(placeholder);
			}
		}
		else
			_putchar(*format);
		format++;
		len++;
	}
	flush_buffer();
	va_end(args);
	return (len);
}
void handle_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
}

void handle_string(va_list args)
{
	char *s;

	s = va_arg(args, char *);
	_puts(s);
}

void handle_integer(va_list args)
{
	int d;

	d = va_arg(args, int);
	print_number(d);
}

void handle_hex(va_list args)
{
	unsigned int x;

	x = va_arg(args, unsigned int);
	print_hex(x);
	flush_buffer();
}

void handle_octal(va_list args)
{
	unsigned int o;

	o = va_arg(args, unsigned int);
	print_octal(o);
}

void handle_pointer(va_list args)
{
	void *p;

	p = va_arg(args, void *);
	print_pointer(p);
}


