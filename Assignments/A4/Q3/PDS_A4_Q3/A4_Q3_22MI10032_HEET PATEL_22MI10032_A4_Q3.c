/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : 4
Description : To display different digits in reverse of words
*/
#include<stdio.h>
int main(){
printf("Enter the number\n");
long n ;
scanf("%ld",&n);
long i , d ;
i = n ;
d=n;
while(d>0 ){
i = d % 10 ;
d = d/10 ;
if(i == 0 ) {
printf("Zero ");
//break;
}
 else if(i == 1 ) {
printf("One ");
//break;
}
 else if(i == 2 ) {
printf("Two ");
//break;
} 
else  if(i == 3 ) {
printf("Three ");
//break;
}
 else if(i == 4 ) {
printf("Four ");
//break;
}
 else if(i == 5 ) {
printf("Five ");
//break;
}
else if(i == 6 ) {
printf("Six ");
//break;
}
else  if(i == 7 ) {
printf("Seven ");
//break;
}
 else if(i == 8) {
printf("Eight ");
//break;
}
 else if(i == 9 ) {
printf("Nine ");
//break;
}


}

return 0 ;
}
