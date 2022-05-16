
/*
Name- Harshit Raj
Dept- Chemical
Roll- 21CH30015
Package- Codeblocks
OS- Win 10
*/
#include <stdio.h>
int main() {
float s,z;
printf("input initial height : ");
scanf("%f", &z);
int k;


for (int k=1;k<=50;k++){
    z=z-pow(z,0.5);
    printf("(%d,%d)",z,k );
}









return 0;
}
