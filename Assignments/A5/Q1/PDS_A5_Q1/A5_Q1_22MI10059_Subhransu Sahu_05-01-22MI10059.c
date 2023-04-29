#include <stdio.h>
#define N 100
int main() {

    int a[100], n, i, j;
    scanf("%d", &n);
    if(n>100)
        printf("Error: n>100");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    printf("\nOriginal Array:");
    for(i=0;i<n;i++){
    printf("%d ", a[i]);}
    printf("\nRearranged Array:");

    for(i=0;i<n;i++){

    if(a[i]<0)
        {printf("%d ", a[i]);}

    }
     for(i=0;i<n;i++){

    if(a[i]==0)
        {printf("%d ", a[i]);}

    }
     for(i=0;i<n;i++){

    if(a[i]>0)
        {printf("%d ", a[i]);}

    }


        return 0;
}




