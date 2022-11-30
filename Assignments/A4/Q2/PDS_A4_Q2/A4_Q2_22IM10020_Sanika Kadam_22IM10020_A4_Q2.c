//Assignment 4
//section 14
//Name:Sanika Kadam
//Question 1


//To find sum of digits of entered Integer




#include<stdio.h>
int main()
{
int N;
printf("Enter the Number: "); //Enter number range[-999999,999999]
scanf("%d",&N);
 if(N>=-999999 && N<=999999)
  {
    int sum=0;
    while(N!=0)
     {
      sum=sum+(N%10);
      N=N/10;
     }
  
    printf("Sum of the digits is %d\n",sum);
 }   
 
else if(N=0) 
   {
     printf("Sum of the digits is 0\n");
   }
return 0;
}





