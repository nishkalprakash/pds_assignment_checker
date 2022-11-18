/*
name:SENJUTI GHOSH
ROLL:21CY10036
DEPT:Chemistry
Package:CODEBLOCKS
*/
#include<stdio.h>
int main(){
int n,R,x,y,z;
printf("Enter the three digit number");
scanf("%d",&n);
x=(n%10)*100;
y=((n/10)%10)*10;
z=((n/100)%10)*1;
R=x+y+z;
printf("The reverse number is %d",R);
return 0;
}
