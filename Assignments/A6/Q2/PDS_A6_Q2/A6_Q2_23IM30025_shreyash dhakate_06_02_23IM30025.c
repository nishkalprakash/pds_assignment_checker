//Roll no.: 23IM30025
//NAME : Shreyash Girdhari Dhakate
#include<stdio.h>
#include<stdlib.h>
int sum(int a[],int size);
int max(int a[],int size);
void reverse(int a[],int b,int c);
int add=0,size=30;
int main(){
  int a[30];
  for(int i=0;i<30;i++){
    a[i]=(rand()%10 +20);
  }
  printf("The Original Array Is:[");
  
  for(int i=0;i<30;i++){
	printf("%d ,",a[i]);
      }
      printf("]\n");
      printf("The sum of all the elements is: %d",sum(a,30));
      //printf("The max from all the elements is: %d",max(a,30));
      reverse(a,0,29);
       printf("The reversed  Array Is:[");
  
  for(int i=0;i<30;i++){
	printf("%d ,",a[i]);
      }
      printf("]\n");
      
}
int count=29;
int sum(int a[],int size){
  
  if((size-1)>0){
    add+=a[size-1]+ sum(a,size-1);
      return add;
    
  }
  else {
    return a[0];
  }
}
void reverse(int a[],int n1,int n2){
  int x=a[n1];
  a[n1]=a[n2];
  a[n2]=x;
  if(n1<=14){
    reverse(a,n1+1,n2-1);
  }
  

}
