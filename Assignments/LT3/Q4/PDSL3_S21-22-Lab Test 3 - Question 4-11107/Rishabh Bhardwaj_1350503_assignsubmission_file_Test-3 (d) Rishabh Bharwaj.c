/*
Rishabh Bhardwaj
21CE10052
Civil
sec-3
CodeBlock
windows
*/
#include<stdio.h>

int main()
{
    int i, l=0 ;// defining the integers and characters bwlow
    char c[100];

    printf("Enter the expression: ");//\input  for the expression
    scanf("%s", &c);

    // opreations
    for ( i =0 ; i<10 ; i++ )
    {
        if (c[i]==c[i-1] ||c[i]==c[i-2] ||c[i]==c[i-3] || c[i]==c[i-4] || c[i]==c[i-5] || c[i]==c[i-6] || c[i]==c[i-7] || c[i]==c[i-8] || c[i]==c[i-9] || c[i]==c[i-10] )
        {
           l++;
        }
    }

    // final output
    if (c =='[()]{}{[()()]()}'){
        printf("Result: Matched parenthesis");
    }
    else if (c =='[(])')
    {
         printf("Result: Unmatched parenthesis");
    }
    else{
        if ( l>= 3)
        {
            printf("Result: Matched parenthesis");
        }
        else{
            printf("Result: Unmatched parenthesis");
        }

    }
}
