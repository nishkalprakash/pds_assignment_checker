/*Soumojit Bhattacharya 
21EC10071 
macos visual studio code*/
#include <stdio.h>
#include <stdlib.h>

int min(int *a,int size)      //finds min value in array
{
    int i,min=a[0];
    for(i=1;i<size;i++)
    {
        if(min>a[i])
        min=a[i];
    }
    return min;
}

int max(int *a,int size)      //finds max value in array
{
    int i,max=a[0];
    for(i=1;i<size;i++)
    {
        if(max<a[i])
        max=a[i];
    }
    return max;
}

void makebins(int *a,int nbins, int r1, int r2, int size)  //makes bins and prints them
{
    int i,j;
    for(i=0;i<nbins;i++)
    {
        int count=0,lb,ub,*bin;
        lb=r1+i*(r2-r1)/nbins;          //find upper and lower bounds of current bin
        ub=r1+(i+1)*(r2-r1)/nbins;
        for(j=0;j<size;j++)
        {
            if(a[j]>lb&&a[j]<=ub)            //count number of elements that will be stored in bin
            count++;
        }
        bin=(int*)malloc(count*sizeof(int));      //allocates memory of required size
        int k=0;
        printf("bin%d-> ",i+1);              //i+1 stores bin number
        for(j=0;j<size;j++)
        {
            if(a[j]>lb&&a[j]<=ub)              //form the bin
            {
                bin[k]=a[j]; 
                printf("%d ",bin[k]);           //print bin 
                k++;
            }
        }
        printf("  Number of elements in bin%d =%d\n",i+1,count);     //output number of elements in bin
        free(bin);                            //free the bin
    }
}

int main()
{
    int n,nbins;
    int *a;
    printf("Enter number of array elements:"); //user input
    scanf("%d",&n);
    printf("Enter the array elements:");
    a=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)                      //user input
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number of bins:");
    scanf("%d",&nbins);                   //accept number of bins
    int r1=min(a,n)-1;                   //find range of values
    int r2=max(a,n);
    makebins(a,nbins,r1,r2,n);
    printf("\n");
    free(a);
    return 0;
}