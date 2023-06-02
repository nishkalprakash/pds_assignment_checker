#include <stdio.h>

/*
   sec-2
   Assignment no.- 9
   Roll no- 22IE10035
   Name- Roctotpal Sandilya
   Que no.- 1
*/

int main(){
int n, m=0, k=1;
scanf("%d", &n);
printf("Value of n: %d\n", n);
if(n<0) printf("Please give positive number");
else if(n==m) printf("0 is a fibonacci number");
else if(n==k) printf("1 is a fibonacci number");
else{
    while(n>k){
        k+=m;
        m= k-m;

    }
    if(n==k) printf("%d is a fibonacci number", n);
    else{
        if(k-n>=n-m) printf("Nearest fibonacci number: %d", m);
        else printf("Nearest fibonacci number: %d", k);
    }
}
return 0;
}
