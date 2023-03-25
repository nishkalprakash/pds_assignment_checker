#include<stdio.h>
void main()
{
    int X,Y;
    int a,b,c;
    int e,f,g;
    // I have taken the pair of numbers as(abc,efg)

    scanf("%d %d", &X, &Y);
    if (-999<X && X<999 && -999<Y && Y<999)
    {
        printf("The pair of number is within the range and the pair is : (%d,%d)\n",X,Y);
    }

    else
    {
    printf(" The pair is not in the given range\n");
    }
    c=X%10;
    b=((X%100)-c)/10;
    a=X/100;
    g=Y%10;
    f=((Y%100)-g)/10;
    e=Y/100;
    if ( c==e && b==f && a==g)
    {
        printf("It is a perfect pair");
    }

    else if((a==0&&c!=0)||(a!=0&&c==0))
    {
        printf(" Wrong Input");
    }

    else if ((a==0&&b==0&&c!=0)||(a==0&&b==0&&c==0&&e!=0))
    {
        printf(" Wrong Input");
    }

    else if ((c==0&&e==0&&a!=0)||(c==0&&e==0&&a==0&&b!=0))
    {
        printf(" Wrong Input");
    }



    else
    {

    printf("It is not a perfect pair");

    }


}
