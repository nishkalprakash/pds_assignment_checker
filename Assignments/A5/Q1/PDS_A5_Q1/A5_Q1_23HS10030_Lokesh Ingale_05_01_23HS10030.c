//NAme :Lokesh Nitin Ingale
//Roll no:23HS10030
#include<stdio.h>
int main ()
{
  int count=0,temp,n,array[50];
  printf("Enter the number of random integers(<50)");
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    array[i]=rand()%91+10;
  }
  for(int i=0;i<n;i++) {
    printf("array[%d]=%d\n",i,array[i]);
  }
  for(int i=0;i<n-2;i=i+2){
    if (array[i]>array[i+2]){
       count=count+1;
       temp=array[i];
       array[i]=array[i+2];
       array[i+2]=temp;
    }}
  for(int i=0;i<n;i++) {
    printf("The interchanged values are array[%d]=%d\n",i,array[i]);
  }
  printf("The number of interchanges are %d",count);
  return 0 ;
}
    
  
  
