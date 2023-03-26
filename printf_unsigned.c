#include "main.h"

/**
 * printf_unsigned - Print a unsigned int
 * @list: Number to print
 *
 * Return: Length of the number
 **/
int printf_unsigned(va_list list)
{
	char *p_buff;
	int len, i;

	p_buff = _itoa(va_arg(list, unsigned int), 10);

	len = _strlen(p_buff);

	for (i = 0 ; i < len ; i++)
		_putchar(p_buff[i]);

	return (len);
}
