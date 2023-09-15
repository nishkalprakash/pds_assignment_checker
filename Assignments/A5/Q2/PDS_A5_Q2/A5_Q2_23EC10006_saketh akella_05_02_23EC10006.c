#include<stdio.h>
#include<stdlib.h>

int main(){
  int a[50];
  int n;
  int x,count=0;
  
  printf("enter the number of random numbers to be generated \n");
  scanf("%d",&n);
  for(int i =0;i<n;i++){
    x=rand()%40;
    x=x+10;
    a[i]=x;
  }

  for(int j =0;j<n;j++){
    printf("%d ",a[j]);
  }
  printf("\n");
 
  for(int k=0;k<n;k++){
    for(int l =k+1;l<n;l++){
      for(int m = n-1;m>l;m--){
	if(a[k]+a[l]+a[m]==60){
	  printf("the array indices are %d,%d,%d \n",k,l,m);
	  printf("the triplets are : (%d , %d , %d)\n",a[k],a[l],a[m]);
	  count++;
	  
	}

      }
      
    }
    
  }
  if(count==0){
    printf("no triplets \n");
  }
  else printf("this many triplets are there %d \n",count);
  
  return 0;
}
