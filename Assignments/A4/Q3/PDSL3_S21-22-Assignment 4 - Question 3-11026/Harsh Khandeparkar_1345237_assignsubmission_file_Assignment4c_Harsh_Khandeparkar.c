/*
	Name: Harsh Khandeparkar
	Roll: 21EC30023
	Dept: Electronics and Electrical Communication Engineering
	Package: Visual Studio Code, gcc v11.2.0
	Assign: 4(c)
*/

#include <stdio.h>
#define MAX 50

struct Queue
{
	// front is inclusive, rear is exclusive
	int front;
	int rear;
	int list[MAX];
};

// enqueues an element and returns the new state of the queue
struct Queue enqueue(
	struct Queue Q,
	int elem
) {
	// if rear is at MAX - 1 which is the last index of the list array, print an error message
	if (Q.rear == MAX) printf("Queue is full, cannot enqueue.\n");
	else {
		// else add the element to the list
		Q.list[Q.rear] = elem;
		// update rear (increment)
		Q.rear = Q.rear + 1;
	}

	return Q;
}

// dequeues an element and returns the new state of the queue
struct Queue dequeue(struct Queue Q) {
	// if rear == front, the queue is empty, in which case print an error message
	if (Q.front == Q.rear) printf("Queue is empty, cannot dequeue.\n");
	else {
		// print the removed element
		printf("Removed element: %d\n", Q.list[Q.front]);

		// move each element one step to the left
		// and overwrite element at index `front`
		int i;
		for (i = Q.front; i < Q.rear; i++) {
			// move each element by 1
			Q.list[i] = Q.list[i + 1];
		}

		// update rear (decrement)
		Q.rear = Q.rear - 1;
	}

	return Q;
}

// prints the current state of the queue
void print_queue(struct Queue Q) {
	printf("Current state of the queue: ");

	if (Q.front == Q.rear) {
		printf("Queue is empty.\n");
	}
	else {

		int i;
		for (i = Q.front; i < Q.rear; i++) {
			// print each element with a space in betweem
			printf("%d ", Q.list[i]);
		}

		printf("\n");
	}
}

int main() {
	struct Queue Q;

	Q.front = 0;
	Q.rear = 0;

	// infinite loop, use break to exit.
	while (1) {
		print_queue(Q);

		// choice entered by the user
		int choice;

		printf("Enter the option: 1. Enqueue 2. Dequeue 3. Exit\n");
		scanf("%d", &choice);

		// exit condition
		if (choice == 3) break;
		else if (choice == 1) {
			if (Q.rear == MAX) printf("Queue full, cannot enqueue.\n");
			else {
				int new_elem;
				printf("Enter the element: ");
				scanf("%d", &new_elem);

				Q = enqueue(Q, new_elem);
			}
		}
		else if (choice == 2)  Q = dequeue(Q);
		else {
			// in the default case, do nothing, the queue state will be printed in the next iteration
		}

		printf("\n");
	}

	return 0;
}