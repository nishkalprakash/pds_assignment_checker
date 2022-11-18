/* Name   : Pasupulety Chethan Krishna Venkat
   Dept   : Computer science
   Roll no: 21CS30036
   Package: Code blocks
   Os     : windows
*/


#include <stdio.h>
#define max 50

 // defining our data structure as que
typedef struct{
        int arr[max];
        int index_front;
        int index_rear;
    } que;

void enque(que a)

    {
        // check queue is full or not
        if (max ==a.index_rear) {
            printf("\noverflow\n");
            return;
        }

        // insert element at the rear
        else {
            int x,k;
                printf("enter the element:"); scanf("%d",&x);
            a.arr[a.index_rear] = x;
            a.index_rear++;
            //printing the new queue
            printf("the queue contains:\n");
            for(k=0;k<a.index_rear;k++) printf("%d",a.arr[k]);
            printf("\n");


        }
        return;
    }




void deque(que a){
    {
        int k;
        // if queue is empty
        if (a.index_front == a.index_rear) {
            printf("\nQueue is  empty\n");
            return;
        }

        // shift all the elements from index 2 till rear
        // to the left by one
        else {
            for (int i = 0; i < a.index_rear; i++) {
                a.arr[i] = a.arr[i + 1];
            }

            // decrement rear
          a.index_rear--;
          //printing the new queue
            printf("the queue contains:\n");
            for(k=0;k<a.index_rear;k++) printf("%d",a.arr[k]);
            printf("\n");
        }
        return;
    }

}



int main()
{


    //creating variable as a
    que a;

    //initialising the rear end and front end to be 0 to start execution
   a.index_rear=0;
    a.index_front=0;

    int y;
   while(1){

       printf("Enter the option: 1. Enque, 2. Deque, 3. Exit\n"); scanf("%d",&y);

       switch (y){
           case 1 : {enque(a);break;}
           case 2 : {deque(a);break;}
           case 3 : break;
       }
       if(y==3) break;
   }
return 0;
}
