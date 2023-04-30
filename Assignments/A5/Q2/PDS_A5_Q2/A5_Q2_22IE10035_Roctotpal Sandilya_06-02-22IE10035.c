#include<stdio.h>
/*
   sec-2
   Assignment no.- 6
   Roll no- 22IE10035
   Name- Roctotpal Sandilya
   Que no.- 2
*/

int primeCheck(int i){
    for(int j=2; j*j<=i; j++){
        if(i%j==0) return 0;
    }
    return 1;
}

int main(){
    int n;
    scanf("%d", &n);
    if(n%2==1 || n<4) printf("-1");
    else{
        for(int i=2; i<n/2+1; i++){
            if(primeCheck(i) & primeCheck(n-i)){
                printf("%d , %d", i, n-i);
                break;
            }
        }
    }

 return 0;
}
