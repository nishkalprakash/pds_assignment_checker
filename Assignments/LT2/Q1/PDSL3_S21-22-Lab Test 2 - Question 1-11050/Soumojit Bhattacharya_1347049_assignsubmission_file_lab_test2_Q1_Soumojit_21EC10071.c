/*Soumojit Bhattacharya 
21EC10071 
macos visual studio code*/
#include <stdio.h>
int n;

void compute(int a[],int b[],int c[],int j)  
{
    int i,sum=0;
    b[j]=0;
    for(i=j;i<n;i++)       //compute b[j],c[j]
    {                      //meaning of both given in main 
        sum+=a[i];
        if(b[j]<sum)
        {
            b[j]=sum;
            c[j]=i+1;
        }
    }
    if(j+1<n)
    compute(a,b,c,j+1);    //to compute next element in b
}
int main()
{
    int i;
    printf("enter n:");
    scanf("%d",&n);
    printf("enter elements:");
    int a[n],b[n],c[n];      //array stores user input
    for(i=0;i<n;i++)         //b[i] stores max sum we would get if we started adding from i
    {                        //c[i] stores position where we stopped adding when computing b[i]
        scanf("%d",&a[i]);
    }
    printf("\n");
    compute(a,b,c,0);
    int max=0;
    for(i=0;i<n;i++)     //find maximum value in b which in turn is the max difference
    {
        if(b[i]>b[max])
        max=i;
    }
    printf("\nMax value is= %d\nSub array=", b[max]);  //print sub array
    for(i=max;i<c[max];i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}