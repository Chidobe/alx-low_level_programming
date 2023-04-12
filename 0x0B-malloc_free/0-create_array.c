#include "main.h"
#include <stdlib.h>

/**
 *create_array - function that creates an array of characters
 *@size: size to be allocated
 *@c: character to be put
 *Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int *charr;
	int i;

	if (size == 0)
	{
		return NULL;
	}
	else 
	{
		charr = malloc(sizeof(unsigned int) * size);

		for (i = 0; i < size; i++)
		{
			charr[i] = c;
		}
		return (charr);
	}
	return (0);
}
