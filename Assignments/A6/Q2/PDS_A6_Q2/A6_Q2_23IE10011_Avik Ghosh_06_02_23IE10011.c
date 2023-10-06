//Roll no.: 23IE10011
//Name: Avik Ghosh
#include <stdio.h>
#include <stdlib.h>
int s=0,m=0;

int sum(int a[],size){
  if(size == 0)
    { s = s+arr[0]; return s;}
  s = s +  arr[size-1];
  sum(a[], size-1);
    }
int max(int a[], size){
  if(size == 0)
    return m;
  if( m < a[size-1])
    m = a[size-1];
  max(a[],size -1);
}
void reverse(int a[],f,l){
  if(l == f){
    printf("%d, ",a[f]);
    return;}
printf("%d, ", a[l]);
reverse(a[],f,l-1);
}
    
  
int main(){
  int arr[30],size=30,f=0,l=29;
  printf("Array elements\n");
  for(int i=0; i< 30 ; i++)
    { arr[i] = (rand()%11)+20;
  printf("%d, ",arr[i]);}
  printf("Sum of elements = %d\n",sum(arr,size));
  printf("Largest element in the array = %d\n", max(arr,size));

  reverse(arr,f,l);
  printf("\n");
  return 0;
}
