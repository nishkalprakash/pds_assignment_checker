//Roll no.: 23IM30025
//NAME : Shreyash Girdhari Dhakate
#include<stdio.h>
#include<stdlib.h>
int main(){
  //defining the required integers 
  int n,a[50],flag=0,x,intr=0;

  printf("Enter the size of array :");
  scanf("%d",&n);//user input
  //condition for a<=50 to be the program exicuted
  if(n<=50){
    printf("\nThe Original Array is:");
    for(int i=1;i<=n; i++){
      int num=rand()%n;//calling the rand() funtion
      a[i-1]=num;
      printf("%d ",num);//displaying each and every number on eby one for the original array
    }
    //if first term is greater than 2nd even position and soin the modification rspectively and so on...
    for (int i=0;i<(n-2);i+=4){
	if(a[i]>a[i+2]){
	  int x=a[i];
	  a[i]=a[i+2];
	  a[i+2]=x;
	  flag=1;
	  intr++;//counting the interchanges
	}
      }
      
   
   
    //exicuting the final output as per the modification is done
    if(1==1){
      printf("\nThe Modified Array is:");
      for (int i=0;i<n;i++){
	printf("%d ",a[i]);//the final modified array 
      }
      printf("\nNumber of interchanges is:%d\n",intr);//displaying number of interchanges
    }
  }
  //if input is greater than 50
  else{
    printf("\nPlease enter number smaller than 51\n");
  }
  return 0;
}
    
