/*section 14 Roll no:22MA10040 Name:P.Sri Harsha vardhan Assignment no:3 desc: binary Arithematic operators*/
#include<stdio.h>
int main()
{  
        char sign;
        float num1,num2;
         scanf("%c",&sign);
        scanf("%f %f",&num1,&num2);
       /*signs used are +,-,*,/*/
        switch(sign)
{      case'+': printf("+%f",num1+num2);
        break;
       case'-': printf("-%f",num1-num2);
        break;
        case'*': printf("*%f",num1*num2);
        break;
       case'/': printf("/%f",num1/num2);
        break;}
       return 0;
}
