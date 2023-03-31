/*
SECTION 2
ROLL NO 22EC30035
NAME  MOHUL DUTTA
ASSIGNMENT No. 4

Description - program to check valid password
*/
#include<stdio.h>
int main(){
char c;// this will be the input variable
int e=0,n=0,d=0,s=0;//e is error,n no. of characters,d special character,s special character
printf("Enter a password: ");
scanf("%c",&c);//1st character
if(c<65 || c>90){
    e=1;//error 1 is no uppercase letter
}
while(c!='\n'){
    if(!((c>=65)&&(c<=90))||((c>=97)&&(c<=122))){
        if((c>=48)&&(c<=57)){
            d++;//counting no. of digits
        }
        else if(c==' '||c=='\t'){
            e=3;//3rd error is when we keep a space
        }
        else if((c=='$')||(c=='#')||(c=='&')||(c=='%')||(c=='@')){
            s++;//counts no. of special characters
        }
    }
    n++;//no. of characters
    scanf("%c",&c);//getting a new character
}
if(e==1){
        printf("Invalid Password:\nPassword must start with an upper case letter.");//prints this if first character is not capital character
}
else if(d==0){
    printf("Invalid Password:\nPassword must have at least one digit");//prints if not even one digit
}
else if(e==3){
    printf("Invalid Password:\nSpaces are not allowed in password");//if spaces are there in program
}
else if(n<8 || n>12){
    printf("Invalid Password:\nPassword must be between 8 and 12 characters long");//if not of sufficient length
}
else if(s==0){
    printf("Invalid Password:\nPassword must have at least one special character");//f no special character
}
else{
    printf("Password is valid");//if no problem
}
}
