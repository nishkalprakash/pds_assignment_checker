/*
Name - Harish Takri
Dept - Chemistry
Roll no - 21CY10016
Package - Code Blocks
Operating System - Windows
*/

#include<stdio.h>
#include<stdlib.h>

struct queue{
	int front;
	int rear;
	int MAX;
	//MAX size 10
	int q[10];
}Q;

int Enque(int x){
	//Queue is full
	if(Q.rear==Q.MAX-1){
		return -1;
	}
	//Queue is empty
	if(Q.rear==-1){
		Q.front++;
	}
	Q.rear++;
	Q.q[Q.rear]=x;
	return 1;
}

int Deque(){
	//Queue is empty
	if(Q.front==-1){
		return -1;
	}
	int temp;
	//Queue contains 1 element
	if(Q.front==Q.rear){
		temp=Q.q[Q.front];
		Q.front=-1;
		Q.rear=-1;
	}
	else{
		temp=Q.q[Q.front];
		Q.front++;
	}
	return temp;
}

int main(){
	//Initially queue is empty
	Q.front=-1;
	Q.rear=-1;
	Q.MAX=10;
	int ch,x,i,res;
	while(1){
		printf("Enter the option: 1.Enque, 2.Deque, 3.Exit\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("Enter the element: ");
				scanf("%d",&x);
				res=Enque(x);
				//res=-1 if queue is full
				if(res==-1){
					printf("The queue is full\n");
				}
				else{
					//Print queue
					printf("The queue contains: ");
					for(i=Q.front;i<=Q.rear;i++){
						printf("%d ",Q.q[i]);
					}
					printf("\n");
				}
				break;
			case 2:
				res=Deque();
				//Queue is empty
				if(res==-1){
					printf("The queue is empty!!\n");
				}
				else{
					printf("Removed element: %d\n",res);
					if(Q.front==-1){
						printf("The queue is empty!!\n");
					}
					else{
						//Print elements
						printf("The queue contains: ");
						for(i=Q.front;i<=Q.rear;i++){
							printf("%d ",Q.q[i]);
						}
						printf("\n");
					}
				}
				break;
			case 3:
				//exit
				exit(0);
			default:
				//wrong choice
				printf("Wrong Choice!! Try again");
		}
	}
}
