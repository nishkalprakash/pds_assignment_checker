# include <stdio.h>

int linear_search(int list[],int key,int n)
{
    int i,flag=0;
    for (i=0;i<n;i++){
        if (list[i]==key) {flag=1; break;}
    }
    return(flag);
}

int bin_search(int list[],int key,int n)
{
    int low=0,high,mid,flag=0;
    high=n-1;
    mid=(low+high)/2;
    while (low<=high && flag==0){
        if (list[mid]<key) low=mid+1;
        else if (list[mid]==key) flag=1;
        else high=mid-1;
        mid=(low+high)/2;
    }
    return(flag);
}

int main()
{
    const int n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int nums[n],i,flag=0;
    while (flag==0){
        printf("Enter the elements in sorted order : ");
        for (i=0;i<n;i++){
            scanf("%d",&nums[i]);
        }
        for (i=1;i<n;i++){
            if (nums[i]<nums[i-1]) {flag=0; break;}
            else flag=1;
        }
        if (flag==0) printf("Not sorted. Enter again !!\n");
    }
    printf("Enter the key element x, which you want to search : ");
    scanf("%d",&flag);
    i=0;
    while (i!=1 && i!=2){
        printf("Choose the algorithm: Type 1 for linear search and 2 for binary search : ");
        scanf("%d",&i);
        if (i==1){
            if (linear_search(nums,flag,n)==0) printf("%d is not found",flag);
            else printf("%d is found",flag);
        }
        else if (i==2){
            if (bin_search(nums,flag,n)==0) printf("%d is not found",flag);
            else printf("%d is found",flag);
        }
        break;
    }
}
