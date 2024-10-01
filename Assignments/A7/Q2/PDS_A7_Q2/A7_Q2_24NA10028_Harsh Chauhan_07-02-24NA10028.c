#include<stdio.h>


int gcd(int a,int b){
   int temp;
   
   if( a > b){
    temp = a;
    a =b;
    b = temp;
   }
   while(b%a !=0){
   
   temp = b%a;
   b =a;
   a =temp;
   
   }
   return a;
   }
   
   void pair(int a[5]){
   for(int i = 0;i<5-i-1;i++){
   for(int j = i + 1;j < 5;j++){
   if(gcd(a[i],a[j]) == 1){
   printf("%d and %d are Co-Prime\n",a[i],a[j]); 
   }
   else{
       printf("No Co-Prime found\n");
   }
   
   }
   }
 
   }
   
   
int main(){
int a[5];

for(int x =0; x<5;x++){
scanf("%d ",&a[x]);
}

pair(a);




}
