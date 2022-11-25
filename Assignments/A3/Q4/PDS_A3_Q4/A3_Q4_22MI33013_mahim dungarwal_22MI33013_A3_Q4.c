/*
section 14
roll no : 22MI33013
name : Mahim Dungarwal
assingnment : 3
description :  program to check points
*/

#include <stdio.h>

int main()

{
float a; //a is the total electric unit

scanf("%f", &a);

if(a > 0 && a <= 100) {
printf("total amount = 50");
}

else if(a > 100 && a <= 200) {
float b = 50 + (0.75*(a-100));
float l = b + (b/5);
printf("totat amount = %f \n", l );
}

else if(a > 200 && a <= 300) {
float c =  50 + (0.75*(a-100)) + (1.20*(a-200));
float m = c + (c/5);
printf("total amount = %f \n", m);
}

else if(a >300) {
float d = 50 + (0.75*(a-100)) + (1.20*(a-200)) + (1.50*(a-300));
float e = d + (d/5);
printf("total amount = %f \n", e);
}

return 0;
}
