#include "main.h"

/**
 * _islower - checks if character is lowercase
 * @c : character arguement
 * Return: return 1 if character is lowercase, otherwise 0.
 */

int _islower(int c)
{

		if (c >= 'a' && c <= 'z')
			return (1);
		else
			return (0);
}
