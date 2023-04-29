//sec 2
//Assignment no-6
//Roll no-22IE10015
//Name-Arunima Patra
//Question no-2
#include<stdio.h>
int primecheck(int i){

if(i==2){
    return 1;
}
for (int k=2; k<i; k++){
    if(i%k==0){

        return 0;

    }

   }

     return 1;
   }




int main(){
    int n; int x=-1;
    printf("Enter the number:");
    scanf("%d", &n);
    if(primecheck(n)==1){
        return -1;
    }
    else{
    if(n%2==0){
    for(int p=2; p<=n; p++){


                if(primecheck(p)==1 && primecheck(n-p)==1){
                    printf("%d %d", p,n-p);
                    return 0;
                }



    }
    }

    else{
        return -1;
    }
    }
    //else{
       //printf("%d", x);
   // }



}
