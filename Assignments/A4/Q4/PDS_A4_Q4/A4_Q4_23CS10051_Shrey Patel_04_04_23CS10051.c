//Shrey G Patel
//23CS10051
#include <stdio.h>
int main()
{
int n,m=0,k;
printf("Enter the single digit numbers:");
while(1>0)
{
   scanf("%d",&n);
   if(n<0)
   {printf("Wrong input\n");
   break;}
   m=m*10+n;
   k=m%10000;
   if(k==5107 ||k==5117 ||k==5127|| k==5137|| k==5147|| k==5157 ||k==5167|| k==5177 ||k==5187 || k==5197 )
   {
printf("The pattern is found\n");
break;
}
}
return 0;
}

