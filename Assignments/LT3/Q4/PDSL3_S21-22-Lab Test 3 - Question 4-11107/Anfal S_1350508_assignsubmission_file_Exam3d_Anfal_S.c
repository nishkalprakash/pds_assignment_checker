/*
Name: Anfal S
Roll no: 21AE10003
Section: 3
Dept: AE
Package: Codeblocks
exam: 3
Operating System: windows
*/
//to find whether the given expression have matched parenthesis
#include<stdio.h>
int main()
{
    char A[100];
    int i,j,k;
    printf("enter the expression:");
    scanf("%s",A); // input string
    for(i=0;A[i]!='\0';i++)
    {
        for(j=i+1;A[j]!='\0';j++)
        if((A[i]=='['&&A[i+j]==']')||(A[i]=='('&&A[i+j]==')')||(A[i]=='{'&&A[i+j]=='}')) //it doesn't matter if the parenthesis is of another cause their matches would be inside the two.
        {
            k=j-1;
            if(k%2!=0) {printf("Result: Unmatched parenthesis"); //if a parenthesis is matched then the no of elements between them should be even.
            return 0;}  // when an unmatched parenthesis is found the function is stopped.
        }
    }
    printf("Result: matched parenthesis");
    return 0;
}
