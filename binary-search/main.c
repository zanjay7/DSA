#include <stdio.h>

int main() {
    int num;
    printf("Enter the number of employees: ");
    scanf("%d", &num);

    int employees[num];

    printf("Enter the employee IDs in sorted order:\n");
    for (int i = 0; i < num; i++) {
        scanf("%d", &employees[i]);
    }

    int searchid;
    printf("Enter the employee ID to search: ");
    scanf("%d", &searchid);

    int left = 0;
    int right = num - 1;
    int found = 0;

    while (left <= right) {
        int mid = left + right / 2;

        if (employees[mid] == searchid) {
            printf("Employee ID %d found at index %d.\n", searchid, mid);
            found = 1;
            break;
        }
        else if (employees[mid] > searchid) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }

    if (!found) {
        printf("Employee ID %d is not found in the list.\n", searchid);
    }

    return 0;
}
