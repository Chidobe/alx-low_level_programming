#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - prints addition
 *@argc: argument count
 *@argv: array of arguments
 *Return: the sum
 */

int main(int argc, char *argv[])
{
	int a, b;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[a]);
	}
	printf("%d\n", sum);
}
