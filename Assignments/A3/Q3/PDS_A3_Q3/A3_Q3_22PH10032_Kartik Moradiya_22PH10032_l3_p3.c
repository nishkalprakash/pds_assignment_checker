#include<stdio.h>
#include<math.h>
  int main()
  {
     char a;
     printf("enter operator among +,-,*,/");
     scanf("%c",&a);
     float c,d;
     printf("enter value of c&d");
     scanf("%f",&c);
     scanf("%f",&d);
      switch (a){
      case ('+'):
      printf("%f",c+d);
      break;
      case ('-'):
      printf("%f",c-d);
      break;
      case ('*'):
      printf("%f",c*d);
      break;
      case ('/'):
      printf("%f",c/d);
      break;
      default:
      printf("d=0 is not valid");
      }
      return 0;
  }
  
  
  
  
  
