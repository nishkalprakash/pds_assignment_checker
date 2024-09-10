//Name-Rupam Haldar
//Roll No.-24NA10060


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main(){
int x;
float y;
int N;
//taking size of the filter array

  printf("Enter The Size Of Fillter array:");
  scanf("%d",&N);

float Filter[N];
int A;
int B;
int Bin_A[A];
int Bin_B[B];

//taking input of x

for(int j=0;j<N;j++){
  printf("Enter the value of x in the range [1 to 100] :");

  scanf("%d",&x);
  for(int k=1;k<=x;k++){
  y=((pow(-1,k+1)*k*k)/(2*k+1))+cos(x/2);//computation of y
     }
  for(int i =0;i<N;i++){
  Filter[i]=y;//filling the values in Filter array
      }
 }


int t;
  printf("\nThe number of elements in the array Filter:%f",Filter[t]);//printing the values in the array Filter

for( t =0;t<N;t++){
  printf("\n%f",Filter[t]);
}

//storing x into Bin_A and Bin_B
for(int s =0;s<N;s++){
  if(y>Filter[s]){
   Bin_A[A]=x;}
   
  else if(y<Filter[s]){
   Bin_B[B]=y;}
   }

//printing the values in Bin_A and Bin_B
  printf("\nThe Values in array Bin_A is:");
for(int r =0;r<A;r++){
  printf("%d",Bin_A[r]);
}

  printf("\nThe Values in array Bin_B is:");
for(int e=0;e<B;e++){
  printf("%d",Bin_B[e]);
}

return 0;
}
