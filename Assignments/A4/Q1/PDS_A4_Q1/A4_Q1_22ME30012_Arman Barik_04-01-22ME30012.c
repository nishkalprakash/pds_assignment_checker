/*
* Section 2
* Roll No : 22ME30012
* Name : Arman Barik
* Assignment No : 4
* Description : Password checking
*/
#include <stdio.h>
int main()
{
    int i=1;
    char p;
    printf("Enter the password:\n");
    do
    {
        i++;
        scanf("%c",&p);
        printf("%c",p);

    } while(p !='\n');

    return 0;
}

