//Name : lokesh nitin ingale
//Roll no : 23HS10030
#include<stdio.h>
int sum(int array[],int size){
  int m=array[0];
  sum(array,1)=m;
  int p=sum(array,size-1);
  int s=p+array[size];
  return s;
}
    
  
int main (){
  int array[30];
  for(int i=0;i<30;i++){
    array[i]=rand()%11+20;
  }
  for(int i=0;i<30;i++){
    printf("array[%d]=%d",i,array[i]);
  }
  int size=30;
  int l=sum(array,30);
  printf("%d",l);



	
  return 0;
}
