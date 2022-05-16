/*
Name- Krish Agarwal
Roll No.- 21NA10018
Department- Ocean Engineering and Naval Architecture
IDE- Codeblocks
Section- 3
*/
#include <stdio.h>
#include <math.h>
int main()
{
    float x1,y1,x2,y2,x3,y3,a=0.0,b=0.0,c=0.0,a1,b1,c1,hyp,base,per;

    printf("Enter the 1st coordinate : ");
    scanf("%f %f",&x1,&y1);

    printf("Enter the 2nd coordinate : ");
    scanf("%f %f",&x2,&y2);

    printf("Enter the 3rd coordinate : ");
    scanf("%f %f",&x3,&y3);

    a=sqrt((pow((x1-x2),2.0)+pow((y1-y2),2.0)));
    a1=pow((x1-x2),2.0)+pow((y1-y2),2.0);

    b=sqrt(pow((x3-x2),2.0)+pow((y3-y2),2.0));
    b1=pow((x3-x2),2.0)+pow((y3-y2),2.0);

    c=sqrt(pow((x1-x3),2.0)+pow((y1-y3),2.0));
    c1=pow((x1-x3),2.0)+pow((y1-y3),2.0);

    if((a+b>c)&&(b+c>a)&&(a+c>b))
    {
        printf("Triangle is possible\n");
        if(c>=a&&c>=b)
        {
            hyp=c;
            base=a;
            per=b;
        }
        else if(b>=c&&b>=a)
        {
            hyp=b;
            base=c;
            per=a;
        }
        else if(a>=b&&a>=c)
        {
            hyp=a;
            base=b;
            per=c;
        }
        if(a1+b1==c1 || b1+c1==a1 || a1+c1==b1)
        {
            printf("The given coordinates represent a Right Angled Triangle.\n");
        }
        else if(pow(hyp,2.0)>(pow(base,2.0)+pow(per,2.0)))
        {
            printf("The given coordinates represent a Obtuse Angled Triangle.\n");
        }
        else
        {
            printf("The given coordinates represent a Acute Angled Triangle.");
        }
    }
    else
    {
        printf("Triangle is not possible ;");
    }
    return 0;
}
