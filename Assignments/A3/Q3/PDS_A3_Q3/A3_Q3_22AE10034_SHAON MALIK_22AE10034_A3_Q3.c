/* 
 Section 14
 Roll No: 22AE10034
 Name: Shaon Malik
 Assignment No :3
 Description :Program to perform binary arithmetic operation
 */

#include <stdio.h>
 int main()
 {
  char operator;
  float operand1,operand2,result; //declaring variables
  printf("Enter the operator followed by the two operands:");
  scanf("%c %f %f",&operator,&operand1,&operand2);
  switch(operator)
    {
      case '+': result=operand1+operand2;
		printf("%f \n",result);
                break;
     case '-': result=operand1-operand2;
		printf("%f \n",result);
                break;
     case '*': result=operand1*operand2;
		printf("%f \n",result);
                break;
    case '/': result=operand1/operand2;
		printf("%f \n",result);
                break;
    default : printf("invalid input");
   }

return 0;
}//end of program
   
