//rollno= 23EC10046
//name= mummidi sri sai karthik pranav
#include<stdio.h>
#include<stdlib.h>
int arr[100],size;
int fill(){
  printf("enter the size of array:");
  scanf("%d",&size);
  if(size>100){
    fill();
    return 0;}
  for(int i=0;i<size;i++){
    arr[i]=rand() % 900+100;
    printf("arr[%d]=%d\n",i,arr[i]);}
}
int exchange(){
  int temp;
  for(int i=0;i<size;i++){
    printf("arr[%d]=%d\n",i,arr[i]);}
  if(size%2==0){
    for(int i=0;i<(size/2);i++){
      temp=arr[i];
      arr[i]=arr[4+i];
      arr[(size/2)+i]=temp;}
  }
  else{
    int p=(size-1)/2;
    for(int i=0;i<p;i++){
      temp=arr[i];
      arr[i]=arr[p+1+i];
      arr[p+1+i]=temp;}
  }
}
int rotateright(){
  int q;
  for(int i=0;i<size;i++){
    printf("arr[%d]=%d\n",i,arr[i]);}
  q=arr[size-1];
  arr[0]=q;
  for(int i=0;i<(size-1);i++){
    arr[i+1]=arr[i];}
  for(int i=0;i<size;i++){
    printf("arr[%d]=%d\n",i,arr[i]);}
}
int rotateleft(){
  int q;
  for(int i=0;i<size;i++){
    printf("arr[%d]=%d\n",i,arr[i]);}
  q=arr[0];
  arr[size-1]=q;
  for(int i=1;i<size;i++){
    arr[i-1]=arr[i];}
  for(int i=0;i<size;i++){
    printf("arr[%d]=%d\n",i,arr[i]);}
}
int segregate(){
  for(int i=0;i<size;i++){
    printf("arr[%d]=%d\n",i,arr[i]);}
  int arr2[size];
  int j=0;
  for(int i=0;i<size;i++){
    if(arr[i]%2==0){
      arr2[j]=arr[i];
      j++;}
  }
  for(int i=0;i<size;i++){
    if(arr[i]%2!=0){
      arr2[j]=arr[i];
      j++;}
  }
  for(int i=0;i<size;i++){
    arr[i]=arr2[i];
    printf("arr[%d]=%d\n",i,arr[i]);}
}
int search(){
  for(int i=0;i<size;i++){
    printf("arr[%d]=%d\n",i,arr[i]);}
  int q,count=0;
  printf("enter a number to search:");
  scanf("%d",&q);
  for(int i=0;i<size;i++){
    if(arr[i]==q){
      printf("found at index:%d\n",i);
      count++;}
  }
  if(count==0) printf("not found\n");
}
int fold(){
  int j=0,k=0;
  if(size%2==0){
     for(int i=0;i<size/2;i++){
       arr[j]=arr[i]+arr[size-i-1];
       printf("arr[%d]=%d\n",j,arr[j]);
       j++;}
  }
  else{
    for(int i=0;i<(size-1)/2;i++){
       arr[k]=arr[i]+arr[size-i-1];
       printf("arr[%d]=%d\n",k,arr[k]);
       k++;}
    printf("arr[%d]=%d\n",k,arr[(size+1)/2]);
  }
}
int analyze(){
   for(int i=0;i<size;i++){
    printf("arr[%d]=%d\n",i,arr[i]);}
   int pos=0,isize=0,mpos,msize=0;
   if(pos<size){
     while(arr[pos]>arr[pos+1]){
       isize++;
       printf("arr[%d]=%d,arr[%d]=%d",pos,arr[pos],pos+1,arr[pos+1]);
       pos++;}
     printf("and");
   }}
     

   
int main(){
  int c;
  
  
  while(1){
    printf("enter a number to perform an activity:");
    scanf("%d",&c);
    if(c==0||c>8) break;
    if(c==1) fill();
    if(c==2) exchange();
    if(c==3) rotateright();
    if(c==4) rotateleft();
    if(c==5) segregate();
    if(c==6) search();
    if(c==7) fold();
    if(c==8) analyze();}
  return 0;
}
    
  
  
      
