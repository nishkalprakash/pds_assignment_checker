/*
Name: Anfal S
Roll no: 21AE10003
Section: 3
Dept: AE
Package: Codeblocks
exam: 2
Operating System: windows
*/
/*to find the largest sum of contiguous and its corresponding sub array(s)*/
#include<stdio.h>
int max(int x,int y) //function to find the maximum of two numbers.
{
    int z;
    z=(x>=y)?x:y;
    return(z); //if x is greater than y then x is returned else y is returned.
}
int main()
{
    int n,temp,M=0,i,j,k;
    int X[20];
    printf("Enter the value of n in the range[1,20]:");
    scanf("%d",&n);
    printf("enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&X[i]);  //values are entered.
    }
    temp=X[0];
    for(i=0;i<n;++i)
    {
        for(j=0;j+i<n;++j)
        {
         M=M+X[i+j];
         temp=max(temp,M);  //this way the largest sum is stored as temp.
        }
        M=0;
    }
    printf("the largest sum= %d\n",temp);
    printf("sub array(s):\n");
     for(i=0;i<n;++i)
    {
        for(j=0;j+i<n;++j)
        {
         M=M+X[i+j];
         if(M==temp)  // the same process as to find the largest sum but is used to print the sub array(s).
         {
             for(k=i;k<=i+j;++k)
             {
                 printf(" %d ",X[k]);
             }
             printf("\n"); // for the sub-array to be stacked below another sub-array.
         }
        }
        M=0;
    }
    return 0;
}
