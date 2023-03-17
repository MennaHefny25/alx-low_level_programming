#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - A program that assign a random number to the variable n each time it is executed
 *and print the last digit of the number stored in the variable n
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	int lastDigit ;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	printf("Last digit of %d is %d ", n , lastDigit);
	if (lastDigit > 5)
		printf("and is greater than 5\n");
	else if (lastDigit < 6 && lastDigit != 0)
		printf("and is less than 6 and not 0\n");
	else
		printf("and is 0\n");
	printf("\n");
	return (0);
}
