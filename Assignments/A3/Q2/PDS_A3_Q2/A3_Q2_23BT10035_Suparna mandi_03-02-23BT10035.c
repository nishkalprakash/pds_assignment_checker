//ROLL NO.:23BT10035
//NAME .: SUPARNA MANDI

#include<stdio.h>
int main()
{

  int m;
  printf("Enter the totel marks of the stdunt out of 100:  ");
  scanf("%d" ,&m);

  if(m>=90)
    printf ("GRADE=EX");
  else if (m>80)
    printf ("GRADR=A");
  else if (m>70)
  printf ("GRADE=B" );
  else if (m>60)
  printf ("GRADR=C");
  else if (m>50)
  printf ("GRADR=D");
  else if (m>35)
  printf ("GRADR=P");
  else
    printf ("GRADR=F");
}
