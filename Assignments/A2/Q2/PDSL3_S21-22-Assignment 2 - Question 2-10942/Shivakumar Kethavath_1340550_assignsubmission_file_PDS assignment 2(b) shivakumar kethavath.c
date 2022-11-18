/*shivakumar kethavath
21MI31013*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
int x, y, p, M = 0,y1;
printf("x =");
scanf("%d",&x);
printf("y=");
scanf("%d",&y);
y1=y;

int temp=x,d=0;

while (y1!=0)
    {

        while (temp != 0)
        {
         p=rand()&1?-1:1;
         d+=p;
         temp -=1;
        }

        M+=d*d;
        temp=x;
        d=0;
        y1-=1;
    }

float de;
de=sqrt(M/y);
printf("%f",de);
return 0;
}
