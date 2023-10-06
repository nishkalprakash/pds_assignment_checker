//name: PILLI ASISH CHANDAN
// r.no. 23ME30039

#include<stdio.h>
#include<stdlib.h>

int size;
int arr[100];
void fill(){
     
      while(1){
	 printf("\n enter required size");
	 scanf("%d",&size);
	 if(size>0 && size<101){
	   int i;
	   for(i=0;i<size;i++){
	     arr[i]=rand()%900+100;
	   }
	   int j;
	   for(i=0;i<size;i++){
	     printf("arr[%d]=%d ",i,arr[i]);
	   }
	   break;
	 }}}
void exchange(){
  int i;
  for(i=0;i<size;i++){
	     printf("arr[%d]=%d ",i,arr[i]);
	   }
  int j,k;
  if(size%2==0){
    for(i=0,j=(size)/2;i<size/2 && j<size;i++,j++){
      int temp;
      temp=arr[j];
      arr[j]=arr[i];
      arr[i]=temp;}}
  if(size%2==1){
    for(i=0,j=((size)/2+1);i<size/2 && j<size;i++,j++){
      int temp;
      temp=arr[j];
      arr[j]=arr[i];
      arr[i]=temp;}}
  printf("\n");
  for(i=0;i<size;i++){
	     printf("arr[%d]=%d ",i,arr[i]);
	   }}
void rotate_right(){
  int i;
  int temp_1=arr[size-1];
  for(i=0;i<(size-1);i++){
    int temp;
    temp=arr[i+1];
    arr[i+1]=arr[i];
    arr[i+2]=temp;}}
      
    
   
   
  

int main()
{
  while(1){
  int n;
  printf("\n");
  printf("enter choice\n");
  printf("i. 1---- fill \n ii. 2---- exchange \n iii. 3---- rotate right \n iv. 4---- rotate left \n v. 5---- segregate \n vi. 6---- search \n vii. 7---- fold \n viii. 8---- analyse \n ix. 9---- 0,9 or any higher number---- exit");
  scanf("%d",&n);
  if(n==1) {
    fill();}
  if(n==2) {
    exchange();}
  if(n==3){
    rotate_right();}
  if(n>8 || n==0)
    break;}}
  
  
    
     
	   
	
  
