/*
SURABHI DHAVALE
22ME10026
ASSIGNMENT7
SEC14
*/

#include<stdio.h>
int gcd(int m,int n)
 {
if (m==n){
return m;
}
if(m==0){
return n;
}
if(n==0){
return m;
}

if(m%n!=0){
return gcd(n,m%n);
 }
}
void co-prime(int a,int b)//print co-prime in range a,b
{
if (gcd(a,b)==1);
printf("%d and %d are coprime\n", a,b);

}



int main(){
int k;
printf("enter the value of k");
scanf("%d",&k);
//pairing the numbers
int arr[k];//reading array
printf("enter the first five elements:");
for(int i=0;i<k;i++)
scanf("%d",&arr[i]);
for (int i=1;i<=k;i++){
for (int j=i+1;j<=k;j++){
printf("%d%d",arr[i],arr[j]);
co-prime(arr[i],arr[j]);//calling co-prime function

   }
  }



return 0;
}



















