/*
section 14
roll no : 22MI33013
name : Mahim Dungarwal
assingnment : 6
*/

#include <stdio.h>

void coprime(int , int);
int min;

int main()  
{

int a,b;

printf("enter values of a,b :  ");
scanf("%d %d", &a, &b);

coprime(a,b);

return 0;
}

void coprime(int a, int b) {

if(a<b) {
min == a;
}
else
min == b;


for(int i=2; i<= min; i++) {

if(a%i ==0 && b%i ==0 ) {
printf("(%d,%d)are not coprime", a,b);
}

}
return ;
}

