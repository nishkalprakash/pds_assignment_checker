/*Name- Vedant Katole
Roll no - 22EC10087
section-2
Description - problem 1
*/

#include<stdio.h>

void main(){
int num, rev = 0, t = 1, temp, n, h, t1, diff, flag = 0;

printf("Enter the Integer:");
scanf("%d", &num);

if(num<0){
    num = num * -1;
    flag = 1;
}

while(t<=num){
    t = t * 10;
}


n = num;
t1 = t;

if(num % 2 == 0){
    printf("Least significant digits to most significant digits:\n");
    printf("%d, ", num);
    t = t/10;
    while(t > 1){
            printf("%d, ", num % t);
            num = num % t;
            t = t/10;
    }
}
else{
    printf("Most significant digits to least significant digits:\n");
    t = t/10;
    while(t > 0){
        temp = (num - (num % t))/t;
        printf("%d, ", temp);
        t = t/10;
    }
}

num = n;
t1 = t1/10;

while(n > 0){
      h = (n % 10) * t1;
      rev = rev + h;
      n = n/10;
      t1 = t1/10;
}

if(flag == 1){
    printf("\n\nReverse number = %d", rev * -1);
}
else{
    printf("\n\nReverse number = %d", rev);
}

diff = rev - num;

if(diff<0)
    diff = diff * -1;

printf("\nDifference between Reverse and original number = %d", diff);
}

