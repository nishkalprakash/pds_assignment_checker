//ROLL 23EX10024
//NAME NISHANT KUMAR
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i,j,k,l,a;
  int x[50];
  printf("Enter a positive integer less than or equal to 50\n");
  scanf("%d", &a);
  printf("The random numbers are\n");
  for(l=0;l<a;l++){
    printf("%d\n", x[l]= 10 + rand()%41);
  }
  for(i=0;i<a;i++){
    for(j=i+1;j<a;j++){
      for(k=j+1;k<a;k++){
	if( x[i] + x[j] + x[k] == 60){
	  printf("The indices and their values which add upto 60 are %d %d %d %d %d %d\n", i,j,k,x[i],x[j],x[k]);
	}
      }
    }
  }
  return 0;
}
    
