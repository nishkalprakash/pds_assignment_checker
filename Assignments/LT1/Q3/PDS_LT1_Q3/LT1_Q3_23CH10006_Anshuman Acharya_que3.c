// Name - Anshuman Acharya
// Roll No. - 23CH10006
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){

  int scale, num, n = 1;

  printf("Enter the scale : \n");
  scanf("%d",&scale);

  printf("Enter the number of lines : \n");
  scanf("%d",&num);

  for(int i = 0;i <= num;i++){
    for(int j = 0;j <= i;j++){

      if(n <= 3 + scale){

	printf("%d",n);
	
      }

      else{
	n = 1;
	printf("%d",n);
	n++;
      }

      n++;
      
      }
    printf("\n");
    }

  return 0;
}
