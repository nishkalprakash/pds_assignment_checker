#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct POLY
{
float *p;
int degree;
int n;
};

struct POLY* readPoly()
{
struct POLY *pol;
int n;
pol = (struct POLY*)malloc(sizeof(struct POLY));
printf("Enter degree of polynomial: ");
scanf("%d",&n);
printf("Enter coefficients of x^0 to x^n: ");
pol->p = (float*)malloc(sizeof(float)*(n+1));
for(int i=0;i<=n;i++)
scanf("%f",&(pol->p)[i]);
pol->degree = n;
   return pol;
}



struct POLY mulPoly(struct POLY p1,struct POLY p2)
{
struct POLY pol;
int n1=0,n2=0,n;

       pol.p = (float*)malloc(sizeof(float)*((p1.degree+p2.degree)+1));
        for(int i=0;i<=(p1.degree+p2.degree);i++)
        (pol.p)[i]=0;
       for(int i=0;i<=p1.degree;i++)
        {
           for(int j=0;j<=p2.degree;j++)
           {
             (pol.p)[i+j]+=((p1.p[i])*(p2.p[j]));
           }
        }
        pol.degree = p1.degree+p2.degree;
        for(int i=0;i<=p1.degree;i++)
    n1+=(pow(p1.n,i)*p1.p[i]);
     for(int i=0;i<=p2.degree;i++)
    n2+=(pow(p2.n,i)*p2.p[i]);
    n = n1*n2;
    pol.n = n;
    return pol;
}

void printPoly(struct POLY pol)
{
    printf("\nDegree of Polynomial: %d",pol.degree);
    printf("\nCoefficients of Polynomial = ");
    for(int i=0;i<=pol.degree;i++)
    printf("%f ",pol.p[i]);
}

int main()
{
    struct POLY *p1,*p2;
    p1 = readPoly();
    p2 = readPoly();
    printf("\nPolynomial after multiplication: ");
    printPoly(mulPoly(*p1,*p2));
    return 0;
}
