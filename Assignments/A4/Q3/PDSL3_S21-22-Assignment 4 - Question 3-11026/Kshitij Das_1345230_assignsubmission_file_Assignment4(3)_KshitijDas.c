/* Name			: Kshitij Das
   Class No. 	: 2
   Roll No.		: 21CS10039
   Department	: CSE
   Package		: Notepad++
   OS			: MS Windows 11
   */

#include <stdio.h>
#define N 50
int front = 0;//this will always be zero
int rear = 0;
int a[N];

void enque();
void deque();

int main(void){
    int x;
    int i;
    do{
        printf("\nEnter the option: 1. Enque, 2. Deque 3.Exit\n");
        scanf("%d",&x);
        switch(x){
            case 1:
                printf("Enter the element:");
                scanf("%d", &i);
                a[rear] = i;//inserting input
                enque();
                printf("\n\n");
                break;
            
            case 2:
                deque();
                break;
            case 3:
                break;
        }
    }while(x != 3);
    return 0;
}

void enque(){
    //overflow check
    if(rear == N){
        printf("\nThe queue is full!");
        return;
    }
    rear++;//rear will increase by 1
    //printing what queue contains
    printf("\nthe queue contains");
    int i;
    for(i = 0;i < rear; i++){
        printf(" %d",a[i]);
    }
    return;
}

void deque(){
    //underflow check
    if(rear == 0){
        printf("\nThe queue is empty!");
        return;
    }
    printf("Removed element %d", a[front]);
    int i;
    //copying elements to get the feeling of front element removed
    for(i = 0;i < rear - 1;i++){
        a[i] = a[i + 1];
    }
    rear--;
    //printing what queue contains
    printf("\nthe queue contains");
    for(i = 0;i < rear; i++){
        printf(" %d",a[i]);
    }
    return;
}