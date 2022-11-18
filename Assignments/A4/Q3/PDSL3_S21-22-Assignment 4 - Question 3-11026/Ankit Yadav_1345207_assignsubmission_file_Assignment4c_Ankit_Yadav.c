/*
Name : Ankit Yadav
Roll NO: 21EE30005
Department: Electrical Engineering
Package : Codeblocks
Operating system: Windows 11
Assignment : 4
*/

#include<stdio.h>
#define MAX 6


int enque(struct queue b ,int c){                       //enque function


        b.a[b.rear]=c;
        b.rear++;

       return b;


    }

int dequeue(struct queue b,int c){                     //dequeue function

     int j;
     for(j=b.front;j!=b.rear;j++){
        z.a[b.front]=x[b.front+1];
     }
           b.rear--;

           return b;

}






int main(){

struct queue {

 int a[MAX];
 int front;
 int rear;

}b,d;

int k,num,i;

b.front=0;
b.rear=0;
while(k!=3){                                                    //terminates when 3 is entered

    printf("\nEnter the option  1.Enque  2.Deque  3.Exit");
    scanf("%d",&k);

    if(k==1){

        if(b.rear == MAX-1){                                     //condition for overflow
            printf("\nThe Queue is full");
            continue;

        }else {

        printf("\nEnter the number");
        scanf("%d",&num);
        d=enque(b,num);                                          //enque is called


        }
        printf("\nThe Queue contains");
        for(i=0;i<d.rear;i++){printf("%d",&d.a[i]);}
    }

    if(k==2){

        if(b.front==b.rear){                                  //condition for underflow
            printf("\nThe Queue is Empty");
            continue;
        }else{

        printf("\nEnter the Number");
        scanf("%d",&num);
        d=dequeue(b,num);                                  //dequeue is called

        }

     printf("\nThe Queue contains");
     for(i=0;i<d.rear;i++){printf("%d",&d.a[i]);}
    }
}


return 0;
}
