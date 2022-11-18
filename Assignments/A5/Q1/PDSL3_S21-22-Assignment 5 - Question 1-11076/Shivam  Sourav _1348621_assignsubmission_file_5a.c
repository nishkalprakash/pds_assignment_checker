
#include <stdio.h>
#include<stdlib.h>
void arrange(int* p1,int* p2,int* p3)//arranges the pointers in ascending order without changingtheir addresses
{
    int temp;
 if(*p1>*p2)  
 {
     if(*p2>*p3)
     {
         temp=*p3;
         *p3=*p1;
         *p1=temp;
     }
     else
     {
         if(*p1>*p3)
         {
         temp=*p1;
         *p1=*p2;
         *p2=temp;
         temp=*p3;
         *p3=*p2;
         *p2=temp;
             
         }
         else{
         temp=*p2;
         *p2=*p1;
         *p1=temp;}
     }
 }
 else
 {
     if(*p2>*p3)
     {
         if(p3<p1)
         {
             temp=*p3;
         *p3=*p1;
         *p1=temp;
         temp=*p3;
         *p3=*p2;
         *p2=temp;
         }
         else
         {
             temp=*p3;
         *p3=*p2;
         *p2=temp;
         }
     }
 }
}

int main()
{
    int a,b,c;
    printf("enter three integers");
    scanf("%d %d %d",&a,&b,&c);
    printf("before function call\n");
    printf("address of a=%ld\n",&a);
    printf("address of b=%ld\n",&b);
    printf("address of c=%ld\n",&c);
    printf("values of a,b,c=%d %d %d\n",a,b,c);
    arrange(&a,&b,&c);//function call
    printf("after function call\n");
       printf("address of a=%ld\n",&a);
    printf("address of b=%ld\n",&b);
    printf("address of c=%ld\n",&c);
    printf("values of a,b,c=%d %d %d",a,b,c);
    
    
    
}
