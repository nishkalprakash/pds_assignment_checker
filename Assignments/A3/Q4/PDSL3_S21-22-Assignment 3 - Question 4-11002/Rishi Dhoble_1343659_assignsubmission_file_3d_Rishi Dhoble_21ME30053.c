#include<stdio.h>
int bin_Search(int a[],int n,int x){
    int beg=0;
    int end=n;
    int mid;
    while(beg<=end){
        mid=(beg+end)/2;
        if(a[mid]==x)
            return mid;
        if(a[mid]>x)
            end=mid-1;
        else if(a[mid]<x)
            beg=mid+1;
    }
    return -1;
}

int linear_Search(int a[],int n,int x){
    for(int i=0;i<n;i++){
        if(a[i]==x)
            return i;
    }
    return -1;
}

int main()
{
    int a[20];
    int n,choice,x,i;
    printf("\nEnter the number of elements: ");
    scanf("%d",&n);
    int flag=0;
    while(1){
        flag=0;
        printf("\nEnter elements in sorted order: ");
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=1;i<n;i++){
            if(a[i]<a[i-1]){
                printf("\nNot sorted. Try again;");
                flag=1;
                break;
            }
        }
        if(!flag)
            break;
    }
        printf("\nEnter the key element x,you want to search: ");
        scanf("%d",&x);
        printf("\nChoose the algorithm: Type 1 for linear search and 2 for binary search: ");
        scanf("%d",&choice);
        if(choice==1){
            printf("\nExecuting the linear search algorithm.");
            int ind=linear_Search(a,n,x);
            if(ind>0)
                printf("Successful Search\nElement %d has been found at the index %d",x,ind);
            else
                printf("Unsuccessful Search");
        }
        else if(choice==2){
            printf("\nExecuting the binary search algorithm.");
            int ind=bin_Search(a,n,x);
            if(ind>0) {printf("Successful Search\nElement %d has been found at the index %d",x,ind);}
            else {printf("Unsuccessful Search");}
        }
        else {printf("Invalid choice");}
    return 0;
}
