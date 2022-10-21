#include "main.h"


/**
 * print_sign - prints the sign of a numnber
 * @n : character to be checked
 * Return: returns 1 and + if n is greater than zero
 * returns 0 and prints 0 if n is zero
 * returns -1 and prints - if n is less than zero
 */

int print_sign(int n)

{
	int c;
		if (n > 0)
		{
			c = 1;
			_putchar('+');
		}

		else if (n == 0)
		{
			c = 0;
			_putchar('0');
		}

		else
		{
			c = -1;
			_putchar('-');
		}
	return (c);
}
