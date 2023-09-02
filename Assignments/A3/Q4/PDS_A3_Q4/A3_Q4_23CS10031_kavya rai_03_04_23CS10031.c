#include<stdio.h>
int main()
{
    int x,y,a1,b1,c1,d1,a,b,c,d;

    printf("Enter the coordinates (a,b) and (c,d):");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    a1=a;
    b1=b;
    c1=c;
    d1=d;
    if(a>0 && b>0 && c>0 && d>0)
    {
        if(c>a && d>b);
        else
           {printf("ill formed rectangle.\n");
        return 0;
    }
    }
    else if(b>0 && d>0 && a<0 && c<0)
    {
        a*=-1;
        c*=-1;
        if(a>c && b<d);
        else
           { printf("ill formed rectangle.\n");
        return 0;
    }
    }
    else if(a<0 && b<0 && c<0 && d<0)
    {
        a*=-1;
        b*=-1;
        c*=-1;
        d*=-1;
        if(a>c && b>d);
        else
           {printf("ill formed rectangle.\n");
            return 0;
        }
    }
    else
    {
        d*=-1;
        b*=-1;
        if(a<c&&b>d);
        else{
            printf("ill formed rectangle.\n");
            return 0;
           }
    }
    printf("Enter the pair of integers representing p :");
    scanf("%d%d",&x,&y);
    if(x>a1 && x<c1 && y>b1 && y<d1)
        printf("p lies inside the rectangle");
    else if((x<a1 && y<b1)||(x>c1 && y>d1))
        printf("p lies outside the rectangle");
    else if((x==a1)&& (y==b1) ||(y==d1)&&(x==c1))
        printf("p lies on the corner of the rectangle.");
    else 
    printf("p lies on the sides of the rectangle");
}


