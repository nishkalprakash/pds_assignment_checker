#include<stdio.h>
float mean(int* a,int n){
    float s=0;

    if (n==1) return a[0];

    else{
            s=a[n-1]+mean(a,n-1);

    }
    return s;

}

int main(){
    int n;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    printf("\nList = [");
    for(int i=0;i<n;i++){
        printf("%d ,",(float*)x[i]);
    }
    printf("]\n");
    float m=mean(&x,n);
    printf("Mean = %f",m/n);



return 0;
}
