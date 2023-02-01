/*
satya prakash nanda
22ag10041
section 14
lab 11
question 5
*/
#include<stdio.h>

int main(){
int n;
printf("enter the value of n:");
scanf("%d", &n);
int m=n*n;
int m1[m];
printf("enter %d number for m1:", m);
for(int i=0; i<m; i++){
scanf("%d", &m1[i]);
}
int m2[m];
printf("enter %d number for m2:", m);
for(int i=0; i<m; i++){
scanf("%d", &m2[i]);
}


return 0;
}
