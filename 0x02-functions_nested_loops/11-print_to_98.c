#include "main.h"
#include "stdio.h"

/**
 * print_to_98 - print natural numbers
 * @c : number to be printed
 * function that prints all natural numbers from c to 98
 * Return: Always 0
 */

void print_to_98(int c)
{
	if (c <= 98)
	{
		for (; c <= 98; c++)
		{
			printf("%d\n", c);

			if (c == 98)
				continue;
			printf(",");
		}
		printf("\n");
	}
	else
	{
		for (; c >= 98; c--)
		{
			printf("%d\n", c--);

			if (c == 98)
				continue;
			printf(",");
		}
		printf("\n");
	}
}
