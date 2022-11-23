/* Section 14
   roll no- 22EE30007
   name- Debarpita Saha
   Assignment no-3
   Description-  program to take input and evaluate the operation
 */
#include<stdio.h>
int main()
{
char x; 
float y,z, sum,diff,prod, div;
 scanf("%c %f %f", &x, &y, &z);
 if (x== '+'){
  sum= y+z;
 printf("%f", sum);
}
 if(x== '-'){
 diff= y-z;
 printf("%f", diff);
}
  if(x== '*'){
prod= y*z;
printf("%f", prod);
}
 if(x== '/'){
 div= y/z;
 printf("%f", div);
}

return 0;
}
    
