#include<stdio.h>
/*NAME-Sumit Kumar
Roll nO.-22CS30056
Section-2
DEscription-FIbonacci numbers checking and printing nearby*/
typedef struct {
   char *userID;
   char *password;
}user;
int pass(){
   char c; // Stores the character entered by the user
int has_digit = 0, has_special_char = 0; // flags to check if password has digit andspecial character
int len = 0; // counter to store the length of the password
int is_valid = 1; // flag to check if password is valid
printf("Enter a password: ");
// get password from user
do
{
scanf("%c", &c); // Read the buffer character by character
len++; // increment the length of the password
// check first character is upper case
if (len == 1 && !(c >= 'A' && c <= 'Z')) // if first character is not upper case
{
printf("Invalid Password:\nPassword must start with an upper case letter.\n");
is_valid = 0;
break;
}
else if (len > 12) // check if password is greater than 12 characters
{

break;
}
else if (c == ' ') // check if password has spaces
{
printf("Invalid Password:\nSpaces are not allowed in password.\n");
is_valid = 0;
break;
}
else if (c >= '0' && c <= '9') // check if password has digits
has_digit = 1;
else if (c == '$' || c == '#' || c == '&' || c == '%' || c == '@') // check ifpassword has special characters
has_special_char = 1;
} while (c != '\n'); // loop until user presses enter
if (is_valid) // check if password is valid
{
if (!has_digit) return 0;
else if (!has_special_char) return 0;
else if (len < 8) return 0;
else return 1;
}

}

void enroll(){
    char a,b;
    printf("enter userid:");
    scanf("%s",&a);
    printf("\nenter password:");
    pass();
    scanf("%s",&b);


    return 0;
    }
void sign(){return 0;}


int main(){
    int max;
    printf("Enter max no.of users:");
    scanf("%d",&max);
    printf("\n");
    user data[100];

    char z,y;
    scanf("%s",&data[0].userID);
    scanf("%s",&data[0].password);

   printf("\n");
   printf("Choose one of the options.\n");
   printf("            1.Enroll\n");
   printf("            2.Sign-in\n");
   printf("            3.Exit\n");
   char ch;

   do{
    scanf("%d",&ch);
    if(ch==1) enroll();
    else if(ch==2) sign();
    else if(ch==3) break;

   }while(ch!=3);


}
