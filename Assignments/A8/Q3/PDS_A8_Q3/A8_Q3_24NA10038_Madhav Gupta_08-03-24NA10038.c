//creator:Madhav Gupta
//roll no:24NA10038

#include<stdio.h>
#include<math.h>
int digits(int n){
int k;
  if(n==0){
    k=0;
    }
  else  {
    k=digits((n/10));
    k++;
  }
  return k;
  } 
void sort(int x[], int size){//to sort the array
  int t, i, j, k, n;
  for (i=0; i<size; i++){
   for (j=0; j< size-i-1; j++){
     if(x[j]/(int)pow(10,digits(x[j])-1)<x[j+1]/(int)pow(10,digits(x[j+1])-1)){
     t=x[j];
     x[j]=x[j+1];
     x[j+1]=t;
     }
   for(n=0; x[j]/(int)pow(10,digits(x[j])-1-n)==x[j+1]/(int)pow(10,digits(x[j+1])-1) ; )
   n++;
      if(x[j]/(int)pow(10,digits(x[j])-1-n)<x[j+1]/(int)pow(10,digits(x[j+1])-1-n)){
     t=x[j];
     x[j]=x[j+1];
     x[j+1]=t;
     }
     }
}
}
int main(){
  int size, A[100], k;
  scanf("%d", &size);
  for(k=0; k<size; k++){
    scanf("%d", &A[k]);
    }
    sort(A, size);
    printf("Output Array:");
    for(k=0; k < size+1; k++){
    printf("%d ", A[k]);}
    for(k=0; k < size+1; k++){
    printf("%d", A[k]);}
    return 0;}
  
