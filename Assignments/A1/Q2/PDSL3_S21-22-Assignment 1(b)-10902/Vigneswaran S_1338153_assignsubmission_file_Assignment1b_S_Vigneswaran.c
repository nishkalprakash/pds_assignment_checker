/*Name- S Vigneswaran
Roll No- 21AE30020
Dept:Aerospace Engg Dual degree
package:codeblocks
operating system:ubuntu 20.04
Sec 3*/
#include<stdio.h>
int main(){
 int num,unit,ten,hund;
 printf("Enter the 3 digit no to reverse:");
 scanf("%d",&num);
 unit=num%10;
 ten=(num%100-unit)/10;
 hund=(num%1000-ten-unit)/100;
 printf("\nThe no in reverser is:%d%d%d",unit,ten,hund);
 printf("\n------------");
 return 0;
}
