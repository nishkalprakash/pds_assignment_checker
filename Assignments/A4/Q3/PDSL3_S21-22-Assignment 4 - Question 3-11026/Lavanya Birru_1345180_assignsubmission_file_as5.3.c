
/*name: Birru Lavanya
roll no.: 21HS10018*/
#include<stdio.h>
#define MAX 10
 typedef struct
{
   int a[MAX];
  int n; //rear end
  int i; /* front end */
}list;
void enque( list b);
void deque( list b);
int main()
{
list b;
 b.a[MAX];b.n=10;b.i=0;
int m;
 while(1){
     printf("Enter the option: 1. Enque, 2. Deque, 3. Exit");
     scanf("%d",&m);
     if (m==1)
     {
         enque(b);//calling of function
        b.n++;/*  */
     }
     if (m==2)
     {
         deque(b);//calling of function
         b.i++;
     }
     if (m==3)
     {
         exit (0);/* code */
     }
 }

return(0);
}
void enque(list b){ //function to enter a element
    int j;
    printf("enter the element to be inserted");
    scanf("%d", a[b.n]);
    printf(" the queue contains");
    for (j=0; j <=b.n ; j++)
    { printf(" %d",a[j]);

    }
    void deque(list b){int j;//function to remove a element
     printf("removed element is %d ",a[b.i]);
    printf(" the queue contains");
    for (j=i+1; j <=b.n ; j++)
    { printf(" %d",a[j]);

    }
    }
}
