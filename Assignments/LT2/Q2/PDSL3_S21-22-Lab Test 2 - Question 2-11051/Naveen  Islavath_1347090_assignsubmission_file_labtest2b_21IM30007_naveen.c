#include<stdio.h>

int maxAlphaValue(int array[],int n){
    int c,m=0;
    if (array[0]%array[1]==0){
        m=1;
    }
    for (int i=2;i<n;i++){
        c=0;
        for(int j=0;j<i;j++){
            if (array[j]%array[i]==0){
                c++;
            }
        }
        if (c>m){
            m=c;
        }
    }
    return m;
}

int main()
{
    int n;
    printf("Enter no of elements : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array a[ ]: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Max Alpha Value : %d",maxAlphaValue(a,n));
    return 0;
}