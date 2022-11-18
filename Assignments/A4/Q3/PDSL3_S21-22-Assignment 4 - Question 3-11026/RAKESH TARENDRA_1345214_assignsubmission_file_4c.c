/*
rakesh tarendra
21MT30031
*/

#include <stdio.h>

// defining MAX
#define MAX 5

// declaring the structure
struct queue {
    float list[MAX];
    int front;
    int rear;
    int size;
};

// queue printing code
void print_queue(struct queue queue) {
        printf("\nThe queue contains ");
        for (int i = 0; i < queue.size; i++) {
            printf("%f", queue.list[i]);
            if (i == queue.size - 1) {
                printf("\n");
            } else {
                printf(", ");
            }
        }

}

// enque function code
struct queue enque(struct queue queue) {
    float element;
    printf("\nEnter the element: ");
    scanf("%f", &element);
    if (queue.size == 0) {
        queue.list[0] = element;
        queue.size = 1;
        queue.front = 0;
        queue.rear = 0;
    } else {
        queue.list[queue.size] = element;
        queue.rear = queue.size;
        queue.size = queue.size + 1;
    }
    print_queue(queue);
    return queue;
}

// deque function code
struct queue deque(struct queue queue) {
    if (queue.size != 0) {

    printf("\nRemoved element: %f", queue.list[queue.front]);
    for (int i = 0; i < (queue.size)-1; i++) {
        queue.list[i] = queue.list[i+1];
    }
    (queue.size)--;
    queue.rear = queue.size;
    print_queue(queue);
    } else {
        printf("\nThe queue is empty!\n");
    }
    return queue;
};

// main function code
int main() {
    struct queue Queue;
    int answer;
    do {
        printf("Enter the option: 1. Enque, 2. Deque, 3. Exit\n");
        scanf("%d", &answer);

        if (answer == 1) {
            if (Queue.size == MAX) {
                printf("\nThe queue is full!\n");
            } else {
                Queue = enque(Queue);
            }
        } else if (answer == 2) {
            Queue = deque(Queue);
        } else if (answer == 3) {
            continue;
        } else {
            printf("\nPlease enter a valid input.\n");
        }
    } while (answer != 3);

    return 0;
}


