#include<stdio.h>

int main()
{
int n;
printf("Enter a number in the range[2,10]: \n");
scanf("%d",&n);
int i,j;
for(i=1;i<=n;i++)
{
 for(j=1;j<=i;j++) 
 {
  printf("%d",i);
 }
printf("\n");
}
return 0;
}


