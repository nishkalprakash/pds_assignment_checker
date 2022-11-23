#include<stdio.h>

int main (){
float a;
printf("Total number of electric units in KWH :");
scanf("%f",&a);
float bill;
if (a>=1&&a<=100){
printf("your bill is %f",a*0.5+0.2*0.5*a);
}
else if(a<=200&&a>100){
printf("your bill is %f",50+(a-100)*0.75+0.2*(50+(a-100)*0.75));}
else if(a<=300&&a>200){
printf("your bill is  %f",125+(a-200)*1.2+0.2*(125+(a-200)*1.2));}
else if(a>300){
printf("your bill is  %f",245+(a-300)*1.5+0.2*(245+(a-300)*1.5));}
return 0;
}

