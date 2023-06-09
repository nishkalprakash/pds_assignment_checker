/*name-ANSH KAKKAR
roll no.-22IM10009
SEC-2*/




#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    int *p;
    p=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    printf("LISTED ARRAY ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",p[i]);
    }
    // this part not by recurssion
    int sum=0;
    float mean;
    for(int i=0;i<n;i++)
    {
        sum=sum+p[i];
    }
    mean=sum/n;
    printf("mean is %f",mean);
    return 0;


}


