#include<stdio.h>
 void swap(int *p, int *q);
 int main()
 {

    int a[100],x,y,z,*p;
    printf("Enter the size of the array and direction :");
    scanf("%d%d", &x, &y);
    printf("Enter %d integers :", x );

    for(z=1;z<=x; z+=1){
        scanf("%d", &a[z]);
    }
    printf("Original Array :");
    for(z=1; z<=x; z++){
            printf("%d ", a[z]);

    }
    printf("Array after reverse :");
    for(z=x-1;z>=0;z-=1){
        printf("%d ", a[z]);
    }
    swap(&a[x-1],&a[x]);
    if(y<0)

    void swap(int p, int q){
    }
    return 0;
 }
