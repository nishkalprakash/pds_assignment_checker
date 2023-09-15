#include<stdio.h>
#include<stdlib.h>
int main(){
  int a[50];
  int n,s1,s2;

  printf("enter the no of entries \n");
  scanf("%d",&n);

  
  for(int i=0;i<n;i++){//to fill random integers//
    a[i]=rand()%41+10;
  }
  printf("the entries are");
  for(int i=0;i<n;i++){//to fill random integers//
    printf("%d   ",a[i]);
  }


  for(int i=0;i<n;i++){//to add random integers//
     for(int j=1;j<n;j++){
               s1=a[i]+a[j];
        for(int k=2;k<n;k++){
           	s2=s1+a[k];
		if (s2==60){
		  printf("the triplets are %d %d %d \n",a[i],a[k],a[j]);}  }
    }

  }

  
return 0;
}
