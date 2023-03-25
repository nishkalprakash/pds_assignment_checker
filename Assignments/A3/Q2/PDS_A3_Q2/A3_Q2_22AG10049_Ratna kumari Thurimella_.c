#include <stdio.h>
 #include<math.h>

int main()
{
    int abc,big,g,f,k,l;
    float h,m,n;
    printf("enter any two 3 digit values:\n");
    scanf("%d%d",&abc,&big);
    printf("value of a:%d\n",abc);
    printf("value of b:%d\n",big);

    g=abc/100;
    printf("value g:%d",g);

    f=g/10;

    h=g%10;

    k=big/100;

    l=k/10;

    m=k%10;
    printf("value m:%d\n",m);

    if(g==h && l==f && m==k)
    {
       printf("perfect pair" );
    }
    else if (g==0 || k==0)
    {
     printf("wrong input");
    }
    else
    {
        printf("not a perfect pair");
    }
    return 0;
}