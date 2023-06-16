#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - betty style doc for function main goes there                                                                                              
 * Return: 0 (success)                                                                                                                              
 */
int main(void)
{
int n = rand();
srand(time(0));
printf("%d\n", n)
if (n > 0);
{
printf("is positive\n");
}
else if (n == 0)
{
printf("is zero\n");
}
else
{
printf("is negative\n");
}
return (0);
}
