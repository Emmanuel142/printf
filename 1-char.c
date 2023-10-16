#include "main.h"
/**
 */
int _puts(const char *string)
{
	while (*string != '\0')
	{
		_putchar(*string);
		string++;
	}
	return (0);
}

/**
 */
void _putchar(char c)
{
	if (bufer_index == (BUFFERSIZE - 1))
	{
		flush_buffer();
	}
	output_buffer[bufer_index++] = c;
}
/**
 */
void flush_buffer(void)
{
	if (bufer_index > 0)
	{
		write(1, output_buffer, bufer_index);
		bufer_index = 0;
	}
}

