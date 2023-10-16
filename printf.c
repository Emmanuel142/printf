#include "main.h"
/**
 */
int _printf(const char *format, ...)
{
	va_list(args);
	char c;
	char *s;
	int d, x;
	unsigned int b, u;
	va_start(args,format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					c = va_arg(args, int);
					_putchar(c);
					break;
				case 's':
					s = va_arg(args, char*);
					_puts(s);
					break;
				case '%':
					_putchar('%');
					break;
				case 'd':
				case 'i':
					d = va_arg(args, int);
					print_number(d);
					break;
				case 'b':
					b = va_arg(args, unsigned int);
					print_binary(b);
					break;
				case 'u':
					u = va_arg(args, unsigned int);
					print_unsign(u);
					break;
				case 'x':
					x = va_arg(args, int);
					print_unsign(x);
					break;
				default:
					_putchar(*format);
					break;
			}
		}
		else
		{
			_putchar(*format);
		}
		format++;
	}
	flush_buffer();
	va_end(args);
	return(0);
}
