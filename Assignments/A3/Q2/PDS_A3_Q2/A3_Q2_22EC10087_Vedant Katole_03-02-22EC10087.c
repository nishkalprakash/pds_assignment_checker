#include<stdio.h>

void main(){
int a, b;
scanf("%d%d", &a, &b);
if(-999 > a || a > 999 || -999 > b || b > 999){
    printf("wrong input\n");
}

int dig1, dig2, dig3;

if(a > 0 && b > 0 || a < 0 && b < 0){ // if a and b are not of the same sign hey are not a perfect pair
    if(a < 0){
    a = -1 * a;
}
if(b < 0){
    b = -1 * b;
}
dig1 = a % 10;
dig2 = (a % 100 - dig1)/10;
dig3 = (a - dig2)/100;
if(dig3 == 0 && dig2 == 0){ // for a single digit integer
    if(b==a){
        printf("Perfect pair");
    }else{
    printf("Not a Perfect Pair");
    }
    }
else if(dig3 == 0){ // for a 2 digit number
    if(b == dig1 * 10 + dig2*1){
        printf("Perfect pair");
    }else{
    printf("Not a Perfect Pair");
    }
}
else if(dig3 != 0){ // for a 3 digit number
    if(b == dig1*100 + dig2*10 + dig3){
          printf("Perfect pair");
    }else{
    printf("Not a Perfect Pair");
    }
    }
}
else{
    printf("Not a perfect pair");
}
}
