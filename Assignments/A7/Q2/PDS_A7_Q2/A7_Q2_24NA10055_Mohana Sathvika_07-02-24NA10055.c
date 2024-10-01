#include <stdio.h>
int gcd(int a, int b){ //computing gcd of a and b
 int temp,g;
  while (b!=0){
   temp=b;
   b=a%b;
   a=temp; }
    g=a; 
 return g; }
 
 void Coprime(int a, int b){
 if(gcd(a,b)==1){
 printf("%d and %d are coprimes\n", a,b);
 }
}

void pair(int arr[]){ //making elements of array into pairs

  for(int i=0;i<4;i++){
   for(int j=i+1;j<5;j++){
       Coprime(arr[i],arr[j]);
  }
  }
  }    
int main(){
int arr[5];

for(int i=0;i<5;i++){ //taking inputs and adding them to array

   printf("enter an integer:\n");
   scanf("%d", &arr[i]);
  }

pair(arr); return 0;
}


        


 
