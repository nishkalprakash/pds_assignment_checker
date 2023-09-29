//Roll No:23ME10082
//Name:Siddharth Behera
#include<stdio.h>
int main()
{
  int n,r,d;
  printf("enter the positive integer value less than 9999:");
  scanf("%d",&n);
  while(n!=0)
    { 
      r=n%100;
      
  switch(r)
  {
    case 0:{printf("1");
      break;}
      case 1:{printf("2");
      break;}
	case 2:{printf("3");
      break;}
	  case 3:{printf("4");
      break;}
	   case 4:{printf("5");
      break;}
	   case 5:{printf("6");
      break;}
           case 6:{printf("7");
      break;}
      	  case 8:{printf("9");
      break;}
	   case 9:{printf("10");
      break;}
  }
  n=n/10;
    }
}
  
