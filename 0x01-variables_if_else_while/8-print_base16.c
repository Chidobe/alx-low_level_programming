#include <stdio.h>
/**
* main - program that outputs all hexadecimal (base 16)
* Return: 0
*/
int main(void)
{
int c;
char h;
for (c = 0; c < 10; c++)
{
putchar(c + '0');
}
for (h = 'a'; h < 'g'; h++)
{
putchar(h);
}
putchar('\n');
return (0);
}
