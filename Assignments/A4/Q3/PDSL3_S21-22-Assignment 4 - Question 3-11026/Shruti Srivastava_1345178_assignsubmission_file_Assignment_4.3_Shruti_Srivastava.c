/* Shruti Srivastava
   21EE30025
   Electrical Engg Dual Degree
   Code Blocks
   Windows 10*/


#include<stdio.h>
#define MAX 100
struct info
{
  int Arr[MAX];
  int front;
  int rear;
};
void enque(struct info,int num);
void deque(struct info, int num2);

int main()
{
  int option,num,num2,j;
  struct info i;
  i.front = -1;
  i.rear = -1;  /* initializing values to front and rear */
      while(1)
         {
              printf("Enter your option: 1.Enque  2.Deque  3.Exit\n"); /* Asking for options from user*/
              scanf("%d",&option);

             switch(option)
                {
                        case 1:
                        printf("Enter the Element\n");
                        scanf("%d",&num);
                        enque(i,num);

                        if(i.front==-1) /* Queue is initially empty*/
                        {
                            printf("Empty Queue\n");

                        }

                        else if(i.rear == MAX-1) /* this condition shows overflow*/
                        {
                            printf("Queue overflow");
                        }

                        else
                        {
                            printf("The Queue contains");
                            for(j= i.front; j<=i.rear ; j++) /*printing of queue elements*/
                            {
                                  printf("%d",i.Arr[j]);
                            }
                        }
                        break;


                        case 2:

                        if(i.front==-1 || i.front>i.rear) /*Underflow Condition*/
                        {
                            printf("Queue Underflow\n");
                        }
                        else {
                                printf("Removed Element : %d",i.Arr[i.front]);
                                deque(i,num2); /*Calling of function*/
                             }


                        if(i.front==-1)
                        {
                            printf("Empty Queue\n");

                        }

                        else
                        {
                            printf("The Queue contains");
                            for(j= i.front; j<=i.rear ; j++)
                            {
                                  printf("%d",i.Arr[j]);
                            }
                        }
                        break;


                        case 3:
                        exit(1);
                        break;

                        default:
                        printf("Incorrect option chosen\n");
                 }
         }
return 0;
}


void enque(struct info i,int num)
{

 if(i.rear != MAX-1 && i.front == -1)
       { i.front = 0;
         i.rear++;
         i.Arr[i.rear]= num;
        }
}


void deque(struct info i,int num2)
{
   if(i.front != -1 || i.front < i.rear)    /* Checks if the front index is lower the rear inder or if the queue is not empty*/
      {
          i.front++;
      }
}
