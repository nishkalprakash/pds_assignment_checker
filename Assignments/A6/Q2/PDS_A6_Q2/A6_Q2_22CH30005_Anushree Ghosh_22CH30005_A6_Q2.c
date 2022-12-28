/*
ANUSHREE GHOSH
22CH30005
ASSIGNMENT NO 7
SEC 14
*/

#include<stdio.h>
int gcd(int m, int n) // returns gcd of m and n
{
 if(m==n){
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
void coprime(int a, int b) // prints all co-prime numbers in range a, b
{
    if (gcd(a, b) == 1)
        printf("%d and %d are Co-Prime\n", a, b);
}



int main(){
  int k;
  printf("enter the value of k");
  scanf("%d",&k);
  int arr[k];
  printf("enter the five elements of the array");
  for(int i=0;i<k;i++)
  scanf("%d",&arr[i]);
  for(int i=0;i<k;i++){
    for(int j=i+1;j<k;j++){
     printf("%d%d\n",arr[i],arr[j]);
      coprime(arr[i],arr[j]);
   }
 }

 
 return 0;
}
