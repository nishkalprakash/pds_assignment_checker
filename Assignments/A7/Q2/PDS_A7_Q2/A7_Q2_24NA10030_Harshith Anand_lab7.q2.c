#include<stdio.h>
int gcd(int a,int b);
void pair(int a[]);
void CoPrime(int a,int b);
int main()
{ 
       int A,B,temp;
       int a[5];
       scanf("%d %d",&A,&B);
       if (A>B){
       temp =A; A=B; B=temp;}
       while ((B%A) !=0) {
       temp = B%A;
       B = A;
       A = temp;
       }
       printf("%d and %d are coprime");
       
       return 0;
       }
       void CoPrime(int a,int b)
       {
          
