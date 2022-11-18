/*name: Birru Lavanya
roll no.: 21HS10018*/
#include<stdio.h>
int main()
{ int i;
float x,x1=0,e;
//given funvtion is x*x*x-25  first differential is 3x*x
printf("enter the value of x");
scanf("%f",&x);
for ( i = 0; i < 20; i++)
{
    x=x-((x*x*x-25)/(3*x*x));
    if(i>0)
    e=x-x1;
    x1=x;
    if(e<0.00005)
    break;
    printf("iteration=%d,x=%f,x1=%f error=%f",i,x,x1,e);
}


return(0);
}
