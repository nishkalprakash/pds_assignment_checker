#include<stdio.h>
int main()
{
  int n;
  printf("Enter your marks out of 100 ");
  scanf("%d",&n);
  if (n<=100 && 90<=n) printf("Grade is Ex");
  else{
  if (n<90 && 80<=n) printf("Grade is A");
  else{
  if (n<80 && 70<=n) printf("Grade is B");
  else{
  if (n<70 && 60<=n) printf("Grade is C");
  else{
  if (n<60 && 50<=n) printf("Grade is D");
  else{
  if (n<50 && 35<=n) printf("Grade is P");
  else printf ("Grade is F");
  }
  }
  }
  } 
  }
  return 0;
}
