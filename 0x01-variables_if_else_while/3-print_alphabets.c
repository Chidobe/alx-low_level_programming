#include <stdio.h>
/**
* main - outputs alphabets in HIGHER and lower case
* Return: 0
*/
int main(void)
{
char c, A;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
for (A = 'A'; A <= 'Z'; A++)
{
putchar(A);
}
putchar('\n');
return (0);
}
