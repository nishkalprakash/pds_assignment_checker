/*name           : vyshnavi_lagudu
dept             : EE
roll number      :21EE10044
assignment class :3c
package          : code blocks
comments: maximum elements in queue is 10
*/
#include<stdio.h>
struct queue
{
   int x[10];
   int front=0;
   int rear=9;
}
int enqueue(int n)
{
    static int i=0;
    x[i]=n;
    i++
}
main()
{
   int a,n;
   printf("enter the option 1.enque 2.deque 3.exit:");
   scanf("%d",&a);
   printf("\nenter the element:");
   scanf("%d",&n);
   printf("\n");
   switch(a){
         case 1:enqueue(n);
         case 2:dequeue(n);
         case 3:exit(n));
         default:printf("invalid choice\n");
         }
}

