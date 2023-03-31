/*
* Section 2
* Roll No : 22CY10036
* Name : Neeraj
* Assignment No : 4
* Description : to check password
*/
#include<stdio.h>
    int main()
    {
        char x;
        int length;
        length++;

        do{
            scanf("%c",&x);
            if (!((x>='A')&&(x<='Z'))){
                printf("invalid password\n");
                printf("the password must start with upper case\n");
                break;
              }
               if(x ==' '){
                printf("invalid password\n");
                printf("the password must not contain space\n");
                break;
              }
             if ((x>'9')&&(x<'0')) {
                printf("invalid password\n");
                printf("the password must contains atleast one digit\n");
                break;
            }
             if((length<'8')&&(length>'12')){
                printf("invalid password\n");
                printf("password must have minimum 8 and maximum 12 characters");
                break;
            }
             if((x !='#') || (x != '&') || (x != '%') || (x != '@') || (x != '$')){
                printf("invalid password\n");
                printf("password must contain at least one special character\n");
                break;
            }
            else{
                printf("valid password\n");
                break;
            }

         } while(x!= '\n');
    }

