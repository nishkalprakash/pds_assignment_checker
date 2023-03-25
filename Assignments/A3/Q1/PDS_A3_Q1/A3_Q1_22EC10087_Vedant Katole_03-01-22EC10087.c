#include<stdio.h>

void main(){
int a,b, c, d, e;
printf("Enter five numbers:\n");
scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
int lar, small, mid;
if(a % 2 != 0 && b % 2 != 0 && c % 2 != 0 && d % 2 == 0 && e % 2 == 0){
    if(a > b){
        lar = a;
        small = b;
    }else{
    lar = b;
    small = a;
    }
    if(c > lar){
        lar = c;
    }
    if(small > c){
        small = c;
    }
    if(lar > a > small){
        mid = a;
    }else if(lar > b > small){
        mid = b;
        }else {
        mid = c;
        }
        printf("%d %d %d", small, mid, lar);
}


else if(a % 2 != 0 && b % 2 != 0 && d % 2 != 0 && c % 2 == 0 && e % 2 == 0){
    if(a > b){
        lar = a;
        small = b;
    }else{
    lar = b;
    small = a;
    }
    if(d > lar){
        lar = d;
    }
    if(small > d){
        small = d;
    }
    if(lar > a > small){
        mid = a;
    }else if(lar > b > small){
        mid = b;
        }else {
        mid = d;
        }
        printf("%d %d %d", small, mid, lar);
}


else if(a % 2 != 0 && b % 2 != 0 && e % 2 != 0 && d % 2 == 0 && c % 2 == 0){
    if(a > b){
        lar = a;
        small = b;
    }else{
    lar = b;
    small = a;
    }
    if(e > lar){
        lar = e;
    }
    if(small > e){
        small = e;
    }
    if(lar > a > small){
        mid = a;
    }else if(lar > b > small){
        mid = b;
        }else {
        mid = e;
        }
        printf("%d %d %d", small, mid, lar);
}


else if(a % 2 != 0 && d % 2 != 0 && c % 2 != 0 && b % 2 == 0 && e % 2 == 0){
    if(a > d){
        lar = a;
        small = d;
    }else{
    lar = d;
    small = a;
    }
    if(c > lar){
        lar = c;
    }
    if(small > c){
        small = c;
    }
    if(lar > a > small){
        mid = a;
    }else if(lar > d > small){
        mid = d;
        }else {
        mid = c;
        }
        printf("%d %d %d", small, mid, lar);
}


else if(a % 2 != 0 && e % 2 != 0 && c % 2 != 0 && d % 2 == 0 && b % 2 == 0){
    if(a > e){
        lar = a;
        small = e;
    }else{
    lar = e;
    small = a;
    }
    if(c > lar){
        lar = c;
    }
    if(small > c){
        small = c;
    }
    if(lar > a > small){
        mid = a;
    }else if(lar > e > small){
        mid = e;
        }else {
        mid = c;
        }
        printf("%d %d %d", small, mid, lar);
}


else if(a % 2 != 0 && e % 2 != 0 && d % 2 != 0 && c % 2 == 0 && b % 2 == 0){
    if(a > b){
        lar = a;
        small = e;
    }else{
    lar = e;
    small = a;
    }
    if(d > lar){
        lar = d;
    }
    if(small > d){
        small = d;
    }
    if(lar > a > small){
        mid = a;
    }else if(lar > e > small){
        mid = e;
        }else {
        mid = d;
        }
        printf("%d %d %d", small, mid, lar);
}


else if(b % 2 != 0 && d % 2 != 0 && c % 2 != 0 && a % 2 == 0 && e % 2 == 0){
    if(b > d){
        lar = b;
        small = d;
    }else{
    lar = d;
    small = b;
    }
    if(c > lar){
        lar = c;
    }
    if(small > c){
        small = c;
    }
    if(lar > b > small){
        mid = b;
    }else if(lar > d > small){
        mid = d;
        }else {
        mid = c;
        }
        printf("%d %d %d", small, mid, lar);
}


else if(b % 2 != 0 && e % 2 != 0 && c % 2 != 0 && a % 2 == 0 && d % 2 == 0){
    i
    if(c > lar){
        lar = c;
    }
    if(small > c){
        small = c;
    }
    if(lar > b > small){
        mid = b;
    }else if(lar > e > small){
        mid = e;
        }else {
        mid = c;
        }
        printf("%d %d %d", small, mid, lar);
}


else if(e % 2 != 0 && d % 2 != 0 && c % 2 != 0 && a % 2 == 0 && b % 2 == 0){
    if(e > d){
        lar = e;
        small = d;
    }else{
    lar = d;
    small = e;
    }
    if(c > lar){
        lar = c;
    }
    if(small > c){
        small = c;
    }
    if(lar > e > small){
        mid = e;
    }else if(lar > d > small){
        mid = d;
        }else {
        mid = c;
        }
        printf("%d %d %d", small, mid, lar);
}else if(a % 2 == 0 && b % 2 == 0 && c % 2 == 0 && d % 2 != 0 &&  e % 2 != 0){
    if(a > b){
        lar = a;
    }else{
    lar = b;
    }
    if(c > lar){
        lar = c;
    }
    if(d > lar){
        lar = d;
    }
    if(e > lar){
        lar = e;
    }
    printf("Largest number:\n%d", lar);
}


else if(a % 2 == 0 && b % 2 == 0 && d % 2 == 0 && c % 2 != 0 &&  e % 2 != 0){
    if(a > b){
        lar = a;
    }else{
    lar = b;
    }
    if(c > lar){
        lar = c;
    }
    if(d > lar){
        lar = d;
    }
    if(e > lar){
        lar = e;
    }
    printf("Largest number:\n%d", lar);
}


else if(a % 2 == 0 && b % 2 == 0 && e % 2 == 0 && d % 2 != 0 &&  b % 2 != 0){
    if(a > b){
        lar = a;
    }else{
    lar = b;
    }
    if(c > lar){
        lar = c;
    }
    if(d > lar){
        lar = d;
    }
    if(e > lar){
        lar = e;
    }
    printf("Largest number:\n%d", lar);
}


else if(a % 2 == 0 && d % 2 == 0 && c % 2 == 0 && b % 2 != 0 &&  e % 2 != 0){
    if(a > b){
        lar = a;
    }else{
    lar = b;
    }
    if(c > lar){
        lar = c;
    }
    if(d > lar){
        lar = d;
    }
    if(e > lar){
        lar = e;
    }
    printf("Largest number:\n%d", lar);
}


else if(a % 2 == 0 && e % 2 == 0 && c % 2 == 0 && d % 2 != 0 &&  b % 2 != 0){
    if(a > b){
        lar = a;
    }else{
    lar = b;
    }
    if(c > lar){
        lar = c;
    }
    if(d > lar){
        lar = d;
    }
    if(e > lar){
        lar = e;
    }
    printf("Largest number:\n%d", lar);
}


else if(b % 2 == 0 && c % 2 == 0 && d % 2 == 0 && a % 2 != 0 &&  e % 2 != 0){
    if(a > b){
        lar = a;
    }else{
    lar = b;
    }
    if(c > lar){
        lar = c;
    }
    if(d > lar){
        lar = d;
    }
    if(e > lar){
        lar = e;
    }
    printf("Largest number:\n%d", lar);
}


else if(b % 2 == 0 && c % 2 == 0 && e % 2 == 0 && a % 2 != 0 &&  d % 2 != 0){
    if(a > b){
        lar = a;
    }else{
    lar = b;
    }
    if(c > lar){
        lar = c;
    }
    if(d > lar){
        lar = d;
    }
    if(e > lar){
        lar = e;
    }
    printf("Largest number:\n%d", lar);
}


else if(c % 2 == 0 && d % 2 == 0 && e % 2 == 0 && a % 2 != 0 &&  b % 2 != 0){
    if(a > b){
        lar = a;
    }else{
    lar = b;
    }
    if(c > lar){
        lar = c;
    }
    if(d > lar){
        lar = d;
    }
    if(e > lar){
        lar = e;
    }
    printf("Largest number:\n%d", lar);
}


}f(b > e){
        lar = b;
        small = e;
    }else{
    lar = e;
    small = b;
    }
    if(c > lar){
        lar = c;
    }
    if(small > c){
        small = c;
    }
    if(lar > b > small){
        mid = b;
    }else if(lar > e > small){
        mid = e;
        }else {
        mid = c;
        }
        printf("%d %d %d", small, mid, lar);
}


