// Roll no: 23HS10010
// Name: Anurag Pokhariyal
#include <stdio.h>
int main(){
  int num;
  while (1){
    printf("Enter a single digit number:\n");
    scanf("%d",&num);
    if (num <0) break;
    if (num == 5){
      printf("Enter a single digit number:\n");
      scanf("%d",&num);
      if (num == 1){
	printf("Enter a single digit number:\n");
	scanf("%d",&num);
	printf("Enter a single digit number:\n");
	scanf("%d",&num);
	if (num ==7){
	  printf("Pattern found\n");
	  break;
	}
      }
      
    }
  }
  return 0;
 
}
