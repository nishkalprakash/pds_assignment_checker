#include<stdio.h>	//this is an standerd input output header file
int main(){

int A[100], *p, i;
p = &A[0];
for (i=0; i<100; i++)
scanf(ā%dā,p + i); /* no &, as already a pointer */
for (i=0; i<100, I++)
printf(ā%d ā, *(p+i)); 

return 0;
}
