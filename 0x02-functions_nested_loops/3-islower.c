#include "main.h"

/**
* int _islower(int c) -> checks if the character is lowercase
* @c: a character argument
* Return: return 1 if lower case, 0 if otherwise
*/

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
