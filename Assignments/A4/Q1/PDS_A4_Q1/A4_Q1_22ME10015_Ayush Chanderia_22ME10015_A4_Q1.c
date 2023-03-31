/*
* Section 2
* Roll No : 22ME10015
* Name : Ayush Chanderia
* Assignment No : 4
* Description : Program to check if the password is valid or not.
*/
#include <stdio.h>
int main(){
char c;
int len=0;
int isdigit=0;
int specialchar=0;
int isvalid=1;
printf("Enter a password:\n");
do{
    scanf("%c",c);
    len++;
    if(len==1 && !((c>='A')&& (c<='Z'))){
        printf("Invalid password:\n Must start with an uppercase letter");
        isvalid=0;
        break;
    }
    if(len>12 || len<8){
        printf("Invalid password:\n Password must be between 8 to 12 characters long");
        isvalid=0;
        break;
    }
    if(c>='0' ||c<='9'){
        isdigit=1;
    }
    if(c=='@'||C=='#'||c=='&'||c=='%'||c=='$'){
        speacialchar=1;
    }
    if(c==' '){
        printf("Invalid password:\n Spaces are not allowed in password");
    }
}while(c=='\n');
if(isvalid==1){
    if(isdigit==0)
        printf("Invalid password:\n Password must contain a digit");
    if(speacialchar==0)
        printf("Invalid password:\n Password must have a speacial charactter");


}
else
    printf("Password is valid\n");



return 0;
}
