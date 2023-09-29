//Roll no.: 23IM30025
//NAME : Shreyash Girdhari Dhakate
#include<stdio.h>
#include<stdlib.h>

int main(){
  int s,n;
  printf("Enter scale factor:");//defining s
  scanf("%d",&s);
  printf("Enter Number of lines:");//number of lines
  scanf("%d",&n);
  
  if(s>=1 && s<=6 && n>=1 && n<=10)//boundations for program to be executed as per question
    {
    for (int i=0;i<(n);i++){
      for (int j=0;j<=i;j++){
	printf("%d",(rand()%(s+3) +1));
	
      }
      printf("\n");//taking new lines
    }
  }
}
