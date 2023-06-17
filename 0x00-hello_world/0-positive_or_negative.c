#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - determines if a number is positive, negative or zero
*
* return: always 0 (success)
*/
int main(void)
{
srand(time(0));
int n = rand() % 201 - 100;
if (n > 0)
{
printf("positive\n");
}
else if (n < 0)
{
printf("negative\n");
}
else
{
printf("zero\n");
}
return (0);
}
