//Roll No. : 23MF3IM17
//Name: Shine Srivastava

#include<stdio.h>
int main()
{
  int num,n1=0,n2,n3;
  printf("Enter the number\n");
  scanf("%d",&num);

  n3=num;
  
  while(num>0)
    {
      n2=num%10;
      n1=n1*10+n2;
      num=num/10;
      }
  printf("enter number is reversed : %d\n",n1);
  if(n1 == n3)
    {printf("This is palindrome\n");}
  else{printf("This is not a  palindrome\n");}
  return 0;
}
