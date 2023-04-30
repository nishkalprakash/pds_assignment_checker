/*
*Section 2
*Name: Sagarneel Ghoshal
*Roll No.:22PH10040
*Assignment-5
*Description- Goldbach's conjecture
*/


#include<stdio.h>

int primeCheck(int n){
    int cc=0,i;
    for(i=2;i<n;i++){
        if(n%i==0) cc++;
    }
    if(cc==0){
        return 1;
    }
    else return 0;

}


void printsum(int n){

    if(n>=4 && n%2==0){
        for(int i=2;i<n;i++){
        int a= primeCheck(i);
        int b=primeCheck(n-i);
        if(a==1 && b==1){
            printf("%d  %d",i,n-i);
            break;
        }
    }

    }
    else printf("-1");


}

int main(){
    int n;
    printf("Enter your no.: ");
    scanf("%d",&n);
    printf("n=%d\n",n);
    printsum(n);
    return 0;



}


