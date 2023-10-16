#include "main.h"
/**
 */

char output_buffer[BUFFERSIZE];
int bufer_index = 0;

int _puts(const char *string)
{
	int len;
	len = 0;
	while (*string != '\0')
	{
		_putchar(*string);
		string++;
		len++;
	}
	return (len);
}

/**
 */
void _putchar(char c)
{
	/**
	if (bufer_index == (BUFFERSIZE - 1))
	{
		flush_buffer();
	}
	output_buffer[bufer_index++] = c;
	*/
	 write(1, &c, 1);
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

