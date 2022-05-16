#include<stdio.h>

int main()

{
int m,k,p;
float n;




printf("enter the number of cars\n");
scanf("d",&m);

printf("enter the value of day\n");
scanf("d",&p);

switch (p){
case '1':{
printf("no of cars manufactured is %d",m);

break;
}
case '2':
{n=m+m/2+m/4;
printf("no of cars manufactured is %d",p);
}
break;
case '3||6':
{printf("no of machines kept under inspection\n");
scanf("%d",&k);
p=(m-k)+(m-k)/2+(m-k)/4;
printf("no of cars manufactured is %d",p);
}
break;
return(0);




}
