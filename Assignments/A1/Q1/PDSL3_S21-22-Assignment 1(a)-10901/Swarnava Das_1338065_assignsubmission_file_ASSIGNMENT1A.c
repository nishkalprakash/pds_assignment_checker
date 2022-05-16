// NAME: SWARNAVA DAS 
// ROLL: 21NA10037 
// DEPARTMENT: OCEAN ENGINEERING AND NAVAL ARCHITECTURE 
// PACKAGE: VISUAL STUDIO CODE 
// ASSIGNMENT CLASS:5


#include<stdio.h>
int main()
{
float a,u,alpha,t;
float d;
printf("ENTER THE VALUE OF a\n");
scanf("%f",&a);
printf("ENTER THE VALUE OF initial speed u\n");
scanf("%f",&u);
printf("ENTER THE VALUE OF acceleration alpha\n");
scanf("%f",&alpha);
printf("ENTER THE VALUE OF time t in seconds\n");
scanf("%f",&t);

d=a+(u*t+0.5*alpha*t*t);

if (d>=0)
{
    printf("DISTANCE=%f",d);
}
else
{
    printf("DISTANCE=%f",-(d));
    
}



    return 0;
}
