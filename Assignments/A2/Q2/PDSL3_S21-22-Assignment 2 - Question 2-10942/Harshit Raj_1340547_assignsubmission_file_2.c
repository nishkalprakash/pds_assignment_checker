/*
Name- Harshit Raj
Dept- Chemical
Roll- 21CH30015
Package- Codeblocks
OS- Win 10
*/
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main() {

srand(time(NULL));
int p,n,k,i;
int d=0;
long D=0;
double De=pow(D/100000,0.5);


printf("input number of steps: ");
scanf("%d", &n);

for(int k=1;k<=100000;k++){
        for(i=1;i<=n;i++){
    p = rand() & 1 ? -1 : 1;
    d=d+p;
        }
        D=D+(long long)pow(d,2);
}
printf("%d \n", d);
printf("%d \n", D);
printf("%lf \n", De);










return 0;
}

