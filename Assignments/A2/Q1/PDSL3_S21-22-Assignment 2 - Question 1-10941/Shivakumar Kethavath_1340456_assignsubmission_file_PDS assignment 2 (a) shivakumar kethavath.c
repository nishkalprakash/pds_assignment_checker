/*SHIVAKUMAR
21MI31013*/
#include <stdio.h>
#include <math.h>
int main()
{
float x, y,S,zold;
int k, i;
printf("Enter the hight the parabolic container(x)=");
scanf("%f", &x);
printf("enter the value of k=");
scanf("%d",&k);
for (i = 0; i <=k; i++)
    {
     y=sqrt(x);
        zold=x;
     x = x - y;

     if(x<0){
     x =(-1) * x;
     }

        if(zold==x){
            y=y-(1/k);
            x=x-y*y;
        }

        if(x==0)
        {
         printf("(%f,%d)\n",x,i+2);
         break;
        }
         printf("(%f,%d)\n",x,i+1);
    }
}
