

#include <stdio.h>
#include<stdlib.h>
void createbins(int*p,int min,int max,int b,int n)
{
    int i,j;
    int range=(max-min+1);
    int d=(range/b);
    for(i=0;i<b;i++)
    {
        int count=0;
        printf("the elements of bin %d[%d-%d]\n",i+1,i*d+1,(i+1)*d);
        for(j=0;j<n;j++)
        {
            if(p[j]<=(i+1)*d && p[j]>i*d){//checking whether the element is in particular bin or not
            printf("%d ",p[j]);
            count++;}
            
        }
        printf("the no. of elements of bin %d =%d\n ",i+1,count);
        
    }
}

int main()
{
    int*a,min=9999,max=-9999,n,i,j,b;
    printf("enter the no . of array elements");
    scanf("%d",&n);
    printf("enter the array elements");
    a=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
        max=a[i];
        if(a[i]<min)//finding the max and min value of array
        min=a[i];
    }
    printf("enter the no. of bins");
    scanf("%d",&b);
    createbins(a,min,max,b,n);//function call
    
    

    return 0;
}
