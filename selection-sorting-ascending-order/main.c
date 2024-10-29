#include <stdio.h>

int main()
{
	int n;

	printf("Enter the Number of elements: ");
	scanf("%d", &n);

	int arr[n];

	printf("Enter the Elements: ");
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int temp;

	for(int i = 0; i < n - 1; i++) {
		int minIndex = i;


		for(int j = i + 1; j < n; j++) {
			if(arr[j] < arr[minIndex]) {
				minIndex = j;
			}
		}


		if(minIndex != i) {
			temp = arr[i];
			arr[i] = arr[minIndex];
			arr[minIndex] = temp;
		}
	}

	printf("Sorted elements: ");
	for(int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
