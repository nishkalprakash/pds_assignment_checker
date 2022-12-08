#include <stdio.h>

int main()

{

int a;
int b;

printf("enter first number :   ");

scanf("%d", &a);


printf("enter second number :   ");

scanf("%d", &b);



for (int i=2; i<=a && i<=b; i++) {


if (a%i ==0 && b%i ==0) {

printf("they are not co prime");
}

if(a%i !=0 || b%i !=0) 

return 0;

}
}
