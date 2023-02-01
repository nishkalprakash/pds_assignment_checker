#include<math.h>
#include<stdio.h>
float hadd(int b){
float c;
c=1/(float)b;
return c;

}






int main()
{
int x,n;
float sum;
printf("enter number(positive)");
scanf("%d",&x);
for(n=1,sum=0;n<=x;n++){sum=sum+hadd(n);}

printf("%.3f",sum);
return 0;

}
