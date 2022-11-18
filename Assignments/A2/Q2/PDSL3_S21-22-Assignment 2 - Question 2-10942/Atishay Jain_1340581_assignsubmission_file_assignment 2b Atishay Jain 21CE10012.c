#include<time.h>,#include<stdlib.h>
main()
{
    srand(time(NULL));
    int a,n,k,p,x=0,D,i=1;
    float De;
    printf("enter the value of n\nn=");
    scanf("%d",&n);
    printf("\nenter the no. of iteration you want\nk=");
    scanf("%d",&k);
    while(i<k)
    {
        p = rand() & 1 ? -1 : 1;
        a=x;
        x=x+p;
        i++;
        D=a*a+x*x;

    }
    printf("%d",D);
}
