//jaydeep 22ag30016 problem 2


#include<stdio.h>

int main()
{int n;
    struct info{
    int vect[10];
    }s[2];
    int m;
    scanf("%d",&n);
    
    printf("enter 1st vector info\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&s[1].vect[i]);
    }
    scanf("%d",&m);
    if(n!=m)
    {
        printf("enter same dimension");
        return 0;
    }
    printf("enter 2nd vector info\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&s[2].vect[i]);
    }
    float a[n];
    for(int i=0;i<n;i++)
    {
        a[i]=(float)(s[1].vect[i])/(s[2].vect[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]!=a[i+1])
            {printf("unidentical vectors");
        return 0;}

    }
}
