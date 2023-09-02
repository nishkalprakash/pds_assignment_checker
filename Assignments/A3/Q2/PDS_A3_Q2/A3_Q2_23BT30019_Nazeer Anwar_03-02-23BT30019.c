//ROLL NO.:23BT30019
//NAME:NAZEER ANWAR

#include<stdio.h>
int main()
{
  int m ;
  printf("Enter the total marks of the student out of 100:  ");
  scanf("%d" , &m);

  if(m>=90)
  printf("GRADE=EX");
  else if(m>=80)
  printf("GRADE=A");
  else if(m>=70)
  printf("GRADE=B");
  else if(m>=60)
  printf("GRADE=C");
  else if(m>=50)
  printf("GRADE=D");
  else if(m>=35)
  printf("GRADE=P");
  else
  printf("GRADE=F");
  }
  
