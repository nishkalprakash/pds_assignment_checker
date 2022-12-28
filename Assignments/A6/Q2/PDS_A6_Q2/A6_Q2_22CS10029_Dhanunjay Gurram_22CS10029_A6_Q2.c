/*Section 14
  Name:Gurram Dhanunjay
  RollNo:22CS10029
  Assignment:6
  Description:Finding terms according to given condition*/
#include <stdio.h>
int main(){
    int 
    return 0;
}
int gcd(int m,int n){
    int t;
    if (m<n) {
       t=m; m=n;n=m;}
    if (n==1) return 1;
    if (m%n==0) return n;
    else return gcd(n,m%n);
}
