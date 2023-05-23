/*#include<stdio.h>
int fact(int n);


int main()
    {
    int n;
    printf("enter n : ");
    scanf("%d", &n);
    printf("the value of fact(n) is %d\n", fact(n),n);

   return 0;
    }
 int fact(int n)
    {


     if(n==0 || n==1)
        {
        return 1;
        }

    else
    {
        return n*fact(n-1);
    }
    }*/
#include<stdio.h>
#include<math.h>
float power(float x, int n)
{

    if(n==1)
    {
        return x;
    }
return x*power(x,n-1);
}


int main()
{
   float x,p; int n;
   printf("enter x : ");
   scanf("%f", &x);
   printf("enter n : ");
   scanf("%d", &n);
    p= power(x,n);
   printf("the value of power(x,n) is %f\n", p);

    return 0;
}








