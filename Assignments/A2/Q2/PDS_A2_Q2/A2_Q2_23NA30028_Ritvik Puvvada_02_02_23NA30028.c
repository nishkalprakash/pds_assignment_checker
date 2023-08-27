//Roll No. 23NA30028//
//Name: Ritvik Puvvada

#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter your age in months:");
  scanf("%d",&a);
  b=(a/12);
  if (a%12==0)
	 printf("The person is %d years old",b);
  else
    printf("The person is %d years old\n",b+1);
  return 0;
}
