/*
Name- Sumedh Deshkar
Roll No. - 21MI33023
Department - Mining Engineering
Section - 3
*/

#include<stdio.h>
int main(){
int n;
scanf("%d",&n);

int a=n/100;
int b=n%100;
int c=b/10;
int d=b%10;
int e= d*100+c*10+a;
printf("Reverse number = %d",e);

return 0;












}
