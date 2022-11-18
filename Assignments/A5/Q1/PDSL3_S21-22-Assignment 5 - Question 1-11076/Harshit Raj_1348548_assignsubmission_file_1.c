/*
Name- Harshit Raj
Dept- Chemical
Roll- 21CH30015
Package- Codeblocks
OS- Win 10
*/
#include <stdio.h>

void f(int*, int*, int*);
int main() {

int a ,b,c;

printf("enter three integers\n");
scanf("%d %d %d", &a,&b,&c);

printf("Address of a=%d  Address of b=%d  Address of c=%d\n", &a,&b,&c);
printf("value of a =%d  value of b=%d  value of c=%d\n", a, b, c);

f(&a, &b, &c);
printf("\n\nafter call:------->\n\n");
printf("Address of a=%d  Address of b=%d  Address of c=%d\n", &a,&b,&c);
printf("value of a =%d  value of b=%d  value of c=%d\n", a, b, c);






return 0;
}

void f(int*x, int*y, int*z){
int temp, temp1, temp2;  //for swapping values of variables

     if (*x <= *z && *z <= *y){
      temp=*y;
      *y=*z;
      *z=temp;
    }
    else if(*y <= *x && *x <= *z){
        temp=*x;
        *x=*y;
        *y=temp;
      }
    else if(*y <= *z && *z <= *x){
         temp1=*x;
         temp2=*y;
         *y=*z;
         *x=temp2;
         *z=temp1;
        }
    else if(*z <= *x && *x <= *y){
        temp1=*x;
        temp2=*y;
        *x=*z;
        *y=temp1;
        *z=temp2;
        }


    else if(*z<=*y && *y<=*x){
             temp=*x;
             *x=*z;
             *z=temp;
            }
}

