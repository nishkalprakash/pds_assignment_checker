#include<stdio.h>
//making function to calculate greatest common divisor of a and b
int min(int a,int b){
    if(a<b){
     return a;}
    else{
    return b;}
}  
int gcd(int a,int b){
    for(int i= min(a,b);i>=1;i--){
    if (a%i==0 && b%i==0)
    return i;
}}
void pair(int arr){
    for(int i=0;i<=4;i++){
    for(int j=i+1;j<=4;j++)
    printf("%d%d",arr[i],arr[j]);
}
return;
}
void CoPrime(int a, int b){     //function checking 
    if(a==1 && b==1){
    return;
}
    if(gcd(a,b) == 1){
    printf("a,b are coprime");
    }
    return;
}
int main()
{
    int i,j,arr[5];
    for(i=0;i<=4;i++){
    scanf("%d",&arr[i]);
    } 
    CoPrime(pair(arr));
    }


