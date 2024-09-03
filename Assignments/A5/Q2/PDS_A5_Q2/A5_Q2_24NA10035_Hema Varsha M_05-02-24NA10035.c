#include <stdio.h>
#define n 100
int main()
{
int num[n];//num-array
int i,j,k,m,cnt,a,b;//
scanf("%d",&m);
if(m>n)
   printf("error: n>100");
for (i=0;i<=m-1;i++)
   scanf("%d",&num[i]);
printf("duplicates");
for (j=0;j<=m-1;j++)
  { a=num[j];
   cnt=1;
   for (k=i+1;k<m;k++)
     {printf("*");
       b=num[k];
       if(b==a)
         cnt++;
         }
   if (cnt>1)
   printf("%d  (%d)\n",a,cnt) ;
   }
 
 
 return 0;
 }
