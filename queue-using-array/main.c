#include <stdio.h>

int main() {
    int queue[5];      
    int front = -1;    
    int rear = -1;     
    int choice, value;

    while (1) {
        printf("\nChoose an option:\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        scanf("%d", &choice);

        if (choice == 1) { 
            if (rear == 4) {
                printf("Queue Overflow\n");
            } else {
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                if (front == -1) front = 0; 
                queue[++rear] = value;
                printf("%d enqueued to queue\n", value);
            }
        } 
        else if (choice == 2) { 
            if (front == -1 || front > rear) {
                printf("Queue Underflow\n");
                front = rear = -1;
            } else {
                printf("%d dequeued from queue\n", queue[front++]);
            }
        } 
        else if (choice == 3) { 
            if (front == -1 || front > rear) {
                printf("Queue is empty\n");
            } else {
                printf("Queue elements are: ");
                for (int i = front; i <= rear; i++) {
                    printf("%d ", queue[i]);
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
