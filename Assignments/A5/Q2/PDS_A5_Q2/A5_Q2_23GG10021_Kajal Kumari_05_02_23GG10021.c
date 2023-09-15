//roll_23GG10021
//name_kajal_kumari
#include<stdio.h>
#include<stdlib.h>
int main(){
  int a[50];
  printf(" enter array elements randomly",rand(10,50));
  scanf("%d",&rand(10,50));
  printf(" enter the array elements", a[50]);
  scanf(" %d", a[50]);
  for( int i=0; i<50; i++){
    for( int j=i+1;j<50,j++){
      for(int k=j+1;k<50; k++){
	if(a[i]+a[j]+a[k]==60){
	  printf( "the triplets is:(%d,%d,%d)", a[i],a[j],a[k]);
	}
	else {printf( "there is no triplets whose sum is 60");}
	
    }
  }    
  }return 0;
}
	  
      
