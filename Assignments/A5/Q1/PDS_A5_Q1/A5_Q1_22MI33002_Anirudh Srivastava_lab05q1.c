#include<stdio.h>
# define N 100
int main() {
    int a[N],n,i,j;

    printf("enter the size ");
    scanf("%d", &n);
    if(n>100) {
        printf("Error: n>100");
        return 0 ;
    }
    else {
        printf("\n");
    }

    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    printf("the original array is :");
     for(i=0;i<n;i++) {
        printf("\n%d\n", a[i]);
    }

    printf("the rearranged array is :");

            for(j=0;j<n;j++){
                if(a[j]<0) {
                    printf("\n%d\n", a[j]);
                }
            }
            for(i=0;i<n;i++) {
                if (a[i]>0) {
                    printf("\n%d\n", a[i]);
                }
            }












return 0;
}
