// question 2
// number reverse

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a 3-digit number: ");
    scanf("%d",&n);
    int rev=0;
    while(n>0)
    {
        rev=rev*10+n%10;
        n/=10;
    }
    printf("Reverse number = %d",rev);
    return 0;
}
