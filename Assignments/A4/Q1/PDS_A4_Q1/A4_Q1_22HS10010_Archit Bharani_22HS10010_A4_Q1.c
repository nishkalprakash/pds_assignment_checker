#include<stdio.h>
int main()
{
//To calculate factors of an integer
int n,i;
printf("Enter an integer: ");
scanf("%d",&n);
for(i=1;i<=n;i++){
if(n%i==0){
printf("Factors of number are:%d\n",i);
}
}
return 0;
}
