#include <stdio.h>
int main()
{
char c; // Stores the character entered by the user
int has_digit = 0, has_special_char = 0; // flags to check if password has digit and

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
printf("Invalid Password:\n Password must be between 8 and 12 characters long.\n");
is_valid = 0;
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
else if (c == '$' || c == '#' || c == '&' || c == '%' || c == '@') // check if

has_special_char = 1;
} while (c != '\n'); // loop until user presses enter
if (is_valid) // check if password is valid
{
if (!has_digit) // check if password does not have a digit
printf("Invalid Password:\nPassword must have at least one digit.\n");
else if (!has_special_char) // check if password does not have a special character
printf("Invalid Password:\nPassword must have at least one special character.\n");
else if (len < 8) // check if password is less than 8 characters
printf("Invalid Password:\nPassword must be between 8 and 12 characters long.\n");
else // If all necessary conditions are met, then password is valid
printf("Password is valid.\n");
}
return 0;
}
