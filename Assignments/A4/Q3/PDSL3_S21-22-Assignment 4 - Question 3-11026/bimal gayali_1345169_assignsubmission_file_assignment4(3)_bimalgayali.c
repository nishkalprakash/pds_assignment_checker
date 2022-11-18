/*name-Bimal gayali
roll-21MA10017
question-03
*/

#include <stdio.h>
#define SIZE 5

void enque(int);
void deque();
void display();

int items[SIZE], front = -1, rear = -1;

int main() {
  //deque is not possible on empty queue
  deque();

  //enque 5 elements
  enque(1);
  enque(2);
  enque(3);
  enque(4);
  enque(5);

  // 6th element can't be added to because the queue is full
  enque(6);

  display();

  //deque removes element entered first i.e. 1
  deque();

  //Now we have just 4 elements
  display();

  return 0;
}

void enque(int value) {
  if (rear == SIZE - 1)
    printf("\nQueue is Full!!");
  else {
    if (front == -1)
      front = 0;
    rear++;
    items[rear] = value;
    printf("\nInserted  %d", value);
  }
}

void deque() {
  if (front == -1)
    printf("\nqueue is Empty!!");
  else {
    printf("\nDeleted : %d", items[front]);
    front++;
    if (front > rear)
      front = rear = -1;
  }
}

void display() {
  if (rear == -1)
    printf("\nquene is Empty!!!");
  else {
    int i;
    printf("\nqueue elements are:\n");
    for (i = front; i <= rear; i++)
      printf("%d  ", items[i]);
  }
  printf("\n");
}
