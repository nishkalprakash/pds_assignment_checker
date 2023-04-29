#include <stdio.h>
#include<math.h>
int primecheck (int i)
{
    int a = 1 ;
    for (int b = 2 ; b<i;b++)
    {
        if (i%b==0){
            return 0;
        }

    }
    return 1;
}


int main()
{
    int x;
    int y;
    scanf("%d",&x);
    for (int i=2;i<x;i++)
        if prime check(i)==1
    {
        y=i
    }
}
