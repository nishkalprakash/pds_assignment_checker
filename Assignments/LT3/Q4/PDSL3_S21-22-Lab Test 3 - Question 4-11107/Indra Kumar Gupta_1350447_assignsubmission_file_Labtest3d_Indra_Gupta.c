/*
Name: Indra Kumar Gupta
Roll: 21AE10043
Department: Aerospace Engineering
Package: CodeBlocks
Operating system: Windows
*/

//Lab Test 3 Question 4

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,k;
    char input_str[1000];
    printf("Enter the expression(Only enter paranthesis without space and other characters): ");
    //taking input
    scanf("%[^\n]", input_str);

    while(input_str[i]!='\0')//counting no of element in string even or odd
    {
        i++;
    }
    if((i%2)!=0)
    {
        printf("\nResult: Unmatched parenthesis");
        return 0;
    }
    for(j=0; j<i; j++)
    {
        if((input_str[j]=='['&&input_str[j+1]==']')||(input_str[j]=='{'&&input_str[j+1]=='}')||(input_str[j]=='('&&input_str[j+1]==')'))//checking whether two consecutive elements are matching or not
        {
            i=i-2;
            for(k=j; k<i; k++)//if matching replacing it by next element
            {
                input_str[k]=input_str[k+2];
            }
            j=-1;
        }

    }

    //finally checking any unmatched element left or not and printing the result according to that
    if(j==0&&i==0)
    {
        printf("\nResult: Matched parenthesis");

    }
    else
    {
        printf("\nResult: Unmatched parenthesis");
    }

    return 0;
}

