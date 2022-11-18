/*
name:SENJUTI GHOSH
ROLL:21CY10036
DEPT:Chemistry
Package:CODEBLOCKS
*/
#include<stdio.h>
#define MAX 100;
typedef struct{
        int front;
        int rear;
        int arr[100];
}QUEUE;
/*Enters element from rear end*/
void Enque(QUEUE list){
    int i=list.rear;
    int j;
    if (i==100){
        printf("Queue is filled up");
        return;
    }
    i++;
    printf("Enter the element");
    scanf("%d",&list.arr[i]);
    if (list.front==-1){
        list.front++;
    }
    printf("The elements of the queue are");
    for (j=list.front;j<=i;j++){
         int y=list.arr[j];
         printf("%d",y);
    }
    list.rear++;
    return;
}
/*Removes element from front*/
void Deque(QUEUE list){
        int i=list.front;
        int j;
        if (i==-1){
            printf("Queue is empty");
            return;
        }
        printf("the removed element is %d",list.arr[i]);
        list.front++;
        printf("The queue contains");
        for (j=list.front;j<=list.rear;j++){
             printf("%d",list.arr[j]);
             }
        return;
}
int main(){
int option;
QUEUE list;
printf("Enter front");
scanf("%d",&list.front);
printf("Enter rear");
scanf("%d",&list.rear);
printf("Enter the option 1.Enque 2.Deque 3.Exit");
scanf("%d",&option);
while (option!=3){
       if (option==1){
           Enque(list);
           printf("Enter the option 1.Enque 2.Deque 3.Exit");
           scanf("%d",&option);
       }
       else if (option==2){
                Deque(list);
                printf("Enter the option 1.Enque 2.Deque 3.Exit");
                scanf("%d",&option);
       }
}
/*Exit case*/
if (option==3){
    printf("Code terminated");
}
return 0;
}
