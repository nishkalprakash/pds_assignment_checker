#include<stdio.h>
int main()
{

  float x,y,final_value;
  char  operation;
  
  printf("enter the operation that is to be performed(+,-,*,/):");
  scanf("%c",&operation);
  printf("enter any two numbers x&y:");
  scanf("%f %f",&x,&y);
 
  if(operation=='+')
 { final_value=x+y;
  printf("your final value is:%f\n",final_value);
 }
 else if(operation=='-')
 { final_value=x-y;
  printf("your final value is:%f\n",final_value);
 }
 else if(operation=='*')
 { final_value=x*y;
  printf("your final value is:%f\n",final_value);
 }
 else if(operation=='/')
 { final_value=x/y;
  printf("your final value is:%f\n",final_value);
 }
else 
 printf("the operation involved is invald\n");
return 0;
}
