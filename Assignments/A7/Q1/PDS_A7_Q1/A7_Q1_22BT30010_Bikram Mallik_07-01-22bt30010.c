#include<stdio.h>
//#incude<stdlib.h>
int main()
{
    int *A ,n,i;
   // srand(time(0));
    printf("how many no will you enter");
    scanf("%d",&n);
    A=(int*) malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    {
       // *(A+i) =2+rand()%1000;
    }
    printf("%d random no of array",n);
   for(i=0;i<n;i++)
    {
        printf("%d",*(A+i));
    }



}

