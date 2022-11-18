#include <stdio.h>
#define SIZE 5

void enque(int);
void deque();
void display();

int items[SIZE], front = -1, rear = -1;

int main() {
  //deque is not possible on empty queue
  deque();
int n;
printf("enter the option 1. enque or 2. denque\n");
scanf("%d",&n);
if (n==1) {int k;
  printf("enter the element\n");
  scanf("%d", &k);
  enque(k);
  display();
} else{
  //deque removes element entered first i.e. 1
  deque();

  //Now we have just 4 elements
  display();
}
  return 0;
}

void enque(int value) {
  if (rear == SIZE - 1)
    printf("\n Queue is Full!");
  else {
    if (front == -1)
      front = 0;
    rear++;
    items[rear] = value;
    printf("\n Inserted  %d", value);
  }
}

void deque() {
  if (front == -1)
    printf("\n queue is Empty!");
  else {
    printf("\n Deleted %d", items[front]);
    front++;
    if (front > rear)
      front = rear = -1;
  }
}

void display() {
  if (rear == -1)
    printf("\n quene is Empty!!!");
  else {
    int i;
    printf("\n queue elements are\n");
    for (i = front; i <= rear; i++)
      printf("%d  ", items[i]);
  }
  printf("\n");
}
