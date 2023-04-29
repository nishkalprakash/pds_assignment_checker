#include<stdio.h>
int primecheck (int n)

{
    if(n<=1)
    {
        return 0;
    }
    for (int i=2; i<=n; i++)
    {
        if (n%i==0) {return 0;}
    }
    return 1;
}

int main () {
    int n;
    printf("Enter an even integer:");
    scanf("%d",&n);
    if (n%2==1)
    {
        printf("Error:Input must be even:\n");
        return 1;
    }
    for (int i=2; i<=n;i++)
    {
        if (primecheck(i) && primecheck(n-i)) {
            printf("%d + %d = %d\n", i ,n-i,n);
            break ;
        }
    }
    return 0;

}
