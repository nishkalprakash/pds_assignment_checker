// NAME- SATYAJIT BEHERA
// ROLL NO-21AG10034
// DEPT- AGRICULTURE AND FOOD ENGINEERING
// SECTION-03
// SOFTWARE- code block

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // initializing the value
    int n;
    int *A;
    int bins;
    int t=0;
// taking the user input
    printf("Enter the number of array elements : ");
    scanf("%d",&n);
    A = (int*) malloc(n*sizeof(int));
// taking the array from the user
    printf("Enter the array elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&A[i]);
        
    }

    int r1=A[0], r2=A[0];
    for (int i = 0; i < n; i++)
    {
        if (A[i]<r1)
        {
            r1=A[i];
        }
        if (A[i]>r2)
        {
            r2=A[i];
        }
    }
    
    // takng the user input regarding the no of bins
    int count=0;
    printf("Enter the number of bins : ");
    scanf("%d",&bins);

    

    
    t = ((r2-r1)+1)/bins;

    for (int i = r1; i <= r2; i+=t)
    {
        
        printf("bin%d -> ",i);
        for (int j = 0; j < n; j++)
        {
            if (A[j]<i+t && A[j]!=-1)
            {
                printf("%d ",A[j]);
                A[j]=-1;
                count+=1;
            }
        }
        printf("Number of elements in bin = %d",count);
        printf("\n");
        count=0;
    }
        
    return 0;
}