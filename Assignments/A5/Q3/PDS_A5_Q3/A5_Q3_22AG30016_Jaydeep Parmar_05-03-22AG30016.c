/*
jaydeep parmar
22AG30016
lab 5(array, function, recurssion)
problem 3
*/

#include<stdio.h>
int main()
{
    int p, q;
    printf("enter values of p an q:");
    scanf("%d %d",&p,&q);
    swap(p,q);
    int n;
    printf("enter length of array ");
    scanf("%d",&n);
    int arc[n];
    int i=0;
    while(i<n)
    {
        scanf("%d",&arc[i]);
        i++;
    }
    i=0;
    printf("original array is: ");
    while(i<n)
    {
        printf("%d\t",arc[i]);
        i++;
    }
    return 0;
}
void swap(int p,int q)
{
    int t;
    t=p;
    p=q;
    q=t;
    printf ("q= %d,p= %d\n",q,p);
}


