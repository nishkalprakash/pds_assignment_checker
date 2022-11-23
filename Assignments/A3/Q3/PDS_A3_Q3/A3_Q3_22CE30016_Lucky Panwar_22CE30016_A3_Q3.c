/*
 Section 14
 Roll No : 22CE30016
 Name : LUCKY PANWAR
 Assignment No : 3
 Description : Program to check correct time 
*/
 
#include <stdio.h>
 
int main()
{
 char AMO ; // Declaring an arithmatic operator
 float X ;
 float Y ;
 float Result;
 printf("Enter the AMO,X,Y\n");
 scanf("%c %f %f", &AMO, &X, &Y);
  if(AMO == '+'){
            printf("your outout is %f\n", X+Y);
           }
  else if(AMO == '-'){
                 printf("your outout is %f\n", X-Y);
                }
  else if(AMO == '*'){
                 printf("your outout is %f\n", X*Y);
                }
  else if(AMO == '/'){
                 printf("your outout is %f\n", X/Y);
                }
 return 0;
}