else if(e % 2 != 0 && d % 2 != 0 && c % 2 != 0 && a % 2 == 0 && b % 2 == 0){
    if(e > d){
        lar = e;
        small = d;
    }else{
    lar = d;
    small = e;
    }
    if(c > lar){
        lar = c;
    }
    if(small > c){
        small = c;
    }
    if(lar > e > small){
        mid = e;
    }else if(lar > d > small){
        mid = d;
        }else {
        mid = c;
        }
        printf("%d %d %d", small, mid, lar);
}else if(a % 2 == 0 && b % 2 == 0 && c % 2 == 0 && d % 2 != 0 &&  e % 2 != 0){
    if(a > b){
        lar = a;
    }else{
    lar = b;
    }
    if(c > lar){
        lar = c;
    }
    if(d > lar){
        lar = d;
    }
    if(e > lar){
        lar = e;
    }
    printf("Largest number:\n%d", lar);
}


else if(a % 2 == 0 && b % 2 == 0 && d % 2 == 0 && c % 2 != 0 &&  e % 2 != 0){
    if(a > b){
        lar = a;
    }else{
    lar = b;
    }
    if(c > lar){
        lar = c;
    }
    if(d > lar){
        lar = d;
    }
    if(e > lar){
        lar = e;
    }
    printf("Largest number:\n%d", lar);
}


