/*
section:14
roll no:22MI10013
name:animesh mishra
assignment no:9
description:any date in english calender
*/
#include<stdio.h>
struct Date{
        int dd;
        int mm;
        int yyyy;
}x,y;
struct Date ReadDate()
{
       struct Date c;
       scanf("%d %d %d",&c.dd,&c.mm,&c.yyyy);
    return c;
}
void PrintDate(struct Date a)
{
     printf("%d/%d/%d\n",a.dd,a.mm,a.yyyy);
}
int main()
{

    printf("X = ");
    x=ReadDate();
    printf("Y= ");
    y=ReadDate();
    PrintDate(x);
     PrintDate(y);
    FindDays(x,y);
    printf("\n");
    return 0;
}
     
