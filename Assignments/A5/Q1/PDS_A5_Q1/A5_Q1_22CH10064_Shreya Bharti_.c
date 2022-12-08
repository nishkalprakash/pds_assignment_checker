#include<stdio.h>


int main()
{
    int i, n;
    float x, sum=1, t=1;
    
    
    printf("Enter the value for x : ");
    scanf("%f", &x);
    
    printf("\nEnter the value for n : ");
    scanf("%d", &n);
    
    /* Loop to calculate the value of Exponential */
    for(i=1;i<=n;i++)
    {
        t=t*x/i;
        sum=sum+t;
    }
    
    printf("\nThe Exponential Value of %f = %.4f", x, sum);
    getch();
}