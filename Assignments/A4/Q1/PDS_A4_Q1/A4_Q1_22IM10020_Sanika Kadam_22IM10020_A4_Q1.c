//Assignment 4
//section 14
//Name:Sanika Kadam
//Question 1


//To find all factors of entered Integer




#include<stdio.h>
int main()
{
int N;
printf("Enter the Number: "); //Enter number range[-999999,999999]
scanf("%d",&N);

if(N>0 && N<999999)
   {
    for(int i=1;i<=N;i++)
      {
        if(N%i == 0)
        printf("%d\n",i);
      } 
   }
else if(N>-999999 && N<0)
   {
    for(int i=-1;i>=N;i--)
      {
        if(N%i == 0)
        printf("%d\n",i);
      } 
   } 
else
    {
    printf("0\n"); 
    }
return 0;
}
