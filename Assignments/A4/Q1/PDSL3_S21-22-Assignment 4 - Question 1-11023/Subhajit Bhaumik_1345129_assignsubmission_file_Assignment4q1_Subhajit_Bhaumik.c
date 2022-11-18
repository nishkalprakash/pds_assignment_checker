// Program to print all possible combinations of size r from an array of size n
#include<stdio.h>
void com(int a[],int b[],int start,int end,int index,int r);

// main function printing all the combinations of size r
// com() function is used here
void printCom(int a[],int n,int l)
{
    // b[] is the temporary array to store all combinations
    int b[l];
    com(a,b,0,n-1,0,l);
}

/* a[] is the array to be given as input by the user
   start and end denotes the start and end index of given array
   index denotes the current index in b[]
   l denotes the size of the combination to be printed */
void com(int a[],int b[],int start,int end,int index,int l)
{
    if(index==l)
    {
        //printing the combination
        for(int j=0; j<l; j++)
            printf("%d ",b[j]);
        printf("\n");
        return;
    }
    for(int i=start; i<=end; i++)
    {
        b[index]=a[i];
        com(a,b,i,end,index+1,l);
    }
}

// main program
int main()
{
    int m,a[10],l,n;
    printf("Enter the number of elements in the array:");
    scanf("%d",&m);
    printf("Enter the array:");
    for(int k=0; k<m; k++)
    {
        scanf("%d",&a[k]);
    }
    printf("Enter the size of combination:");
    scanf("%d",&l);
    printCom(a,n,l);
}
