#include<stdio.h>
int main()
{
    float a,b;
    char x;
    printf("what type of wood do you?want\ntype n for natural or s for synthetic\n");
    scanf("%C",&x);
    printf("weight of wood do you want?");
    scanf("%f",&a);
    if(x=='n')
    {
        printf("base price=%0.2f",1100*a);
        printf("GST=%0.2f",0.2*1100*a);
        printf("final price=%0.2f",1100*a+0.2*1100*a);
    }
else
{
    printf("base price =%0.2f",780*a);
    printf("gst=%0.2f",0.15*780*a);
    printf("final price=%0.2f",780*a+780*a*0.15);
}
getch();
return 0;
}
