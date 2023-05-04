

#include<stdio.h>
#define N 100                               //used macro for the limit
int main()
{
    int a[100],n,c;                         //initialized n and c(for counting)
    printf("The upper limit is :");
    scanf("%d ", &n);                       //inputs n from user
    printf("The initial array is :");

    for(c=1;c<=n;c+=1){
        scanf("%d ", &a[c]);

    }
    printf("The new array is %d ", a[c]);



    for(c=1;c<=a;c+=1){
        if(a[c]<0)
            printf("%d ", a[c]);
    }

    for(c=1;c<=n; c+=1){
        if (a[c]>0)
    printf("%d ", a[c]);
    }

    return 0;


}
