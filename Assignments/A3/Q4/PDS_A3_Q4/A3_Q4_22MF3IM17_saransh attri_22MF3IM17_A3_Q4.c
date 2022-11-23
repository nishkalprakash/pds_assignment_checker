#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
float a,b;
printf("enter units");
scanf("%f",&a);

if(a<=100)
{
float g=50+0.2*50;
printf("electric bill is %f",g);
}

else if((a>100)&&(a<=200))
{
b=b+50+(a-100)*0.75;
float j=b+(0.2*b);
printf("bill is %f",j);
}

else if((a>200)&&(a<=300))
{
b=b+50+(a-200)*1.20+(100*0.75);
float d=b+(0.2*b);
printf("bill is %f",d);
}

else if(a>300)
{
b=b+50+(100*1.20)+(100*0.75)+(a-300)*1.5;
float e=b+(0.2*b);
printf("bill is %f",e);
}
return 0;
}


