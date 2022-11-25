#include<stdio.h>
#include<math.h>
int main()
{ 
 float b,c;
 char operator;
 printf("enter the operator");
 scanf("%c",&operator);
 printf("enter b,c");
 scanf("%f%f", &b,&c);
 switch(operator)
 { 
     case '+':
     printf("%f",b+c);
     break;
     case '*': 
      printf("%f",b*c);
     break;
     case '/':
    printf("%f",b/c);
     break;
     case '-':
    printf("%f",b-c);
     
 }
return 0;
}
