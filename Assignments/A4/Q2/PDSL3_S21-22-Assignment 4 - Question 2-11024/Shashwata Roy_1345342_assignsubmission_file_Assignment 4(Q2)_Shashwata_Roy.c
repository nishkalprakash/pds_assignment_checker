/*
Name: Shashwata Roy
Roll: 21MA10055
Dept: Maths and Computing
Package: Codeblocks
Assignment class: 4
*/
#include<stdio.h>
#include<math.h>

int t=0;   //t is the no of trips
int r1;

long long int fact(int n){
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}

int ncr(int n,int r){
    if(n>=r&&r>=0)
        return fact(n)/(fact(r)*fact(n-r));
    else
        return 0;
}

int myHostelChangingTrips(int k,int i,int n,int m){
    if(m*n<k||i==n)
        return 0;
    else if(m*n==k)
        return 1;
    else{
        if(ncr(n,i-1)==0)
            return 0;
        else{
            t*=(-1);
            r1 = k-(i-1)*(m+1);
            t+=ncr(n,i-1)*ncr(n+r1-1,n-1);
            return t+myHostelChangingTrips(k,i+1,n,m);
        }
    }
}

int main(){
    int n,m,k;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter m: ");
    scanf("%d",&m);
    printf("Enter k:");
    scanf("%d",&k);
    printf("Trips = %d",myHostelChangingTrips(k,1,n,m));
    return 0;
}
