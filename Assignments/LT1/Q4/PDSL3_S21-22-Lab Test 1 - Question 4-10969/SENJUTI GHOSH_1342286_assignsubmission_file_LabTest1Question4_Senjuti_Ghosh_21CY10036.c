/*
name:SENJUTI GHOSH
ROLL:21CY10036
DEPT:Chemistry
Package:CODEBLOCKS
*/
#include<stdio.h>
#include<math.h>
int main(){
double X[500],Y[500],m,b,sumx,sumy,prod1,sumprod1,prod2,sumprod2,avgx,avgy;
int i,j,k,n;
printf("enter number of pairs of coordinates");
scanf("%d",&n);
for (i=0;i<n;i++){
     printf("Enter x coordinate");
     scanf("%lf",&X[i]);
     sumx+=X[i];
     printf("Enter y coordinate");
     scanf("%lf",&Y[i]);
     sumy+=Y[i];}
avgx=sumx/n;
avgy=sumy/n;
for (j=0;j<n;j++){
     prod1=(X[j]-avgx)*(Y[j]-avgy);
     sumprod1+=prod1;
     prod2=(X[j]-avgx)*(X[j]-avgx);
     sumprod2+=prod2;
     }
m=sumprod1/sumprod2;
b=avgy-(m*avgx);
printf("m=%lf,b=%lf\n",m,b);
printf("The equation of the line is y=(%lf)x+(%lf)",m,b);
}
