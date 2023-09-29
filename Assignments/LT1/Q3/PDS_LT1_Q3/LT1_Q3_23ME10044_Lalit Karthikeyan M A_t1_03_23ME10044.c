//ROLL NO.: 23ME10044
//NAME: LALIT KARTHIKEYAN.M.A

#include<stdio.h>

int main(){

  int s,n,c=0;        //Declaring variables

  //Getting input from the user

  printf("Enter the scale factor (in the range [1,6]) : \n");
  scanf("%d",&s);

  printf("Enter the number of lines (int the range [1,10]: \n");
  scanf("%d",&n);

  if(((s>=1)&&(s<=6))&&((n>=1)&&(n<=10))){          //Condition to check if s and n are within the range
    
    for(int i=1;i<=n;i++){                         //Loop to keep in check the number of lines

      for(int j=0;j<i;j++){                        //Loop to keep in check the number of digits in each line
	c++;
	printf("%d",c);                            //printing the digit
	if(c==(s+3))c=0;
      }
      printf("\n");
    }
  }
  
  else printf("The given values are out of range!!\n\n");
  return 0;
  
}
