#include <stdio.h>

int main() {
    int stack[5];
    int top = -1;  
    int choice, value;

    while (1) {
        printf("\nChoose an option:\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        scanf("%d", &choice);

        if (choice == 1) { 
            if (top == 4) {
                printf("Stack Overflow\n");
            } else {
                printf("Enter value to push: ");
                scanf("%d", &value);
                stack[++top] = value;
                printf("%d pushed onto stack\n", value);
            }
        } 
        else if (choice == 2) {
            if (top == -1) {
                printf("Stack Underflow\n");
            } else {
                printf("%d popped from stack\n", stack[top--]);
            }
        } 
        else if (choice == 3) {
            if (top == -1) {
                printf("Stack is empty\n");
            } else {
                printf("Stack elements are: ");
                for (int i = 0; i <= top; i++) {
                    printf("%d ", stack[i]);
                }
                printf("\n");
            }
        } 
        else if (choice == 4) {
            printf("Exiting...\n");
            break;
        } 
        else {
            printf("Invalid choice\n");
        }
    }
    return 0;
}
