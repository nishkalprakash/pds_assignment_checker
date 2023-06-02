#include<stdio.h>
int fab(x){
    int a=0,b=1,c;
    int arr[x];
    int brr[x];
    arr[0]=0;
    arr[1]=1;

    for(int i=2;i<x;i++){
        c=a+b;
        arr[i]=c;
        a=b;
        b=c;
    }
    int m=c,n=c;
    for (int i=0;i<x;i++){
            brr[i]=x-arr[i];

    }
    for (int i=0;i<x;i++){
            if(brr[i]<0){
               if(n>(-brr[i])){
                  n=brr[i];

               }
            }
            if(brr[i]>0){
                if(n>brr[i]){
                  m=brr[i];

               }
            }
            if(brr[i]==0){
                    return x;

            }

    }
    if(m==n) return x-m;
    else if (m<n) return x-m;
    else return x+n;

}
int main(){
    int n;
    scanf("%d",&n);
    if(n<0) printf("please give a positive number");
    else{
            printf("Value of n: %d\n",n);
            printf("Nearest Fibonacci number %d",fab(n));
    }


return 0;
}
