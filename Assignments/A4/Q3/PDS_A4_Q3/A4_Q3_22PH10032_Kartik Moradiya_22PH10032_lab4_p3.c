#include<stdio.h>
#include<math.h>

  int main()
  {
      int i;
      printf("ener any digit");
      scanf("%d",&i);
      
      while(i>0)
      {
      switch(i%10)
      {
      case 1:
      printf("one");
      break;
      case 2:
      printf("two");
      break; 
      case 3:
      printf("three");
      break;
      case 4:
      printf("four");
      break; 
      case 5:
      printf("five");
      break; 
      case 6:
      printf("six");
      break; 
      case 7:
      printf("seven");
      break; 
      case 8:
      printf("eight");
      break;
      case 9:
      printf("nine");
      break; 
      case 0:
      printf("zero");
      break;
      default:
      printf("one");
      }
      i=i/10;
      
      }
  return 0;
  }
