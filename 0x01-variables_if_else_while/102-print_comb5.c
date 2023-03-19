#include<stdio.h>
/**
* main - program the prints combination of two 2-digit numbers from 0 - 9
* Return: 0
*/
int main(void)
{
int i;
int j;
int k;
int l;
for (i = 00; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
for (k = 0; k < 10; k++)
{
for (l = 1; l < 10; l++)
{
if (i >= j)
{
putchar(i + '0');
putchar(j + '0');
putchar(' ');
putchar(k + '0');
putchar(l + '0');
if (i + j + k + l == 35)
break;
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
