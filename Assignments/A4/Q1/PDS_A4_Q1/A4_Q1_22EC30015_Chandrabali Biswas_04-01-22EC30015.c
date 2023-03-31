/*
Section :2
Roll No:22EC30015
Name: Chandrabali Biswas
Assignment No:4
Description:Checks for correct password
*/
#include <stdio.h>   //Header file
int main() //main function
{
    char c;int count=0,check_ch,check_sp,dig=0,sp_ch=0,error=0; //Declaring and initializing variables
    printf("Enter a password:");
    do{
       scanf("%c",&c); //takes input from user
       count++;     //counts the number of characters entered
       if(count==1)   //checks for the first character
       {
           if(c<65 || c>90)  //checks for a character which is not an upper case alphabet
            check_ch=1;
       }
       if(c==' ')  //checks for space
        check_sp=2;
       if(c>=48 && c<=57)  //checks for digit
        dig++;
       if(c=='$' || c=='#' || c=='&' || c=='%' || c=='@')   //checks for special characters
        sp_ch++;
    }while(c!='\n');
    if(count>=8 && count<=12 && check_ch!=1 && check_sp!=2 && dig!=0 && sp_ch!=0)
        printf("Password is valid.");
    else
    {
        printf("Invalid Password:\n");
        if(count<8 || count>12)
            printf("Password must be between 8 and 12 characters long.\n");
        if(check_ch==1)
            printf("Password must start with an upper case letter.\n");
        if(dig==0)
            printf("Password must have at least one digit.\n");
        if(sp_ch==0)
            printf("Password must have at least one special character.\n");
        if(check_sp==2)
            printf("Spaces are not allowed in password.\n");
    }
  return 0; //end
}
