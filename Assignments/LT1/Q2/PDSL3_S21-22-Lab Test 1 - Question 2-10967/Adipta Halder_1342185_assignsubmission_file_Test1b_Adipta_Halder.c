/*
Name: Adipta Halder
Roll Number: 21EC30003
Department: EC
Package: CODEBLOCKS
O.S: Windows 10
Assignment Class: 3

Test : 1b
*/
#include<stdio.h>

int main(){
    double x0,e,temp,x,diff;
    int n,i=1;
    printf("x0= ");
    scanf("%lf",&x0);
    printf("e= ");
    scanf("%lf",&e);
    printf("maxIteration= ");
    scanf("%d",&n);
    printf("Iteration       x0                 x1              Error");
    temp=x0;
    x=temp-(((temp*temp*temp)-25)/(3*temp*temp));
    printf("\n%d           %lf           %lf          %lf",i,temp,x,temp-x);
    i++;

    n--;
     if(temp>x){
        diff=(temp-x);
    }
         else if(temp<x){
          diff=(-temp+x);
    }

    while(diff>=e&&n>0){
        if(diff<e){
        break;
        }
        n--;
        temp=x;
        x=temp-(((temp*temp*temp)-25)/(3*temp*temp));
        printf("\n%d           %lf           %lf          %lf",i,temp,x,temp-x);
        i++;
        if(temp>x){
        diff=(temp-x);
    }
         else if(temp<x){
          diff=(-temp+x);
    }

    }
    printf("\nThe square root is %lf",x);
 return 0;
}
