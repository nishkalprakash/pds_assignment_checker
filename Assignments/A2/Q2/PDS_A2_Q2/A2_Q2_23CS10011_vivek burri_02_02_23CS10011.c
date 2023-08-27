// name vivek
// roll no 23CS10011
#include<stdio.h>
int main(){
  int c;
  printf("entere your age in months");
  scanf("%d",&c);
  if (c%12!=0)
  printf("your age in years is  %d",c/12 +1);
  else
    printf("your age in yours is %d",c/12);
  return 0;
}
