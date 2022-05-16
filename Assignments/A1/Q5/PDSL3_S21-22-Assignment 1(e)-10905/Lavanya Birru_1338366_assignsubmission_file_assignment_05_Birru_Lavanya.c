// name Birru Lavanya
// Roll number 21HS10018
//section 3
//OS windows 10
//platform codeblocks
#include<stdio.h>
int main(){
    char a,n,s;
    float b,base,gst,total;
    printf("enter the type of wood u want n for natural and s for synthetic");
    scanf("%c",&a);
    printf("enter the amount of wood you want");
    scanf("%f",&b);
    if (a == 'n' )
    {base=b*1100;
    gst=base*20/100;
    total=gst+base;
        printf("the base price is %f",base);
        printf("the gst is %f",gst);
        printf("the total price is %f",total);}
if (a=='s')
{
    base=b*780;
    gst=base


    *15/100;
    total=gst+base;
        printf("the base price is %f",base);
        printf("the gst is %f",gst);
        printf("the total price is %f",total);

    } return 0;
}
