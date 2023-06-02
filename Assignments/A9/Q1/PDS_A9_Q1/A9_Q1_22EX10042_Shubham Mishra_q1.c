#include<stdio.h>
#include<math.h>
int n;
int fibo(int n)
{

   int result=0,a=0,b=1;
   for(int i=0;i<n;i++)
   {

       result=a+b;
       a=b;
       b=result;

       if(result==n)
       {
           printf("the no %d is a fibonacci no",n);
           return 0;
       }
        if(result>n&&(abs(n-a)<=abs(n-b)))
   {

       printf("the nearest fibonacci no is %d",a);
       break;
   }
    if(result>n&&(abs(n-a)>abs(n-b)))
    {


     printf("the nearest fibonacci no is %d",b);
       break;
   }


   }
  return 0;
}

int main(){

printf("enter the value of n");
scanf("%d",&n);
printf("the value of n is %d\n",n);
if(n<0)
    printf("please give a positive integer");

else{
    fibo(n);
}

}
