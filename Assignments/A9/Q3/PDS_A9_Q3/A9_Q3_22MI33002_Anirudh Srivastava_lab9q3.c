#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void enrollment() {
    char userid[100];

char c;

printf("enter user id:" );
scanf("%s",userid);
printf("%s",userid[100]);

printf("\nenter password:" );

int has_digit = 0, has_special_char = 0;

int len = 0;
int is_valid = 1;

do
{
scanf("%c", &c);
len++;

if (len == 1 && !(c >= 'A' && c <= 'Z'))
{
printf("Invalid Password");
is_valid = 0;
break;
}
else if (len > 12)
{
printf("Invalid Password");

is_valid = 0;
break;
}
else if (c == ' ')
{
printf("Invalid Password");
is_valid = 0;
break;
}
else if (c >= '0' && c <= '9')
has_digit = 1;
else if (c == '$' || c == '#' || c == '&' || c == '%' || c == '@')

has_special_char = 1;
} while (c != '\n');
if (is_valid)
{
if (!has_digit)
printf("Invalid Password");
else if (!has_special_char)
printf("Invalid Password");
else if (len < 8)
printf("Invalid Password");

else
printf("\n%s enrolled successfully",userid[100]);
}

}




int main() {

int n,m;
printf("\nenter maximum no of users\n");
scanf("%d",&n);
printf("%d",n);

printf("Choose one of the options:\n1) Enroll\n2)Sign-in\n 3)Exit\n");
scanf("%d",&m);
printf("%d",m);
if(m==1) {
    enrollment();
}

else {
    printf("Exit");
    return 0;
}
 return 0;
}
