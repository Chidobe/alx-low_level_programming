#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* main - program to check if a number is positive or negative */
int main(void)/* main - check positive or negative*/
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
{
printf("%d is negative\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else if (n > 0)
{
printf("%d is positive\n", n);
}
return (0);
}
