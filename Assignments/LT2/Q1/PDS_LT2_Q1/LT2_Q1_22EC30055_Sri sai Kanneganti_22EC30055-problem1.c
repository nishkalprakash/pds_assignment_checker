/* name K.SRISAI
ROLL NO 22EC30055
PROBLEM 1*/

#include<stdio.h>
#include<stdlib.h>
float mean(int *a,int n);
int main()
{
int n;
float m;
int *a;
scanf("%d",&n);
a=(int*)malloc(n*(sizeof(int)));
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
m=mean(a,n);
printf("\n List = ");
for(int i=0;i<n;i++)
{
    printf("%d, ",a[i]);
}
printf("\n mean = %.2f",m);
return 0 ;
}
float mean(int *a,int n)
{
   if(n==0)
   {
       return 0 ;
   }
   return (a[n-1]+((n-1)*mean(a,n-1)))/n ;

}

