# include<stdio.h>
int main(){
    int i, n, b, A[20];
    printf("Enter the number of array elements: ");
    scanf("%d", &n);
    printf("\nEnter the array elements: ");
    for(i=0;i<n;i++){
        scanf("%d", &A[i]);
    }
    return 0;
}
