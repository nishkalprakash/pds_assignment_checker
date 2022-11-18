#include<stdio.h>
#include<math.h>

/*Name-Chetna
  roll no.-21CS10019
  dep-CSE
  package-code blocks*/

int main()
{
    printf("Enter degree of polynomial(n<=4):");
    int n1,n[5],j;
    scanf("%d",&n1);  //first read polynomial degree

    for(j=0;j<n1+1;++j)
    {
        scanf("%d",&n[j]);  // read coffiecients of polynomial
    }

      printf("Enter degree of polynomial(n<=4):");
    int n2,m[5];
    scanf("%d",&n2);  // read second polynomial degree

    for(j=0;j<n2+1;++j)
    {
        scanf("%d",&m[j]);   // read cofficient of second polynomial
    }


    int p[n1+n2+1],k;
     for(j=0;j<=n1+n2;++j)
     {
         p[j]=0;
     }

    for(j=0;j<=n1;++j)
    {
        for(k=0;k<=n2;++k)
        {
           p[j+k]+=n[j]*m[k];
        }
    }

    printf("The product of f(x) and g(x) is: h(x)=",n1);
     printf("%d + ",p[0]);
    for(j=1;j<n1+n2;++j)
    {
        printf("%d*x^%d + ",p[j],j);
    }

     printf("%d*x^%d\n",p[n1+n2],n1+n2);

}
