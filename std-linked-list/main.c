#include <stdio.h>

struct Student {
	char name[50];
	int rollNumber;
	int next;
};

int main() {
	struct Student students[5]; 
	int head = -1;               
	int count = 0;              
	int choice;

	while (1) {
		printf("\nChoose an option:\n1. Add a student\n2. Display all students\n3. Exit\n");
		scanf("%d", &choice);

		if (choice == 1) { 
			if (count >= 5) {  
				printf("Cannot add more students. List is full.\n");
			} else {
				char name[50];
				int rollNumber;

				printf("Enter student name: ");
				scanf(" %s", name); 
				printf("Enter roll number: ");
				scanf("%d", &rollNumber);

			
				int index = count;
				for (int i = 0; i < 50; i++)
					students[index].name[i] = name[i];  
				students[index].rollNumber = rollNumber;
				students[index].next = -1;


				if (head == -1) {
					head = index;  
				} else {
					int temp = head;
					while (students[temp].next != -1) {
						temp = students[temp].next;
					}
					students[temp].next = index;  
				}

				count++;
				printf("Student %s with Roll Number %d added successfully.\n", name, rollNumber);
			}
		}
		else if (choice == 2) { 
			if (head == -1) {
				printf("No students in the list.\n");
			} else {
				int temp = head;
				printf("Student List:\n");
				while (temp != -1) {
					printf("Name: %s, Roll Number: %d\n", students[temp].name, students[temp].rollNumber);
					temp = students[temp].next;
				}
			}
		}
		else if (choice == 3) { 
			printf("Exiting..\n");
			break;
		}
		else {
			printf("Invalid choice\n");
		}
	}
	return 0;
}
