#include<stdio.h>
#include<stdlib.h>
int main()
{
  int arr[50];
  int n;
  printf("enter the number of such numbers: ");
  scanf("%d",&n);
    for(int j=0;j<n;j++){
      arr[j]=rand()%41+10;
    }
  
    for(int j=0;j<n;j++){
      printf("%d ",arr[j]);
    }
    //no of triplet
    
    int sum =0,j,k,l;
       for(int j=0;j<n;j++){
	 for(int k=j+1;j<n;j++){
	   for(int l=k+1;l<n;l++){
	     sum=arr[j]+arr[k]+arr[l];}
   }
	  if (sum==60){
	     printf("the triplet is%d %d =%d",arr[j],arr[k],arr[l]);
	   }
	      else{
    printf("\n no such triplet is found");
      }
   }
     
 
    return 0;
      }
       
       
    
    
 
    
    
  
      
  
