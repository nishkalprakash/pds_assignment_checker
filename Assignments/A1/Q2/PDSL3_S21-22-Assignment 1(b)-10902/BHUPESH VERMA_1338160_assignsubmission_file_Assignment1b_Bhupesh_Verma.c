#include <stdio.h>
#include <stdlib.h>

int main()
{int num;
    printf("Enter the 3 digit number: ");
    scanf("%d",&num);
    int rev=0,r;
    while(num>0){
        r = num%10;
        rev = rev*10 + r;
        num = num/10;
    }
    printf("\nReversed Number = %d",rev);
    return 0;
}
