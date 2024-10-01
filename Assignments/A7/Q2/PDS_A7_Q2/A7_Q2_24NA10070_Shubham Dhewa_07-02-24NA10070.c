#include<stdio.h>

int gcd(int a, int b){
    int temp;
    if(a>b){
    while(a%b!=0)
    temp=a/b;
    a=b;
    b=temp;
    }
    else{
    while(b%a!=0)
    temp=b/a;
    b=a;
    a=temp;
    }
    return 0;
}    
    
void CoPrime(int a, int b){
     if(gcd(a,b)==1)
     printf("are co-prime");
     else
     printf("No co-prime found");
     return;
}

int main(){
    int A[5];
    for(int i=0; i<5; i++)
    scanf("%d", &A[i]);
    return 0;
}
