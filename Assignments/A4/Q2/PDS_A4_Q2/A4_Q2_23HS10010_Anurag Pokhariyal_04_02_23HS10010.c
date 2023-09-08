// Roll no: 23HS10010
// Name: Anurag Pokhariyal
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int max=0,random;
  for(int i = 0;i <20;i++){
    random = (rand()%100)+1;
    printf("The random no.%d is %d\n",i+1,random);
    if (random > max){
      max = random;
      
    }
  }
  printf("The maximum of the random number generated is %d\n",max);
  return 0;
 
}
