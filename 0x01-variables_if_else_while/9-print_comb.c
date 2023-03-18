#include <stdio.h>
/**
* main - program that outputs numbers  with commas after each
* Return: 0
*/
int main(void)
{
int c;
int i;
int s;
for (c = 0; c < 10; c++)
{
putchar('0' + c);
if (c == 9)
break;
for (i = c; i < c; i++)
{
putchar(',');
for (s = c; s < c; s++)
{
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
