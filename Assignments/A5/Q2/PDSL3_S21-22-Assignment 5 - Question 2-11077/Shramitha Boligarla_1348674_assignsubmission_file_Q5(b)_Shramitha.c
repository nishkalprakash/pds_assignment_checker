#include<stdio.h>
int  main()
{
    int n,i,j,min,max,bins,lb,rb,len=0;
    int *ptr;
    printf("Enter the no.of array elements : ");
    scanf("%d",&n);
    ptr=(int *)malloc(2*n*sizeof(int));
    printf("Enter the array elements:");
    scanf("%d",ptr);
    min=max=ptr[0];
    for(i=1;i<n;i++)
    {
        scanf("%d",ptr+1);
        if(ptr[i]>max)max=ptr[i];
        else if (ptr[i]<min)min=ptr[i];
    }
    printf("Enter the no.of bins : ");
    scanf("%d",&bins);
    realloc(ptr, ((2*n)+bins)*sizeof(int));
    lb=min;
    rb+=lb;
    for(i=0;i<bins;i++){
        for(j=0;i<n;j++){
            if(ptr[j]>=lb && ptr[j]<rb) ptr[n+len]=ptr[j];ptr[(2*n)+i]+=1; len++;
        }
        if(len==n)break;
        lb=rb;
        rb+=rb;
    }
    for(i=0;i<bins;i++){
        printf("bin %d -> ",i+1);
        for(j=0;j<ptr[2*n+i];j++)printf("%d,",ptr[n+j]);
        printf("No.of elements in bin %d\n",i+1,ptr[(2*n)+i]);
    }
    free(ptr);
    return(0);
}


