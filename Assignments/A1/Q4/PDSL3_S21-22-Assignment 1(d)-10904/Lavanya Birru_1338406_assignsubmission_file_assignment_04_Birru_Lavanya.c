#include<stdio.h>
#include<math.h>
int main()
{
int x1,y1,x2,y2,x3,y3,max;
float a,b,c;
printf("enter x1,y1");
scanf("%d %d",&x1,&y1);
printf("enter x2,y2");
scanf("%d %d",&x2,&y2);
printf("enter x3,y3");
scanf("%d %d",&x3,&y3);
a=sqrt((pow((x2-x1),2)))+pow((y2-y1),2);
b=sqrt((pow((x3-x2),2)))+pow((y3-y2),2);
c=sqrt((pow((x3-x1),2)))+pow((y3-y1),2);
if(a>b>c || a>c>b)
{
     if(a<b+c)
    {
        printf("triangle is valid");
        if(a*a<b*b+c*c)
        {
            printf("accute angle triangle");
        }
    }
}
