/*
Name: Ankit Yadav
Roll No : 21EE30005
Section: 3
Department: Electrical Engineering
Operating System: Windows 11
Package: Codeblocks
Lab Test : 3
*/

#include<stdio.h>


int main(){

char a[30];
int i,count;
count=0;

printf("Enter the expression\n");
scanf("%s",&a);
count=0;

for(i=0;a[i]!='\0';i++){

    if(a[i]=='('||a[i]=='{'||a[i]=='[') count++;                //to change the value of count if the condition is satisfied
    if(a[i]==')'||a[i]=='}'||a[i]==']') count--;
}

if(count==0){
    printf("Balanced");                                         //to check the condition with the help of count
}else printf("Not Balanced");


return 0;
}
