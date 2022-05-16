// S N Bibhudutta
// 21EC30043
// E&ECE Department 
// Package: Codeblocks
// Assignment 1

#include<stdio.h>

int main()
{
    int m;
    printf("\nEnter the number of machines:");
    scanf("%d",&m);

    int day;
    printf("\nEnter the day number(1-7):");
    scanf("%d",&day);

    if(day==1)
    {
        printf("\nNumber of manufactured cars=%d",m);
    }
    else if(day==2)
    {
        float ans=m+m/2.0+m/4.0;
        int num=m+m/2.0+m/4.0;

        if(ans-num>=0.5)
         num=num+1;

        printf("\nNumber of manufacture cars=%d",num);

    }
    else if(day==3||day==6)
    {
        int k;
        printf("\nEnter no. machines under inspection :");
        scanf("%d",&k);
        float ans=(m-k)+(m-k)/2.0+(m-k)/4.0;
        int num=(m-k)+(m-k)/2.0+(m-k)/4.0;

        if(ans-num>=0.5)
         num=num+1;
          printf("\nNumber of manufacture cars=%d",num);


    }
    else
    {
        float boast;
        printf("\nEnter boasting fraction:");
        scanf("%f",&boast);

          float ans=m+m*boast;
        int num=m+m*boast;

        if(ans-num>=0.5)
         num=num+1;
          printf("\nNumber of manufacture cars=%d",num);



    }
    return 0;

}