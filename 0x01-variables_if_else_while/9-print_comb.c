#include <stdio.h>
/**
* main - program that outputs numbers  with commas after each
* Return: 0
*/
int main(void)
{
int c;
for (c = 0; c < 10; c++)
{
putchar('0' + c);
if (c == 9)
break;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
