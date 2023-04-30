/*
SECTION:2
ROLL NO:22AG10009
NAME:ASHANK KUMAR KUSHWAHA
ASSIGNMENT NO:5
DESCRIPTION:goldbach's conjecture
*/
#include <stdio.h>
int primeCheck(int);
int primeCheck(int i){
    int k,j;
    for (j=2;j<i;j++){
        if ((i%j)==0) return 0;
    }
    return -1;
}
int main(){
    int n,j,f=0;
    scanf("%d",&n);
    if (n==1) printf("1 is neither prime nor composite");
    if (((n%2)!=0)||(n<4)){
        printf("-1");
        f=1;
     }
    for (j=2;j<n;j++){
        if (f==1) break;
        if ((primeCheck(j)==-1)&&(primeCheck(n-j)==-1)){
            printf("%d, %d",j,n-j);
            break;

        }
    }
    return 0;
}
