//code creator : tanmay mishra
//roll number : 24na10073



#include<stdio.h>

int main()

{
int n , i = 0 , n1=1 , n2=-1 , x;

printf("enter a number  :");
scanf("%d" , &n);

if (n<=0)
printf("n is invalid");

while (i < n)
{
x=n1;				//the third value depends on first two value by the logic first term - second term = third term
printf("%d ", x);		//assign first two values then make third value dependent on them
n1 = n2;

n2 = x-n2;

i++;

}

return 0;



}
