#include<stdio.h>
int main()
{
    char a;
    printf("Enter a password: ");
    int sum = 0;
    while(c!='\n'){
        scanf("%c",&a);
        if(a<'A')
        {
            printf("Invalid password :\n password must start with an upper case latter");
             if(a=='\n'){
                printf("Invalid password :\n space are not allowed in a password\n");
                break;
            }
            if(a!='$' || a!='#' || a!='&' ||a!='%' || a!='@'){
                printf("Invalid password ; \n password must have at leastone special character \n");
                break;
            }
            sum = sum+1;
            if(sum<=8 || sum>=12){
                printf("Invalid password ;\n Password must have atleast one digit \n");
                break;
            }
            else {
                printf("Valid password \n");
                break;
            }

        }

    }
    return 0;

}
