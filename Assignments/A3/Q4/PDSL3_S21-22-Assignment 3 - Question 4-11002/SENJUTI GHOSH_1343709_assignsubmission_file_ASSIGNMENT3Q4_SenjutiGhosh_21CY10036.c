#include<stdio.h>
int linear_search(int A[],int x,int n){
 printf("Linear Search");
    for (int i=0;i<n;i++){
         if (A[i]==x){
            return (i);
            break;
             }
    }
   return -1;

    }

int binary_search(int A[],int x,int n){
    printf("Binary Search");
    int low=0,high=(n-1);
    while (low<=high){
           int mid=(low+high)/2;
           if (x==A[mid]){
               return mid;}
           else if (x<A[mid]){
                    high=mid-1;}
           else{
                low=mid-1;}
    }
    return -1;
 }
int main(){
int n,q,A[100],choice,x;
printf("Enter the number of elements");
scanf("%d",&n);
printf("Enter key");
scanf("%d",&x);
printf("\n");
printf("Enter the sorted elements");
for (int i=0;i<n;i++){
     scanf("%d",&A[i]);
     printf("\n");}
for (int j=1;j<=n;j++){
     if (j<n){
         if (A[j]<A[j-1]){
             printf("invalid");
             break;}}
     printf("%d\n",A[j-1]);}
printf("Choose the algorithm: Type 1 for linear search and 2 for binary search 2\n");
scanf("%d",&choice);
if (choice==1){
     q=linear_search(A,x,n);
     if (q==-1){
        printf("%d not found",x);
     }
     else{
        printf("%d found at %d",x,q);
     }
    }
if (choice==2){
    printf("Binary Search");
    q=binary_search(A,x,n);
    if (q!=-1){
        printf("%d found at index %d",x,q);}
    else{
         printf("%d not found",x);}
}
return 0;
}
