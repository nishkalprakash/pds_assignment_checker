//Name -Modi Meet
//Roll no-22ME10053
//Lab Ques-05-02
//A NUMBER -SUM OF TWO PRIMES

#include<stdio.h>
#include<math.h>

int isprime(int n){
    int i,flag=1;
    if(n==2) return 1;
    else if(n==1) return 0;
    else{
      for(i=2;i<n;i++){
        if(n%i==0){
            flag=0;
            break;
        }
      }
    }
    if(flag==1) return 1;
    else return 0;

}

int main(){

    int num;
    scanf("%d",&num);
    int i,j;
    for(i=2;i<num;i++){
        if(isprime(i)==1 && isprime(num-i)==1){
            printf("The number can be represented as sum of 2 primes : %d %d \n",i,num-i);
            break;
        }
    }
    if(i==num) printf("-1");


    return 0;
}
