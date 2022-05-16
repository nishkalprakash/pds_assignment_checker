/*NAME HARSH SOMANI
SECTION 3
ROLL NUMBER 21EC10031
ASSIGNMENT CLASS 6
DEPT ECE*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n, m, day, k;
    float f;
    /*0<f<1 and day is from 1-7*/
    scanf("%d %d",&day,&m);

    if (day==1)
   {n=m;
    printf("no of cars =%d",n);}
else if (day==2){
    (n)=round(m+(m/2.0)+(m/4.0));
    printf("no of cars =%d",n);}
else if((day==3)||(day==6))
        {scanf("%d",&k);
    (n)=round((m-k)+((m-k)/2.0)+((m-k)/4.0));
    printf("no of cars =%d",n);}
else
        {scanf("%f",&f);
    (n)=round(m+(f*m));
        printf("no of cars =%d",n);
    }
}
