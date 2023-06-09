/*Jaydeep
22AG30016*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int max(int*a,int n)
{

}
int main()
{
    srand(time(0));
    int n,p,q;
    scanf("%d",&n);
    if(n==0)
    {
        printf("invalid value of n");
        return 0;
    }
    scanf("%d",&p);
    scanf("%d",&q);
    if(p>q)
    {
        printf("p should be less than or equal to q");
        return 0;
    }
    int *a;

    int i=0;
    a=(int*)malloc(n*sizeof(int));
    printf("%d-random number array: ",n);
    for(i=0;i<n;i++)
    {
        *(a+i)=rand()%(q-p+1)+p;
        printf("%d\t",*(a+i));
    }
    int b=n/2;
    int*t;
    for(i=0;i<b;i++)
    {
        *(t+i)=*a;
    }

    int v=n-b;
    int *r;
    for(i=0;i<v;i++)
    {
         *(r+i)=*(a+b+i);
    }

   /* for(i=0;i<v;i++)
    {
        printf("%d",*(r+i));
    }
    printf("\n");*/
}
