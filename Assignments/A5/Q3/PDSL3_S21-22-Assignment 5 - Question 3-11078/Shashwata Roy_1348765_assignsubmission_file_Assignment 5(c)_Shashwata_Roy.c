/*
Name: Shashwata Roy
Roll: 21MA10055
Dept: Maths and Computing
Package: Codeblocks
Assignment class: 4
*/
#include<stdio.h>
#include<stdlib.h>

int saddle(int *a,int r,int c)
{
    int i,j,k,l,maxi,mini,ind1,ind2,temp=0;
    printf("Saddle points is/are = ");
    for(i=0; i<r; i++)
    {
        maxi=mini=*(a+i*c),ind1=ind2=0;          //Store initial value and column index
        for(j=1; j<c; j++)
        {
            if (mini>(*(a+i*c+j)))    //Check for min element in the column and store its column index
            {
                mini=*(a+i*c+j);
                ind1=j;
            }
            if (maxi<(*(a+i*c+j)))    //Check for max element in the column and store its column index
            {
                maxi=*(a+i*c+j);
                ind2=j;
            }
        }
        for(k=0; k<c; k++)       //If that element is max in the row then the loop  does not break and k becomes r
        {
            if (mini<(*(a+k*c+ind1)))
                break;
        }
        for(l=0; l<c; l++)       //If that element is min in the row then the loop  does not break and l becomes r
        {
            if (maxi>(*(a+l*c+ind2)))
                break;
        }
        if(k==r)            //If loop does not break
        {
            printf("%d ",mini);
            temp=1;
        }
        else if(l==r)      //If loop does not break
        {
            printf("%d ",maxi);
            temp=1;
        }
    }
    return temp;                 //If saddle point is not found then return 0
}

int main()
{
    int r,c,i,j,k;
    printf("Enter rows and columns: ");
    scanf("%d%d",&r,&c);
    int *a = (int *)malloc(r*c*sizeof(int));
    for(i=0; i<r; i++)
    {
        printf("Enter row %d: ",i+1);
        for(j=0; j<c; j++)
        {
            scanf("%d",(a+i*c+j));
        }
    }
    k=saddle(a,r,c);
    if(k==0)
        printf("No saddle point\n");
    free(a);
    return 0;
}
