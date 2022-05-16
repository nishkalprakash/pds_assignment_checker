/*
Name- Harshit Raj
Dept- Chemical
Roll- 21CH30015
Package- Codeblocks
OS- Win 10
*/

#include <stdio.h>
int main() {

float w;
char type;

printf("which type of wood do you want? Enter 'n' for natural wood or enter 's' for synthetic wood \n");
scanf("%c", &type);

printf("Enter the weight of item you desire in kg: \n");
scanf("%f", &w);

if (type=='n'){
    printf("Base price= %0.2f \n", 1100*w);
    printf("GST= %0.2f \n", 1100*w/5);
    printf("Total price= %0.2f", (1100*w)+(1100*w/5));
}

else if (type=='s') {
    printf("Base price= %0.2f \n", 780*w);
    printf("GST= %0.2f \n", 780*w*15/100);
    printf("Total price= %0.2f", (780*w)+(780*w*15/100));
}


return 0;
}
