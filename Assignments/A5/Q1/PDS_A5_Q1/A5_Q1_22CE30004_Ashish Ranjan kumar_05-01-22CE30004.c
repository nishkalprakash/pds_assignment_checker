#include<stdio.h>
int main() {
    int a[100],n,i;
    printf("Enter the limit: ");
    scanf("%d", &n);
    printf("Original Array: ");
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Rearranged Array: ");
    for(i=0; i<n; i++) {
        if(a[i]<0)
            printf("%d\t", a[i]);
    }
    for(i=0; i<n; i++) {
        if(a[i]>0)
            printf("%d\t", a[i]);
    }


    return 0;
}

