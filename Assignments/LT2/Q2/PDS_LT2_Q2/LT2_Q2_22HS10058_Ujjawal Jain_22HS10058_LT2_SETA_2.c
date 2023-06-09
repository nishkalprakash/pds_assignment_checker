#include<stdio.h>
#include <time.h>
int max(int a[],int n){
    int a1[n],a2[n];
    if(n%2==0){
    for(int i =0;i<(n)/2;i++){
        a1[i] = a[i];
    }
    for(int i =(n)/2;i<n;i++){
        a2[i] = a[i - ((n)/2)];
    }
    int m1 = max(a1,(n)/2);
    int m2 = max(a2,(n)/2);
    if(m1>=m2){
        return m1;
    }
    else{
        return m2;
    }
    }

    else{
        for(int i =0;i<(n+1)/2;i++){
        a1[i] = a[i];
    }
    for(int i =(n+1)/2;i<n;i++){
        a2[i] = a[i - ((n+1)/2)];
    }
    int m1 = max(a1,(n+1)/2);
    int m2 = max(a2,(n-1)/2);
    if(m1>=m2){
        return m1;
    }
    else{
        return m2;
    }


    }




}
int main(){
int n,p,q;
scanf("%d",&n);
scanf("%d %d",&p,&q);
int a[n];
  for(int i =0;i<n;i++){

     a[i] = p+ rand()%(q-p+1);
}
  for(int i =0;i<n;i++){

     printf("%d, ",a[i]);
}
int maxn = max(a,n);
printf(" Max. Value : %d",maxn);








return 0;}
