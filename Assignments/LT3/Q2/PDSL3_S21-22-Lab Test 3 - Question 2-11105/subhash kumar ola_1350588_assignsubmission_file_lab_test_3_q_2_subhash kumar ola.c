#include<stdio.h>

#include<math.h>

int main()
{
    printf("Please enter degree of polynomial(n<=4):");
    int n1;
    scanf("%d",&n1);
    int a[5];

    int i;
    printf("Enter the coefficients of the polynomial in order of increasing power\n");
    for(i=0;i<n1+1;++i)
    {
        scanf("%d",&a[i]);
    }


      printf("Please enter degree of polynomial(n<=4):");
    int n2;
    scanf("%d",&n2);

      int b[5];
printf("Enter the coefficients of the polynomial in order of increasing power\n");
    for(i=0;i<n2+1;++i)
    {
        scanf("%d",&b[i]);
    }


    int c[n1+n2+1],j;
     for(i=0;i<=n1+n2;++i)
     {
         c[i]=0;
     }

    for(i=0;i<=n1;++i)
    {
        for(j=0;j<=n2;++j)
        {
           c[i+j]+=a[i]*b[j];
        }
    }

    printf("The product of f(x) and g(x) is: h(x)=",n1);
     printf("%d + ",c[0]);
    for(i=1;i<n1+n2;++i)
    {
        printf("%d*x^%d + ",c[i],i);
    }

     printf("%d*x^%d\n",c[n1+n2],n1+n2);




}
