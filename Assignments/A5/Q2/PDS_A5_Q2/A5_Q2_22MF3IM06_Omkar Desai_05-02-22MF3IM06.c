/*
sec2
name- Omkar Dilip Desai
Roll no - 22MF3Im06
q. no-2
description-  printing the goldbach conjecature */

#include<stdio.h>
#include<math.h>


int primecheck(int n);
int goldbach(int n);
int main(){
int n;

     printf("enter the number\n");
     scanf("%d",&n);

     primecheck(n);
    // printf("The return value is %d",primecheck(n));
     goldbach(n);










return 0;
}

int primecheck(int n){
 int i;
    for( i=2;i<n;i++){



        if(n%i==0){

            return 0;
        }
    }
        //printf("%d\n",i);

        if(i==n){

           // printf("The number is prime\n");
            return 1;
        }

    return 0;
}


int goldbach(int n){
int i;
int p,q;
if((n%2!=0) || (n==2)){
    printf("-1");
    return 0;
}


for(int i=2;i<=(n-2);i++){
    primecheck(i);
    p=primecheck(i);

    primecheck(n-i);
    q=primecheck(n-i);

    if(p==1 && q==1){
        printf(" %d %d " ,i,n-i);

     break;


}

}
return 0;
}


