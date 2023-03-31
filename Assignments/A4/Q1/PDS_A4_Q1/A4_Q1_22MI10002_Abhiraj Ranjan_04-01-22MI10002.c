/*
Section 2
Roll No. : 22MI10002
Name: Abhiraj Ranjan
Assignment No. : 1
Topic :
*/
#include<stdio.h>
int main(){
char c;
printf("Enter a password: ");
do
 {

  scanf("%c",&c);
    if (!(c>='A'&&c<='Z')){//checking if the password starts with an uppercase letter
      printf("Invalid Password\nPassword must start with an uppercase letter\n");
break;}


      if(!(c>='0'&&c<='9')){{//checking if it has atleast 1 digit
        printf("Invalid Password\nPassword must have at least one digit\n");}
        break;}

 break;
      }

    while(c!='\n');

return 0;
}
