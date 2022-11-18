/*
Name:- Aditya Kumar
Roll no.:- 21ME10005
Dept- Mechanical Engg
Sec-3
Group-4
Assignment- 1d
Package- stdio.h, math.h
*/
#include <stdio.h>
#include <math.h>

int main()

{
int x1,x2,x3,y1,y2,y3;
printf("Enter the first co-ordinates:\n");
scanf("%d%d",&x1,&y1);
printf("Enter the second co-ordinates:\n");
scanf("%d%d",&x2,&y2);
printf("Enter the third co-ordinates:\n");
scanf("%d%d",&x3,&y3);
float n1,n2,n3,a,b,c;
n1 = ((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
n2 = ((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
n3 = ((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
a = sqrt(n1);
b= sqrt(n2);
c= sqrt(n3);
if(a>b)
{
    if(a>c)
    {
       if(a<(b+c))
       {
           printf("Valid Triangle\n");
           if((n1)==(n2 + n3))
           {
               printf("This is a right angled triangle\n");
           }
           else if((n1)<(n2 + n3)){
             printf("This is a acute triangle\n");
           }
           else{
               printf("This is a obtuse triangle\n");
           }
       }
       else
       {
           printf("Invalid Triangle\n");
       }
    }
    else{
           if(c<(b+a))
       {
           printf("Valid Triangle\n");
           if((n3)==(n2 + n1))
           {
               printf("This is a right angled triangle\n");
           }
           else if((n3)<(n2 + n1)){
             printf("This is a acute triangle\n");
           }
           else{
               printf("This is a obtuse triangle\n");
           }
       }
       else
       {
           printf("Invalid Triangle\n");
       }
    }
}
else{
    if (b>c)
    {
        if(b<(a+c))
       {
           printf("Valid Triangle\n");
        if((n2)==(n1 + n3))
           {
               printf("This is a right angled triangle\n");
           }
           else if((n2)<(n1 + n3)){
             printf("This is a acute triangle\n");
           }
           else{
               printf("This is a obtuse triangle\n");
           }
       }
       else
       {
           printf("Invalid Triangle\n");
       }
    }
    else
    {
        if(c<(b+a))
       {
           printf("Valid Triangle\n");
           if((n3)==(n2 + n1))
           {
               printf("This is a right angled triangle\n");
           }
           else if((n3)<(n2 + n1)){
             printf("This is a acute triangle\n");
           }
           else{
               printf("This is a obtuse triangle\n");
           }
       }
       else
       {
           printf("Invalid Triangle\n");
       }
    }
}


    return 0;
}

