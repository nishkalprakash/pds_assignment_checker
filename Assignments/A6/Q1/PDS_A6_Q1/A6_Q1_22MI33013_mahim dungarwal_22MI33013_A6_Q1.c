/*
section 14
roll no : 22MI33013
name : Mahim Dungarwal
assingnment : 6
*/

#include <stdio.h>

int print_term(int);

int main ()
{

int n;
printf("enter the value of n : ");
scanf("%d", &n);

for(int j = 0 ; j<=2; j++) {
printf("%d ",j);
}

for(int i = 3; i<=n ; i++) { 
print_term(i);
}

return 0;
}



int print_term(int i) {
if(i==0) {
return 0;
}

if(i==1) {
return 1;
}

if (i==2) {
return 2;
}

int nm = 3*print_term(i-1)*print_term(i-2) - 2*print_term(i-2)*print_term(i-3) + 1 ; // nm is the nth term of series
printf("%d ", nm);


}
