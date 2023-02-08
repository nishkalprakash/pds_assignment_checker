
#include<string.h>
#include <stdio.h>
#include <stdlib.h>
int getm(int m)
{
    int i;
    printf("Enter the value of m :- ");
    scanf("%d",&i);
    return i;
}
int getn(int m)
{
    int i;
    printf("Enter the value of n :- ");
    scanf("%d",&i);
    return i;
}
int get1(int m)
{
    int i;
    printf("Enter the values :- ");
    scanf("%d",&i);
    return i;
}
int get2(int m)
{
    int i;
    scanf("%d",&i);
    return i;
}


int main()
{
    int M,N,i;
    int len;
    M=getm(M);
    N=getn(N);
    len=M*N;
    char arr[len];
    get1(arr[0]);
    for(i=1;i<len;i++)
    {
        arr[i]=get2(i);
    }

}