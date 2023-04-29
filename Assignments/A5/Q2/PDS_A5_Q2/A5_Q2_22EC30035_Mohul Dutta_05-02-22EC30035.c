/*
SECTION 2
ROLL NO 22EC30035
NAME  MOHUL DUTTA
ASSIGNMENT No. 5

Description - problem in goldbach conjecture
*/
#include<stdio.h>
int primeCheck(int n){
int k=0;
for(int i=1;i<=n;i++){
    if(n%i==0)
        k++;
}
return k;
}
int main(){
int n;
scanf("%d",&n);
if(n==2 || n%2!=0)
    printf("-1");
else
    for(int i=1;i<=n;i++){
    if((primeCheck(i)==2) && (primeCheck(n-i)==2)){
        printf("%d , %d",i,n-i);
        break;
    }

}

}
