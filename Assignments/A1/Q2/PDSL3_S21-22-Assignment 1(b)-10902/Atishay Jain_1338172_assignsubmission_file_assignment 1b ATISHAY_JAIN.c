#include<stdio.h>
int main()
{ int a,b,c,n;
printf("enter a three digit no.\nN=");
scanf("%d",&n);
a=n/100;
b=n/10-n/10/10*10;
c=n-n/10*10;
printf("%d%d%d",c,b,a);
getch();
return 0;

}
