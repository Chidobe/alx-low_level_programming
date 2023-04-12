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
	char *charr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		charr = malloc(sizeof(char) * size);

		if (charr == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < size; i++)
		{
			charr[i] = c;
		}
		return (charr);
	}
}
