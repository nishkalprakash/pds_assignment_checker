/*
Name: Adipta Halder
Roll Number: 21EC30003
Department: EC
Package: CODEBLOCKS
O.S: Windows 10
Assignment Class: 3
Assignment number: 4c
*/
#include<stdio.h>
#define MAX 20 //defining max as 20

struct queue{
    int a[MAX]; //list
    int i; //front
    int j; //rear
};
//a1 = front
//b1 = rear
struct queue enque(struct queue q, int a1,int b1,int new1){
        q.a[b1+1]=new1;
        q.i=a1;//changing front
        q.j=b1+1;//changing rear
        return q;
}
struct queue deque(struct queue q, int a1,int b1,int dummy[]){
    dummy[0]=q.a[a1];
    q.j=b1;//changing rear
    q.i=a1+1;//changing front
    return q;

}
int main(){
    int op,new1,x,a1=0,b1=-1;
    struct queue q1,r;//r is defined to receive function output
    int dummy[1];//to denote removed element
    //initialising list assuming -1 is not entered. Concept is to enter something which will not be user input
    for(x=0;x<MAX;x++){
        q1.a[x]=-1;
    }
    while(1){
        printf("\nEnter the option: 1. Enque 2. Deque 3. Exit\n");
        scanf("%d",&op);
            if(op==3){
                return 0;
            }
            else if(op==2){
                if(a1>b1){//front index crosses rear so list is empty
                    printf("\nUnderflow! The queue is empty!");
                }
                else{
                    r=deque(q1,a1,b1,dummy);//receiving function output
                    a1++;//adjusting front
                    printf("Element removed is %d",dummy[0]);
                    printf("\nThe queue contains ");
                        for(x=a1;x<=b1;x++){
                            printf("%d, ", r.a[x]);
                    }
                    q1=r;//assigning r to q1 again
                }

            }
            else if(op==1){
                if(b1>=(MAX-1)){//maximum limit exceed condition
                    printf("\nOverflow! Limit exceeded.");
                }
                else{
                    printf("\nEnter the element: ");
                    scanf("%d",&new1);
                    r=enque(q1,a1,b1,new1);
                    b1++;//adjusting rear
                    printf("The queue contains ");
                        for(x=a1;x<=b1;x++){
                            printf("%d, ", r.a[x]);
                    }
                    q1=r;//assigning r to q1 again
                  }
                }
            }
 return 0;
}

