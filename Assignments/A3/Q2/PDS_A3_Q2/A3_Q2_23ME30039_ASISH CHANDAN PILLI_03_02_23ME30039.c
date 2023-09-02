// name: pilli asish chandan
//roll no: 23ME30039

#include<stdio.h>
#include<math.h>

int main()   {
  int a;
  printf(" enter marks");
  scanf("%d", &a);

  if( a>=90 && a<=100 )
    printf( "Grade= EX ");
  else if ( a<90 && a>=80)
    printf( "Grade= A ");
  else if ( a<80 && a>=70)
    printf("Grade= B");
  else if (a<70 && a>=60)
    printf(" Grade= C");
  else if ( a<60 && a>=50)
    printf("Grade = D");
  else if( a<50 && a>=35)
    printf("Grade= P");
  else if (a<35)
    printf("Grade= F");
  else
    printf(" enter value between 0 and 100 ");
}
    
  

  
