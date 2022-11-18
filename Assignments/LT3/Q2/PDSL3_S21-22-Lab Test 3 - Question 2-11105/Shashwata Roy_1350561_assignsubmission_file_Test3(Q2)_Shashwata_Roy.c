/*
Name: Shashwata Roy
Roll: 21MA10055
Dept: Maths and Computing
Package: Codeblocks
Test No: 3
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct polynomial{
    int n;
    int coeff;
    int expo;
};

int main(){
    struct polynomial a[100],b[100];
    char c[100],d[100];
    int n1,n2,k,i;
    printf("Enter the first polynomial degree: ");
    scanf("%d",&n1);
    a.n=n1;
    printf("Enter the first polynomial as string: ");
    scanf("%s",c);
    printf("Enter the second polynomial degree: ");
    scanf("%d",&n2);
    b.n=n2;
    printf("Enter the second polynomial as string: ");
    scanf("%s",d);
    char *p1,*p2;
    if(c[0]=='x')
        a[0].coeff[0]=1;
    else if(c[0]!='-')
        a[0].coeff[0]=(int)c[i]-48;
    if(c[0]=='-')
        a[0].coeff*=(-1);
    for(i=0,c[i]!='\0';i++){
        k=1;
        if(c[i]=='+'){
            a[k].coeff=(int)c[i]-48;
        }
    }
    return 0;
}
