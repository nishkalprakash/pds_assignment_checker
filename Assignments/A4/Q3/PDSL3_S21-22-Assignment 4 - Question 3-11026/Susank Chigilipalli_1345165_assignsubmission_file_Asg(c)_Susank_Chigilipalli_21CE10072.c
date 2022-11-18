/*This program is to do a program to implement a queue using structures with MAX = 10*/
/*Name : Susank Chigilipalli
  Section : 3A
  Assignment class 6
  Assignment 4
  question 3*/
#include<stdio.h>
const int MAX=10;
int count=0;
struct que
{
   int q[10];
   int fi;
   int ri;
}queue;
void deque()
{
   int i;
   if(count<=0)
   {
      queue.ri=count+1;
      printf("The queue is empty!\n");
   }
   if(count>=0)
   {
      queue.ri=count;
      queue.fi=0;
      printf("Removed element is : %d\n",queue.q[0]);
      for(i=0;i<=queue.ri;i++)
      {
         queue.q[i]=queue.q[i+1];
      }
   }
}
void enque(int in)
{
    int i;
    if(count<=MAX)
    {
        queue.q[count]=in;
    }
}
void main()
{
   int path,eqv,j,temp;
   printf("Enter the option: 1. Enque, 2. Deque, 3. Exit\n");
   scanf("%d",&path);
   if(path==1)
   {
      count++;
      printf("Enter the value to be entered into queue : ");
      scanf("%d",&eqv);
      enque(eqv);
      printf("The queue contains : ");
      for(j=0;j<=count;j++)
      {
          temp=queue.q[j];
          printf("%d",&temp);
      }
      printf("\n");
   }
   if(path==2)
   {
       count--;
       deque();
   }
   if(path==3)
   {
       printf("Exited\n");
   }
   else
   {
       main();
   }
}
