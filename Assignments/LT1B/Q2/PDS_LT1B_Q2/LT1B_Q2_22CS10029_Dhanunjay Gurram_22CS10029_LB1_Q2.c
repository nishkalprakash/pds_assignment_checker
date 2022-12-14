//Program to print a pattern
#include <stdio.h>
int main()
{
   int n,i,j;
   scanf("%d",&n);                //Taking the input
   for (i=1;i<=n;i++){            //Loop that declares what number to be printed
     for (j=1;j<=i;j++){          //Loop that declares how many respective no to be printed
          printf("%d ",i);}
     printf("\n");}
   return 0;
}
