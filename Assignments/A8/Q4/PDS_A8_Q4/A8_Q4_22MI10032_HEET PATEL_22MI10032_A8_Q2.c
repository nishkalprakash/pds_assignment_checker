/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : 8
Description :  to print number of times first string appears in second string as substring.
*/ 
#include<stdio.h>
int main(){
printf("Enter S1:");
char p[100],s[100];
scanf("%s",p);
printf("Enter S2:");
scanf("%s",s);
int k= 0;
for(int i = 0 ; s[i]!='\0';i++){
int flag = 1;
for(int j = 0 ; p[j]!='\0';j++){
if(s[i+j]!=p[j]){
flag = 0 ;
break;

}

}
if(flag==1){
k++;
}
}

printf("%d\n",k);
}
