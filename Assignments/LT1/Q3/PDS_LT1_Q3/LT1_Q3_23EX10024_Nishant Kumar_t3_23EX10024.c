//ROLL 23EX10024
//NAME NISHANT KUMAR
#include<stdio.h>
int main(){
  int k=1,s,n,count=0;
  printf("Enter scale factor:");
  scanf("%d",&s);
  printf("Enter number of lines:");
  scanf("%d",&n);
  for(int i=0;i<n-2;i++){
    for(int j=1;j<=s+3;j++){
        printf("%d",j);
	count ++;
        if(count%((k*k + k)/2)==0)
	{
	printf("\n");
	k++;
	}
    }
    
  }

  return 0;
}
	
      
  
  
  
