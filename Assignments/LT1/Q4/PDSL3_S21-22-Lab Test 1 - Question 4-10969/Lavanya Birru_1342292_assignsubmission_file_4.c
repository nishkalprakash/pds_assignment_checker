/*name: Birru Lavanya
roll no.: 21HS10018*/
#include<stdio.h>
int main()
{ int x[10],y[10],i,j,k,n,l,sum1=0,sum2=0;
float sum3=0,sum4=0,avg1=0,avg2=0,avg3=0,avg4=0,b=0;
printf("how many coordinates u want to enter?");
scanf("%d",&n);
printf("enter the coordinates of x");
for ( i = 0; i <n ; i++)
{
    scanf("%d",&x[i]);
    sum1=sum1+x[i];
}
 avg1=sum1/n;
 printf("enter the coordinates of y.");
for ( j = 0; j <n ; j++)
{
    scanf("%d",&y[j]);
    sum2=sum2+y[j];
}
 avg2=sum2/n;
 for (k = 0; k < n; k++)
 {
     sum3=sum3+((x[k]-avg1)*(y[k]-avg2));
 }
 for (l = 0; l < n; l++)
 {
     sum4=sum4+((x[k]-avg1)*(x[k]-avg1));
 }
 avg4=sum3/sum4;
b=avg2-(avg4*avg1);
printf("m=%f b=%f line eqn is y=%fx+%f",avg4,b,avg4,b);
return(0);
}
