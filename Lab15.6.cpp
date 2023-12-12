#include <iostream>
#include <stdio.h>
#define size 10

int main()
{
	int i, j, k;

	int array[size];

	for (i = 0; i < size; i++) {
		printf("Enter %d number: ", i + 1);
		scanf_s("%d", &array[i]);
	}

	int min = array[0];

	for (j = 1; j < size; j++) {
		if (array[j] < min)
			min = array[j];
	}
	printf("Min number is: %d\n", min);

	int max = array[0];

	for (k = 1; k < size; k++) {
		if (array[k] > max)
			max = array[k];
	}
	printf("Max number is: %d", max);

	return 0;
}