/* Name   : Pasupulety Chethan Krishna Venkat
   Dept   : Computer science
   Roll no: 21CS30036
   Package: Code blocks
   Os     : windows
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter your 3-digit number:");
    scanf("%d",&n);

    int a,b,c;

    c=n%10;       /* using the modulus function to get remainder for the 3 digits */
    b=(n/10)%10;
    a=(n/100)%10;

    printf("The reverse number= %d%d%d",c,b,a);

return 0;
}

