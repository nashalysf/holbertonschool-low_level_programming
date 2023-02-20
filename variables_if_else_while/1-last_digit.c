#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* main - Entry point */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	switch (n % 10) {
		case (n > 5):
			printf("Last digit of %d is %d and is greater than 5\n", n);
			break;
		case (n === 0):
			printf("Last digit of %d id %d and id 0\n", n);
			break;
		default:
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n);
	return (0);
}
