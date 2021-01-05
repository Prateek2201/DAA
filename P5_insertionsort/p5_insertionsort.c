//WAP for Insertion Sort
#include <stdio.h>
#include <conio.h>
int main() {
	int arr[100], n, i, j, temp;

	printf("\nEnter the size of an array: ");
	scanf("%d", &n);

	printf("\nEnter %d integer(s): ", n);

	for (i=0; i<n; i++) {
		scanf("\n%d", &arr[i]);
	}

	for (i = 1; i <= n-1; i++) {
		j = i;
		while (j > 0 && arr[j] < arr[j-1]) {
			temp = arr[j];
			arr[j] = arr[j-1];
			arr[j-1] = temp;
			j--;
		}
	}

	printf("\nAfter Insertion Sort:");

	for (i = 0; i <= n-1;i++) {
		printf("\n%d", arr[i]);
	}

	return 0;
}
