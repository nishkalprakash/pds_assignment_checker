#include<stdio.h>
int main ()

{

  int a;
  printf("enter your marks");
  scanf("%d",&a);
   if(a>=90)
    {
      printf("grade given is ex");

	}
  if(a>=80 && a<90)
  {
    printf("grade given is A");

  }

   if(a>=70 && a<80 )
    {
      printf("grade given is B");

    }
   if(a>=60 && a<70)
    {
      printf("grade given is C");
    }
   if(a>=50 && a<60)
    {
      printf("grade given is D");
    }
    if(a>=40 && a<50)
    {
      printf("grade give is E");
    }
    if(a>=35 && a<40)
    {
      printf("grade given is P");
    }
   if(a<35)
    {
      printf("grade given is F");
    }
  return 0;
}

     
