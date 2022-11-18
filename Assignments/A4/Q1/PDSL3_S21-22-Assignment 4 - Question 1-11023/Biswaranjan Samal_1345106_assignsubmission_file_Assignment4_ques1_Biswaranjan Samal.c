/*
Name:Biswaranjan Samal
Roll no: 21IM10011
Dept: Industrial and Systems Engineering
Package: Codeblocks
Assignment:4,Question 1
*/


#include <stdio.h>

void possibleCombinations(int arr[],int l,int i,int n,int back[],int last)
{
    if(l == 0)   //base case of recursive function
    {
        int j;
        for(j = 0; j < last; j++)
            printf("%d ",back[j]);      //prints when length is over
        printf("\n");
        return;
    }
    int j;
    for(j = i; j < n; j++)
    {
        back[last] = arr[j];
        possibleCombinations(arr,l-1,j,n,back,last+1);  //array by array and index by index the array is checked
        //                                                and length is decreased
        back[last] = 0;
    }
}

int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    int i,j,last=0;
    printf("Enter the array:");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[last]);
        for(j = 0; j < last; j++)   //first distnict number is inuput in array
        {
            if(arr[last] == arr[j])
                break;
        }
        if(j == last)
            last++;
    }

    printf("Enter the length:");
    int l;
    scanf("%d",&l);
    int back[l];  //back array stores and also we need to store the index,index is created so that we won check back elements stored
    possibleCombinations(arr,l,0,last,back,0);

}
