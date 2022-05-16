/*
21BT30006
GUNNU HEMANTH,SEC-3*/

#include<stdio.h>
#include<math.h>
int main()
{
int i,j,k,l;int sumx=0;int sumy=0;
float avgx,avgy;
int x[10];
int y[10];
printf("enter the x co-ordinates\n");
for(i=0;i<10;i++){scanf("%d",&x[i]);sumx=sumx+x[i];}
printf("enter the y co-ordinates\n");
for(j=0;j<10;j++){scanf("%d",&y[j]);sumy=sumy+y[j];}
avgx=sumx/10.0;
avgy=sumy/10.0;
printf("the average of x co-ordinates is %f\n",avgx);
printf("the average of y co-ordinates is %f\n",avgy);
float slope;
float y_intercept;
float sum1,sum2,temp1=0,temp2=0;

for(l=0;l<10;l++){sum1=(x[l]-avgx)*(y[l]-avgy);temp1=temp1+sum1;}
for(k=0;k<10;k++){sum2=pow((x[k]-avgx),2);temp2=temp2+sum2;}


slope=(float)(temp1)/temp2;

printf("the value of slope is %f\n",slope);

y_intercept=avgy-(slope*avgx);

printf("the value of y intercept is %f\n",y_intercept);
return(0);
}
