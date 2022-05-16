/*
21BT30006
GUNNU HEMANTH,SEC-3*/

#include<stdio.h>
#include<math.h>


int main(){
float X0,X1,E;
int N;
printf("enter the value of N,X0,X1\n");

scanf("%d%f%f",&N,&X0,E);
printf("%d%f\n",N,X0);

for(int j=0;j<N;j++){
X1=X0-((pow(X0,3)-25)/(3*pow(X0,2)));
printf("%f%f%f\n",X0,X1,fabs(X1-X0));

 if(fabs(X1-X0)<E){break;}X0=X1;}
return(0);
}
