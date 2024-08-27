#include<stdio.h>
int main()
{
int n;
printf("enter the number");
scanf("%d", &n);
int a=1;
printf("%d ", a);
int p=(-1);
for(int i=2;i<=n;i++){
printf("%d " ,p);
p=a-p;
a=p;
}
return 0;
}