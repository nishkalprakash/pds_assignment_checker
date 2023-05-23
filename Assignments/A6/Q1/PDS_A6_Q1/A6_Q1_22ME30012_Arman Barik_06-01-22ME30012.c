# include <stdio.h>
// defined a recursive factorial function for the largest possible value of n.
long long int fact( long long int n)
{
   long long int fac=1;
    for(int i=1;i<=n;i++)
    {
        fac*=i;
        printf("%lld\n",fac);
    }
    return fac;
}
//defined a recursive function for raising the power of x to n.
float POW(float x, int n)
{
    if(n==1) return x;
    else return x*POW(x,n-1);
}
int main()
{
   long long int m;
   scanf("%lld",&m);
   printf(" the factorial value is %lld\n", fact(m));

   float x=0.5;
   int n=2;
   printf("%f", POW( x, n));
}
