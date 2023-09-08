// Roll no: 23HS10010
// Name: Anurag Pokhariyal
#include <stdio.h>
int main(){
  int num,sum=0,max=0,max2=0,copy;
  printf("Enter the integer value:\n");
  scanf("%d",&num);
  copy = num;
    while (num != 0){
      int a;
      a = num % 10;
      sum += a;
      num /=10;

      if (a>max){
	max2= max;
	max = a;

      }
      if (a>max2 && a < max ){
	max2=a;
      }
     

    }
  printf("The sum of the digits = %d\n",sum);
  printf("The Largest digit is %d\n",max);
  printf("The second largest digit is %d\n",max2);
  
  return 0;
 
}
