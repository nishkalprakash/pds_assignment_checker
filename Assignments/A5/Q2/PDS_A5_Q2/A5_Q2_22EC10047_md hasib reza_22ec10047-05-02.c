#include<stdio.h>
#include<math.h>

int primecheck(int n){
    float k=sqrt(n);
    int i;
    for(i=1;i<k;i++){
        if(n%i!=0){
           return;
        }
        if(n%2==0&&n>=4){
        int a,b;
        a=2;b=n-2;
        while(a!=primecheck(a)&&b!=primecheck(b)){
        a=a+1;
        b=b-1;
}
        return (a,b);
}
}
}

int main(){
int p,a,b;
printf("ENETR THE NUMBER :");
scanf("%d",&p);
primecheck(p);
printf("the number p is sum of two prime number : %d and &d",a,b);

}

