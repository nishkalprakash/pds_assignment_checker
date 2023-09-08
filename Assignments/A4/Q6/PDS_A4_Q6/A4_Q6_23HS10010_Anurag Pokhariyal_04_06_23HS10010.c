// Roll no: 23HS10010
// Name: Anurag Pokhariyal
#include <stdio.h>
#include <stdlib.h>
int main(){
  int random,num, min=1000;
  for(int i = 0;i <20;i++){
    random =((rand()%1001))+5000;
    printf("The random number is %d\n",random);
    num = random;
    int sum = 0;
    while (num != 0){
      int a;
      a = num% 10;
      sum += a;
      num /=10;
    
    printf("The sum of the digits is %d\n",sum);
    if (sum < min){
	min = random;
    }

    
    }
  }
  printf("The number with smallest sum of digit is %d\n",min);
  return 0;
 
}
