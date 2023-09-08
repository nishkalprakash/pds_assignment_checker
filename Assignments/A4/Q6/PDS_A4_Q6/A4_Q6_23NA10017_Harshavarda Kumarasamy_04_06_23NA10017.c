//Roll No:<23NA10017>
//Name:<Harshavarda Kumarasamy>

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, min=32, var, copyvar, sum, minnum;

  for(i=0; i<20; i++){
    var = rand()%1000 + 5000;
    copyvar = var;
    printf("Number:%d\n", var);
    
    sum=0;
    while(var > 0){
      sum=sum+var%10;
      var /= 10;
    }
    printf("Sum of Digits:%d\n", sum);
    if(sum<min)
      { min = sum;
	minnum = copyvar;
      }
  }

  printf("The number with the smallest sum of digits is:%d\n", minnum);

  return 0;
}
    
    
