#include <stdio.h>
int main()
{
char c;
int has_digit = 0, has_special_char = 0;
int len = 0;
int is_valid = 1;
printf("Enter a password: ");

do
{
scanf("%c", &c);
len++;
//
if (len == 1 && !(c >= 'A' && c <= 'Z'))
{
printf("Invalid Password:\nPassword must start with an upper case letter.\n");
is_valid = 0;
break;
}
else if (len > 12)
{
printf("Invalid Password:\nPassword must be between 8 and 12 characters long.\n");
is_valid = 0;
break;
}
else if (c == ' ')
{
printf("Invalid Password:\nSpaces are not allowed in password.\n");
is_valid = 0;
break;
}
else if (c >= '0' && c <= '9')
has_digit = 1;
else if (c == '$' || c == '#' || c == '&' || c == '%' || c == '@')
has_special_char = 1;
}
while (c != '\n');
if (is_valid)
if (!has_digit)
printf("Invalid Password:\nPassword must have at least one digit.\n");
else if (!has_special_char)
printf("Invalid Password:\nPassword must have at least one special character.\n");
else if (len < 8)
printf("Invalid Password:\nPassword must be between 8 and 12 characters long.\n");
else
printf("Password is valid.\n");

return 0;
}
