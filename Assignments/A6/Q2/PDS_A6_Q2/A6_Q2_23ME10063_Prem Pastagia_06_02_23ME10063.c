// Prem Pastagia
// 23ME10063
#include <stdio.h>
#include <stdlib.h>

int sum(int ar[],int size)
{

  int b=size-1;
  int add;
  if(b==-1){ return 0;}
  else{ add=ar[b]+sum(ar,b);}
  
  return add;
 
}

int max(int ar[],int size)
{
  int max1,maxvalue,k=size-1;
  if(k==-1){return 0;}
  
  
  
  
}

int reverse(int ar[],int fp,int lp)
{
  int temp,l=fp,m=lp;
  if(l>=m){return 0;}
  temp=ar[m];
  ar[m]=ar[l];
  ar[l]=temp;
 
   reverse(ar,l+1,m-1);
}
int main()
{
  int arr[30];
  int i,x;

  //filling of array
  printf("The random array is:\n");
  for(i=0;i<30;i++){
    arr[i]=(rand()%11)+20; printf("%d ",arr[i]);  }
  printf("\n");
  //sum of the function
  x=sum(arr,30);
  printf("The sum of number is %d.\n",x);

  //max of function




  // reverse 
  printf("The reverse array is:\n");
  reverse(arr,0,29);
for(i=0;i<30;i++){
     printf("%d ",arr[i]);}
  printf("\n");  

  return 0;
}
