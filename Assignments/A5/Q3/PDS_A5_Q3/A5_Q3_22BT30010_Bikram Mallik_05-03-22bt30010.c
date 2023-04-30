#include<stdio.h>

    void printReversed( int i)
    {
        if(i<10)
        {
            printf("%d/n",i);
            return;
            }
        else
        {
            printf("%d",i%10);
            printReversed(i/10);
        }
        return 0;
    }
