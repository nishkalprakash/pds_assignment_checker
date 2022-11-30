//Assignment 4
//section 14
//Name:Sanika Kadam
//Question 3


//To find sum of digits of entered Integer




#include<stdio.h>
int main()
{
long int N;
printf("Enter the Number: "); //enter any integer in range [0,9999999999]
scanf("%ld",&N);
if(N>0 && N<=9999999999) 
{
 int p;
  while(N!=0)
    {
     p=N%10;
      if(p==0)
       printf("zero");
      else if(p==1)
       printf("one");
      else if(p==2)
       printf("two");
      else if(p==3)
       printf("three");
      else if(p==4)
       printf("four"); 
      else if(p==5)
       printf("five");
      else if(p==6)
       printf("six");
      else if(p==7)
       printf("seven");
      else if(p==8)
       printf("eight");
      else if(p==9)
       printf("nine");
   N=N/10;
    }
}
else 
  printf("zero");

return 0;
}
      
