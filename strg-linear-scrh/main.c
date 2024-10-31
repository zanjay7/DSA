#include <stdio.h>
#include <string.h>

int main() {


	int num;


	printf("Enter the number of students: ");
	scanf("%d", &num);
	getchar();


	char students[num][40];

	printf("Enter the names of students:");
	for (int i = 0; i < num; i++) {

		fgets(students[i], sizeof(students[i]), stdin);
		students[i][strcspn(students[i], "\n")] = 0;
	}


	char search[50];
	printf("Enter the name to search: ");
	fgets(search, sizeof(search), stdin);
	search[strcspn(search, "\n")] = 0;

	int count;
	for (int i = 0; i < num; i++) {
		if (strcasecmp(students[i], search)==0) {
			printf("%s found at index %d.\n", search, i);
			count = 1;
			break;
		}
	}
	if (!count) {
		printf("%s is not found in the list.", search);
	}

	return 0;
}