else if(a % 2 == 0 && b % 2 == 0 && e % 2 == 0 && d % 2 != 0 &&  b % 2 != 0){
    if(a > b){
        lar = a;
    }else{
    lar = b;
    }
    if(c > lar){
        lar = c;
    }
    if(d > lar){
        lar = d;
    }
    if(e > lar){
        lar = e;
    }
    printf("Largest number:\n%d", lar);
}


else if(a % 2 == 0 && d % 2 == 0 && c % 2 == 0 && b % 2 != 0 &&  e % 2 != 0){
    if(a > b){
        lar = a;
    }else{
    lar = b;
    }
    if(c > lar){
        lar = c;
    }
    if(d > lar){
        lar = d;
    }
    if(e > lar){
        lar = e;
    }
    printf("Largest number:\n%d", lar);
}


else if(a % 2 == 0 && e % 2 == 0 && c % 2 == 0 && d % 2 != 0 &&  b % 2 != 0){
    if(a > b){
        lar = a;
    }else{
    lar = b;
    }
    if(c > lar){
        lar = c;
    }
    if(d > lar){
        lar = d;
    }
    if(e > lar){
        lar = e;
    }
    printf("Largest number:\n%d", lar);
}


else if(b % 2 == 0 && c % 2 == 0 && d % 2 == 0 && a % 2 != 0 &&  e % 2 != 0){
    if(a > b){
        lar = a;
    }else{
    lar = b;
    }
    if(c > lar){
        lar = c;
    }
    if(d > lar){
        lar = d;
    }
    if(e > lar){
        lar = e;
    }
    printf("Largest number:\n%d", lar);
}


else if(b % 2 == 0 && c % 2 == 0 && e % 2 == 0 && a % 2 != 0 &&  d % 2 != 0){
    if(a > b){
        lar = a;
    }else{
    lar = b;
    }
    if(c > lar){
        lar = c;
    }
    if(d > lar){
        lar = d;
    }
    if(e > lar){
        lar = e;
    }
    printf("Largest number:\n%d", lar);
}


else if(c % 2 == 0 && d % 2 == 0 && e % 2 == 0 && a % 2 != 0 &&  b % 2 != 0){
    if(a > b){
        lar = a;
    }else{
    lar = b;
    }
    if(c > lar){
        lar = c;
    }
    if(d > lar){
        lar = d;
    }
    if(e > lar){
        lar = e;
    }
    printf("Largest number:\n%d", lar);
}


}
