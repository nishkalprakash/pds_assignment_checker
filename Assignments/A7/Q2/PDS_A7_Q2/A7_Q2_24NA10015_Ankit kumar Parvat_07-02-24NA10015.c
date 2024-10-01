#include<stdio.h>
int gcd(int a,int b){// computing the gcd
  int temp;
  if(a>b){
     temp=a;
     a=b;
     b=temp;
  }
  while((b%a)!=0){
     temp=b%a;
     b=a;
     a=temp; 
  }
  return  a;
}
void coprime(int a,int b){  // checking the condition 
    if (gcd(a,b)==1){
       printf("\n %d and %d are coprime",a,b);}
}
    
    
int main(){
   int num=0;//  variable for store the number of pairs of coprime 
   int arr[5];
   for(int i=0;i<5;i++){
      scanf("%d",&arr[i]);}
    for (int i=0;i<4;i++){
       for(int j=i+1;j<5;j++){
         if(gcd(arr[i],arr[j])==1) coprime(arr[i],arr[j]); num+=1;
               
       }}
   if(num==0) printf(" No co-prime found");    
   return 0;      
       
        
   
}
