#include<stdio.h>
int main()
{
    int date,month,year;
    scanf("%d %d %d",&date,&month,&year);
    if ((date<=30)&&(month<=12)&&(year>=0))
    {
        printf("valid date");
    }
    else
    {
        printf("Invalid date");
    }
    return 0;
}         
    
