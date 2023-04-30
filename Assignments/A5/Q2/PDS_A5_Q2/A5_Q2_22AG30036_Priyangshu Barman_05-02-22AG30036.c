#include<stdio.h>
int primeCheck(int i);//checks whether prime or not
void goldbach(int n);//checks the goldbach number
int main()
{
   int num = 0;
   while(1)
   {
    printf("Enter a number : ");
   scanf("%d",&num);
   if(num >= 4 && num % 2 == 0)//the number must be even positive greater than equal to 4
   {
       goldbach(num);
   }
    else
    {
        printf("-1");
    }
    printf("\n");
   }
   return 0;
}
int primeCheck(int i)
{
    int f = 1;
    for(int b = 2;b < i/2;b++)
    {
        if((i % b) == 0)
        {
            return f - 1;
        }
    }
    return f;
}
void goldbach(int n)
{
    int a = 2;
    for(int b = n - a;b > 1;b--)
    {
        if(primeCheck(a) == 1 && primeCheck(b) == 1)
        {
            printf("%d, %d\n",a,b);//gives the additional value of the smallest and the largest prime numbers of the given even number by the user
            break;
        }
        a++;
    }
}

