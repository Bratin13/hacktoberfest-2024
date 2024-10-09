// C program for the above approach
#include <stdio.h>

// To find the minimum sum of the product of numbers
int findMinSum(int num)
{
	int sum = 0;

	// Find factors of the number and add to the sum
	for (int i = 2; i * i <= num; i++) {
		while (num % i == 0) {
			sum += i;
			num /= i;
		}
	}
	sum += num;

	// Return the sum of numbers having the minimum product
	return sum;
}

// Drivers Code
int main()
{
	int num = 12;

	printf("%d\n", findMinSum(num));

	return 0;
}
