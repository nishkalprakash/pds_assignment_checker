#include<stdio.h>

int main()
{
int p1;
char c1;
float f1;
//p1 is positive integer, c1 is character, f1 is large floating number
scanf("%2d %c %23f",&p1,&c1,&f1);
printf("integer=%2d \n",p1);
printf("character=%c \n",c1);
printf("Very large number=%23f \n",f1);
return 0;
}
