#include <stdio.h>
/**
* main - program that outputs all alphabets in lower case
* Return: 0
*/
int main(void)
{
char c;
while (c == 'a' || c <= 'z')
{
putchar(c);
}
putchar('\n');
return (0);
}
