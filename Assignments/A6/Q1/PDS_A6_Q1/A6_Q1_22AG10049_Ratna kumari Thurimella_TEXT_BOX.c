#include<stdio.h>

void fact(int a[],int n)
{
    int i,f,b;
    for(i=0;i<n;i++)
    {
        b=a[i];
        f=1;
        while (b>0)
            f*=(b--);
        printf("\nthe factorial of %d is %d",a[i],f);

    }

}
void main()
{
    int a[10],i,n;
     printf("enter limit:");
     scanf("%d",&n);
     printf("enter %d numbers",n);
     for(i=0;i<n;i++)
      scanf("%d",&a[i]);
      fact(a,n);


}