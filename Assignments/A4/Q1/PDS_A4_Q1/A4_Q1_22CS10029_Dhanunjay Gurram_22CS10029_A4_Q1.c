// This program prints the factors of the given integer
#include <stdio.h>
int main()
{
    int num,i,num1;
    printf("Enter the integer:");
    scanf("%d",&num1);
    if (num1<0) num=num1*-1;                  //converting -ve no to +ve so that loop works
    else num=num1;
    for (i=1;i<=num/2;i++){
       if (num%i==0) printf(" %d",i);
       else continue;}
    printf(" %d\n",num);               //Loop checks upto num/2 and leaves num this stmt prints it!
    return 0;
}
