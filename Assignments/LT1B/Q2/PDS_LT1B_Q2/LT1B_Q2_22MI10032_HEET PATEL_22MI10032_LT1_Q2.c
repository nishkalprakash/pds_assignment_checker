/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : LABTEST 1
Description : to print pattern.
*/
#include<stdio.h>
int main(){
int n;// to declare variable

printf("Enter number:\n");
scanf("%d",&n);//user inputs number
for(int i = 1 ; i <=n ; i++){// for counting rows
for(int j = 1 ; j<= i ; j++){// for counting columns of particular rows
printf("%d",i);

}
printf("\n");
}

return 0 ;
}
