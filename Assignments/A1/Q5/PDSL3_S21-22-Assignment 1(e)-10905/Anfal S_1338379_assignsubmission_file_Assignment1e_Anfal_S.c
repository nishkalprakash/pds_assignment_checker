/*
Name: Anfal S
Roll no: 21AE10003
Section: 3
Dept: AE
Package: Codeblocks
Assignment class: 1
*/

#include<stdio.h>
int main()
{
float w,b,g,t;
char n,s,c;
printf("which type of wood do you want?\n enter n for natural and s for synthetic\n");
scanf("%c",&c);
{if (c==n);
    printf("please enter the required amount in kg\n");
    scanf("%f",&w);
    b=w*1100;
    g=b*0.2;
    t=b+g;
    printf("Base price=%.2f\n",b);
    printf("GST=%.2f\n",g);
    printf("Total=%.2f\n",t);
    return 0;
};
{if (c==s);
    printf("please enter the required amount in kg\n");
    scanf("%f",&w);
    b=w*780;
    g=b*0.15;
    t=b+g;
    printf("Base price=%.2f\n",b);
    printf("GST=%.2f\n",g);
    printf("Total=%.2f\n",t);
    return 0;
};

}
