/*
Rishabh Bhardwaj
21CE10052
Civil
sec-3
CodeBlock
windows
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i ,a , b, n[10000], p, q;// defining i,a , b,p, q as integers and n as array of integers

    printf("Enter the two digits: ");// enter the two digits for the computation
    scanf("%d %d", &a, &b);


    // operation for the five digit numbers
    for (i=0; i<10000; i++)
    {
        n[i] = 10000 + rand()%99999;

        if (n[i]%(a+b)!=0 && n[i]%a==0 && n[i]%b==0)
        {
            printf("%d \n", n[i]);// output of the functions.
        }
    }

}
