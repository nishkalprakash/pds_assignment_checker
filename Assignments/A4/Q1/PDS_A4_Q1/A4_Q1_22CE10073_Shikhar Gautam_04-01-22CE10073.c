/* Name = Shikhar Gautam
Section = 2
Roll Number = 22CE10073
Assignment = 4
Description : program to check the password
*/

#include <stdio.h>

int main (){

char ch;
printf("Enter a password : ");
scanf("%c" , &ch);

if(ch>='A' && ch<='Z'){
    printf("Password is valid");
}
else{
    printf("Password is invalid \n");
    printf("Password must start with an upper case letter \n");
}



return 0;
}


