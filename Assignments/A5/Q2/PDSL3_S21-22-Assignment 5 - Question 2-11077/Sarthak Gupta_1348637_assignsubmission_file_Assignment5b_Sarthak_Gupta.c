#include<stdio.h>
#include<stdlib.h>
int f1(int a[],int max,int min,int n)
{
    int i,num=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<max&&a[i]>=min)
        {
            num++;
        }
    }
    return num;
}
int main()
{
    int n,i,j,k=0,temp,bins,div;
    int *a;
    int **b;
    printf("Enter number of integers\n");
    scanf("%d",&n);
    a=(int *)malloc(sizeof(int)*(n));

    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
        printf("Enter the number of bins\n");
    scanf("%d",&bins);
    for(i=0;i<n-1;i++)
    {
        for (j=0;j<n-i-1;j++) 
        {
            if(a[j]>a[j+1])
            { 
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp; 
            }
        }
    }
    div=a[n-1]/bins+a[n-1]%bins;
    b=(int**)malloc(bins*sizeof(int*));
    for(i=0;i<bins;i++)
    {
        *(b+i)=(int*)malloc(sizeof(int)*f1(a,div*(i+1),div*(i),n));
        for(j=0;j<f1(a,div*(i+1),div*(i),n);j++)
        {
            b[i][j]=a[k+j];
        }
        k=k+f1(a,div*(i+1),div*(i),n);
    }
    for(i=0;i<bins;i++)
    {
        printf("bin %d=",i+1);
        {
            for(j=0;j<f1(a,div*(i+1),div*(i),n);j++)
            {
                printf("%d,",b[i][j]);
            }
            printf("Number of elements in bin=%d\n",f1(a,div*(i+1),div*(i),n));
        }
    }

    return 0;
}