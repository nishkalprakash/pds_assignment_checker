//Class test 1
//Name:Sanika Kadam
//Roll no:22IM10020




//Printing given pattern


#include<stdio.h>
int main()
{
//Declaring the number
int N;

//Printing the number
printf("Enter the number: ");  //Enter integer in the range[2,10]
scanf("%d",&N);

for(int i=0;i<=N;i++)
  {
   for(int j=(i*(i-1)*.5)+1;j<=(i*(i+1)*.5);j++)  
     {
       printf("%d",j);
     }
   printf("\n"); //To continue from next line
  }
return 0;
}
