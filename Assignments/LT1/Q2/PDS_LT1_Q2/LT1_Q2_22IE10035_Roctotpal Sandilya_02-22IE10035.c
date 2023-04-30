#include<stdio.h>
#include<math.h>

/*
   sec-2
   class test
   Roll no- 22IE10035
   Name- Roctotpal Sandilya
   Que no.- 1
*/

int main(){

int n, digits=0, rev=0,digit=0,flag=0;
printf("Enter the Integer: ");
scanf("%d", &n);

if(n<0){
    n = -n;
    flag=1;
}

for(int i=1; i<n; i*=10) digits++;

for(int i=1; i<=digits; i++){
    digit= n - (n/((int)pow(10,i)))*((int)pow(10,i)) - n%((int)pow(10,i-1));
    digit /= pow(10,i-1);
    rev += digit*pow(10,digits-i); }

if(flag) rev=-rev;


if(n%2 == 1){
    printf("\nMost significant digits to least significant digits: ");
    for(int i=digits-1; i>=0; i--) {
        if(i==0) printf("%d ", n/((int)pow(10,i)));
        else printf("%d, ", n/((int)pow(10,i)));
    }
    printf("\nReverse number= %d", rev);
    if(flag) n=-n;
    printf("\nDifference between reverse and original number = %d", abs(n-rev));
}

else{
    printf("\nLeast significant digits to most significant digits: ");
    for(int i=digits; i>0; i--) {
        if(i==1)  printf("%d ", n-(n/((int)pow(10, i)))*((int)pow(10,i)));
        else printf("%d, ", n-(n/((int)pow(10, i)))*((int)pow(10,i)));
    }
     printf("\nReverse number= %d", rev);
     if(flag) n=-n;
    printf("\nDifference between reverse and original number = %d", abs(n-rev));
}

return 0;
}
