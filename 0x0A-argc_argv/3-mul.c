#include <stdio.h>
#include <stdlib.h>

/**
 *main - print multiplication
 *@argc: the argument counts
 *@argv: the array of arguments
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int mult = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mult = mult * atoi(argv[i]);
		}
		printf("%d\n", mult);
	}
	return (0);
}
