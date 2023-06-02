#include<stdio.h>
#include <stdio.h>
struct user {
char userid[100];
char password[100];

}s[0];
void enrolment(int n){
    for(int i=0;i<n;i++){
        scanf("Enter user ID%s\n",s[i].userid);
        scanf("Enter Password%s",s[i].password);
}
}
void signin(int n){
    for(int i=0;i<n;i++){
        scanf("Enter user ID%s\n",ui);
        scanf("Enter Password%s",pwd);
    }
char c;
int has_digit = 0, has_special_char = 0;
special character
int len = 0;
int is_valid = 1;
printf("Enter a password: ");
// get password from user
do
{
scanf("%c", &c);
if (len == 1 && !(c >= 'A' && c <= 'Z')) // if first character is not upper case
{
printf("Invalid Password:\nPassword must start with an upper case letter.\n");
is_valid = 0;
break;
}
else if (len > 12)
{
printf("Invalid Password:\nPassword must be between 8 and 12 characters
long.\n");
is_valid = 0;
break;
}
else if (c == ' ')
printf("Invalid Password:\nSpaces are not allowed in password.\n");
is_valid = 0;
break;
}
else if (c >= '0' && c <= '9')
has_digit = 1;
else if (c == '$' || c == '#' || c == '&' || c == '%' || c == '@') // check if
password has special characters
has_special_char = 1;
} while (c != '\n');
if (is_valid)
if (!has_digit)
printf("Invalid Password:\nPassword must have at least one digit.\n");
else if (!has_special_char)
printf("Invalid Password:\nPassword must have at least one special
character.\n");
else if (len < 8)
printf("Invalid Password:\nPassword must be between 8 and 12 characters
long.\n");
else
printf("Password is valid.\n");
}
return 0;
}
}
int c=0;
for(int i=0;i<n;i++){
        if(ui=s[i].userid) printf("already exsist");

}

int main(){
    int n,m;
    printf("Enter the max number of users");
    scanf("%d",&n);
    printf("choose one of the following options :\n1. Enroll\n2.Sign-in\n3.Exit\n\n");
    scanf("%d",&m);
    if(m==1){
            enrolment(n);

    }
    else if (m==2){
            signin(n);

    }
    else{}

return 0;
}


