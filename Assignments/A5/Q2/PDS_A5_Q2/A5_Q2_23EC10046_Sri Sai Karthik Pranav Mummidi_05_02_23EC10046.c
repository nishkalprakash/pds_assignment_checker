//roll no: 23EC10046
//name: mummidi sri sai karthik pranav
#include<stdio.h>
#include<stdlib.h>
int main(){
  int num,i,count=0;
  int arr[50];
  printf("the no of random numbers to be printed=");
  scanf("%d",&num);
  printf("the array=");
  for(i=0;i<num;i++){
    arr[i]=rand() % 41+10;
    printf("%d ",arr[i]);}
  printf("\n");
  for(i=0;i<num-2;i++){
    for(int j=1;j>i&&j<num-1;j++){
      for(int k=2;k>j&&k<num;k++){
	if(arr[i]+arr[j]+arr[k]==60){
	  printf("the array indices are= %d,%d,%d\n",i,j,k);
	  printf("the values stored in it=%d,%d,%d\n",arr[i],arr[j],arr[k]);
	  count++;}
	 
      }
    }
  }
  if(count==0){
    printf("\n");
    printf("there are no such triplets");}
  return 0;
}
