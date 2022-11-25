#include<stdio.h>

int main(){
char i;
printf("enter operator");
scanf("%c",&i);
float a,b;
scanf("%f%f",&a,&b);
switch(i){
case '+':
printf("%f",a+b);
break;
case '-':
printf("%f",a-b);
break;
case'*':
printf("%f",a*b);
break;
case'/':
printf("%f",a/b);
break;
}
return 0;
}

