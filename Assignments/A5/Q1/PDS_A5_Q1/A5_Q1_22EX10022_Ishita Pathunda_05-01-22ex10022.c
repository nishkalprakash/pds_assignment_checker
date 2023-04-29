#include<stdio.h>
void main()
{
    int arr[100],n;
    scanf("%d",&n);
    if(n>100){
        printf("error:n>100");
    }
    else{
        for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("original array:");
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n rearrange array:");
    for(int i=0;i<=n;i++){
        if(arr[i]<0){
           printf("%d ",arr[i]);
        }
    }
    for(int i=0;i<n;i++){
        if (arr[i]>0){
            printf("%d ",arr[i]);
        }
    }
}


}
