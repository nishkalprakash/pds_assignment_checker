/*
Section 2
Roll No : 22CS30036
Name : Lakshya Agrawal
Assignment No : 4
Description : Program to find whether the password is valid or invalid.
*/
#include<stdio.h>

int main()
{
    char ch='\0';
    int char_count=0,dig_count=0,f_count=0,sp_ch_count=0;
    printf("Enter a password: ");
    while(ch!='\n')
    {
        char_count++;
        scanf("%c",&ch);
        if((char_count==1)&&(ch<='Z' && ch>='A')){
            f_count++;
        }else if(f_count == 0){
             printf("Invalid Password:\nPassword must start with an upper case letter.\n");
             break;
        }else{
            if(ch >= '0' && ch <= '9'){
                dig_count++;
            }
            if(ch == ' '){
                printf("Invalid Password:\nSpaces are not allowed in password.\n");
                return 0;
            }
            if(ch=='$'|| ch=='#' || ch=='&' || ch=='%' || ch=='@'){
                sp_ch_count++;
            }
        }
    }
   if(char_count>=8 && char_count<=12 && dig_count>0 && sp_ch_count>0){
      printf("Password is valid.\n");
      return 0;
   }
   if(dig_count == 0){
      printf("Invalid Password:\nPassword must have at least one digit.\n");
   }
   if(sp_ch_count==0){
      printf("Invalid Password:\nPassword must have at least one special character.\n");
   }
   if(char_count < 8 || char_count > 12){
      printf("Invalid Password:\nPassword must be between 8 and 12 characters long.\n");
   }
    return 0;
}
