#include <stdlib.h>
#include <time.h>

/* Betty style doc for function main goes here */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes here */
int lastDigit = abs(n) % 10;  // Get the last digit of n
printf("Last digit of %d is ", n);  // Print the number and the prompt    
if (lastDigit > 5)
{
printf("%d and is greater than 5\n", lastDigit);
}
else if (lastDigit == 0);
{
printf("%d and is 0\n", lastDigit);
}
else
{
printf("%d and is less than 6 and not 0\n", lastDigit);
}    
return (0);
}
