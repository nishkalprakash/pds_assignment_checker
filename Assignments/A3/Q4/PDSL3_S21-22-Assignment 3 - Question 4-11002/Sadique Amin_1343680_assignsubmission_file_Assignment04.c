/*
Name: Sadique Amin
Roll Number: 21CE30027
Department: Civil Engineering
Package used: <stdio.h>
Assignment Class: 6
*/

#include <stdio.h>  //Headers, Preprocessor

int n;                                                      //Global Variable declaration
int binary(int arr[], int a);                               //Function Declaration
int linear(int arr[], int a);

int main()
{
    int flag=1,x,choice,pos;
    printf("Enter the number of elements n: ");
    scanf("%d",&n);
    int seq[n];
    while(flag==1)                                          //this part of code checks whether the array is in increasing sequence
    {
        flag=0;
        printf("Enter the elements in sorted order: ");
        scanf("%d",&seq[0]);
        for(int i=1;i<n;i++)
        {
            scanf(",%d",&seq[i]);
        }
        for(int i=1;i<n;i++)
        {
            if(seq[i]<seq[i-1])
            {
                printf("Not Sorted. Enter again\n");
                flag=1;
                break;
            }
        }
    }
    
    printf("Enter the key element x, which you want to search: ");
    scanf("%d",&x);
    printf("Choose the algorithm: Type 1 for linear search and 2 for binary search: ");
    scanf("%d",&choice);
    
    if(choice==1)                                                       //Assigning tasks according to choice of user
    {
        printf("Executing the linear search algorithm\n");
        pos=linear(seq,x);
    }
    else if(choice==2)
    {
        printf("Executing the binary search algorithm");
        pos=binary(seq,x);
    }
    else
    {
        printf("Invalid Choice");
        return 0;
    }
    printf("Successful Search\n");
    printf("Element %d has been found at the index %d",x,pos);
    return 0;

}



int linear(int arr[], int a)                                            //Method for linear search
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==a)
        {
            return i;
        }
    }
    return -1;
}

int binary(int arr[], int a)                                            //Method for binary search
{
    int low,high,mid;
    low=0;
    high=n-1;
    mid=(low+high)/2;
    while (low<=high)
    {
        if(arr[mid]<a)
        {
            low=mid+1;
        }
        else if(arr[mid]==a)
        {
            return mid;
        }
        else
        {
            high=mid-1;
        }
        mid=(low+high)/2;
        if(low>high)
        {
            return -1;
        }

    }
    return -1;
}
