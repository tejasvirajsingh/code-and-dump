#include <stdio.h>

int binarySearch(int array[], int x, int low, int high)
{
	// Repeat until the pointers low and high meet each
	// other
	while (low <= high) {
		int mid = low + (high - low) / 2;

		if (array[mid] == x)
			return mid;

		if (array[mid] < x)
			low = mid + 1;

		else
			high = mid - 1;
	}

	return -1;
}

int main( )
{
	int array[] = { 2, 4, 5, 7, 14, 17, 19, 22, 54, 65, 55,99,0 };
	int n = sizeof(array) / sizeof(array[0]);
	int x = 99;
	int result = binarySearch(array, x, 0, n - 1);
	if (result == -1)
		printf("Not found");
	else
		printf("The number of index is:   %d", result);
	return 0;
}
