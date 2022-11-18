/*
Name: Shashwata Roy
Roll: 21MA10055
Dept: Maths and Computing
Package: Codeblocks
Assignment class: 4
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,bins,x=INT_MIN,y,i,j,l;
    printf("Enter the number of array elements: ");
    scanf("%d",&n);
    int *a =(int *)malloc(n*sizeof(int));
    printf("Enter the array elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",a+i);
        if(x<*(a+i))
            x=*(a+i);
    }
    printf("Enter number of bins: ");
    scanf("%d",&bins);
    y=x/bins;
    if(x%bins!=0)
    {
        printf("Equal division of intervals isn't possible\n");
    }
    else
    {
        for(i=0; i<bins; i++)                   //Loop for cases
        {
            l=0;
            printf("bin%d -> ",i+1);
            for(j=0; j<n; j++)
            {
                if((*(a+j))>y*i&&(*(a+j))<=y*(i+1))
                {
                    printf("%d, ",*(a+j));     //If it is within range then print
                    l++;
                }
            }
            printf("   Number of elements in bin%d = %d\n",i+1,l);  //Print number of elements in that bin after  case
        }
    }
    return 0;
}
