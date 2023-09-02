/* Name : Swarup Jayaram Dhanavade
   Roll No: 23MI10052*/
#include<stdio.h>
int main()
{  int m;
  printf("Get your grade \n");
  printf ("Enter your marks here(out of 100):");
  scanf("%d" ,&m);

  if(m>=90 && m<=100) printf("Your grade : EX\n");
  if  (m>=80 && m<90) printf("Your grade : A\n");
  if  (m>=70 && m<80) printf("Your grade : B\n");
  if  (m>=60 && m<70) printf("Your grade : C\n");
  if  (m>=50 && m<60) printf("Your grade : D\n");
  if  (m>=35 && m<50) printf("Your grade : P\n");
  if  (m>=0 && m<35) printf("Your grade : F\n");
  if ( m>100 || m<0) printf("Not Valid marks\n");

	   
  return 0 ;

}
