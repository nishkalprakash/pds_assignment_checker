//roll_no._23GG10021
//name_kajal_kumari
#include<stdio.h>
#include<stdlib.h>

int main(){
  int i,j,k,n;
  int sum=0;
  int array[50];
  int tripletfound=0;
  printf(" enter the no. of content in array :", n);
  scanf("%d", &n);
  if(n<50){
    for(int i=0; i<=n; i++);
  scanf("%d\n", &rand()%(50-10)+10);
  printf(" the elements of array[%d]:%d",i,rand()%(50-10)+10);
    for(int i=0; i<=50; i++){
      for(int j=0; j<=50;j++){
	for(int k=0; k<=50;k++){
	  sum = array[i]+array[j]+array[k];
	  if(array[i]+array[j]+array[k]==60){
	    tripletfound++ ;
	    printf(" the triplets are : %d,%d,%d ", array[i],array[j], array[k]);scanf("%d, %d, %d ", &i,&j,&k);
	    printf(" the indices of elements are: %d, %d, %d", i,j,k);
	  }
	}if(array[i]+array[j]+array[k]!=60){
	  printf(" triplets not found ");
      }
    }
  }

  else{
    printf(" enter the valid no.");
}  return 0;	    					  
  
