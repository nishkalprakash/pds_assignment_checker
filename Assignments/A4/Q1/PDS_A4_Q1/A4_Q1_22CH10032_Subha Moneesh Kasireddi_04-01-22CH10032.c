/*Section: 02
  Name: Kasireddi Subha Moneesh
  Roll no.: 22CH10032
  Assignment No : 4
  Description : question 1 - read and check if valid password
*/
#include <stdio.h>

void main()
{
    char pass;
    printf("Enter a password: ");
    while(1)  //part a of the question: it keeps reading the characters until we press enter
    {
        scanf("%c",&pass);
        if(pass=='\n')
            break;
    }

}
