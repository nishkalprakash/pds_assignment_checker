//Roll no.: 23IM30025
//NAME : Shreyash Girdhari Dhakate
#include<stdio.h>
#include<stdlib.h>
int main(){
  //defining the required integers 
  int n,a[50],flag=0,x,intr=0,hold1=0,hold=0,hold2=0,id=0,id2=0,id1=0;

  printf("Enter the size of array :");
  scanf("%d",&n);//user input
  //condition for a<=50 to be the program exicuted
  if(n<=50){
    printf("\nThe Original Array is:\n");
    for(int i=1;i<=n; i++){
      int num=(rand()%40 +10);//calling the random function
      a[i-1]=num;
      printf("%d ",num);//displaying each and every number on eby one for the original array
    }
    for(int i=0;i<n;i++){
      for(int c=1;c<i;c++){
	if(a[i]!=a[c]){
	  for(int j=0;j<i;j++){
	    for(int k=0;k<n;k++){
	      if(((a[i]*a[i])+(a[j]*a[j]))==(a[k]*a[k]) && (a[i]+a[j]+a[k])<=60){
		hold1=a[i];
		id1=i;
		hold=a[j];
		id=j;
		hold2=a[k];
		id2=k;
	        flag=1;
		
	      }
	    }
	  }
	  	}
      }
     
    }
    }
  if(flag==1){
	
    printf("\nthe triplet is %d  %d %d\n",hold1,hold,hold2);//displaying the outputs
        printf("stored at %d %d %d incides respectively\n",id1,id,id2);

  }
  return 0;
}
