/*
Name- Bharat Kabra
roll: 21CH10015
Dept: Chemical
Package: vs code
Assignment class: 4
*/
#include <stdio.h>
#include <stdlib.h>
//Creating a structure Queue containing front, data, rear
struct Queue {         
      int front;
      int data;
      int rear;
};

int main() {
      struct Queue q[200];
      int m;
      int tail=0;
      int head=0;
      int x;

    for(int i=1;i>-1;i++){
            printf("Enter mode for Enque:1, Deque:2 and Exit:3\n");
        scanf("%d",&m);

        if(m==3){//for exiting 
                break;
        }else if(m==1){//for enque
            scanf("%d",&x);//taking input to add
            q[tail].front=tail;//it tells the number which is present just before the new number is added 
            q[tail].data=x; //storing x into the structure 
            q[tail].rear=tail+1; //giving tail+1 to the rear
            tail++;
        }else if(m==2){//for deque

            if(head==tail){
                printf("queue is empty");
            }
            x=q[head].data;
            printf("removing %d\n",q[head].data);//removing the number entered the earliest
            head=q[head].rear;//assigning head to the updated rear value

        }
        for(int j=head;j<tail;j++){
            printf("%d ",q[j].data);

        }
        printf("\n");
    }



    return 0;
}
