#include <stdio.h>
#include <math.h>

int main()
{   int a,b,c,a1,b1;
    scanf("%d%d",&a,&b);
    a1=abs(a);
    b1=abs(b);
    if (a1<=999 && b1<=999) {
        if (a1<100 && b1>100)
            {printf("Wrong Input");}
        else if (a1<10 && b1>=10)
            {printf("Wrong Input");}
        else if (b1<100 && a1>100)
            {printf("Wrong Input");}
        else if (b1<10 && a1>=10)
            {printf("Wrong Input");}

        else if (a1>=100 )
            {c=100*(a%10)+a/100+10*((a/10)%10);
            if (c==b){printf("Perfect Pair");}
            else {printf("Not a perfect pair");}
            ;}

        else
            {if (a1>=10)
                {c=10*(a%10)+a/10;
                if (c==b){printf("Perfect Pair");}
                else {printf("Not a perfect pair");};}
            else
                {c=a; if (c==b){printf("Perfect Pair");}
                else {printf("Not a perfect pair");};};}

    ;}
    else {printf("Wrong Input");}
    printf("%d%d",a1,b1);

    return 0;


}
