
#include<stdio.h>
#include<math.h>
int main(){
    int n,i,arr[100];
    printf("Enter the array limit (n<=100):");
    scanf("%d",&n);
    printf("enter %d numbers:",n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf(" the original array is:");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    printf("\n");

    printf("Rearranged Array :");
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            printf("%d ",arr[i]);
        }
    }
for( int i=0;i<n;i++){
    if(arr[i]>0){
        printf("%d ", arr[i]);
    }
}
return 0;
}

