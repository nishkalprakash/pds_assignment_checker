/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : 5
 Description : Program to find the whether the given numbers are coprime or not
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int a,b;
int flag=1;
int gcd(int a,int b){
     if (a>b){
          int temp;
          temp=a;
          a=b;
          b=temp;
     }
     int r=1;
     while (r!=0){
           r=b%a;
           b=a;
           a=r;
     }
     return b;
     
}
 
void coprime(int a,int b){
      if (gcd(a,b)==1){
         printf("%d and %d are Co-Prime \n",a,b);
         flag=0;
     
      }
}

void pair(int m[5]){
       for(int i=0;i<5;i++){
           for(int j=4;j>i;j--){

               a=m[i];
               b=m[j];
               coprime(a,b);
           }
       }
}

int main(){
        int m[5];
        for (int i=0;i<5;i++){
             scanf("%d",&m[i]);
        }
        pair(m);
        if (flag==1) {
            printf("No Co-Prime found \n");
        }
 
        return 0;
}
          

