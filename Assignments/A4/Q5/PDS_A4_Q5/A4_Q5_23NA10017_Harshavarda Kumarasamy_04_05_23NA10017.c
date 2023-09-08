//Roll No:<23NA10017>
//Name:<Harshavarda Kumarasamy>

#include <stdio.h>

int main()
{
  int n, sum=0, i, max1=0, max2=0;

  printf("Enter any number:\n");
  scanf("%d", &n);

  while(n>0){
    sum=sum+n%10;
    i=n%10;
    if(i >= max1)
      {max1 = i;}
    else if(i >= max2)
      {max2 = i;}
    n /= 10;
  }

  printf("Sum of Digits=%d\n", sum);
  printf("Largest=%d\n", max1);
  printf("Second Largest=%d\n", max2);

  return 0;
}


  

 
  
