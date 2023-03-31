/*
Section-2
Roll no.- 22EC10087
Name- Vedant Katole
Assignment No- 4
Description-
*/

#include<stdio.h>

void main()
{
    char c, first_letter;
    int flag_dig = 0, flag_splchar = 0, flag_space = 0, count=0;

    printf("enter password: ");
    scanf("%c", &first_letter);//reading the first charecter

    do{
        scanf("%c", &c);         //reading the rest of the charecters
        count++;                 //counting no of characters

        if(c>='0' && c<='9'){   //checking for any digit
            flag_dig += 1;
        }

        if(c ==' '){           // checking for any space
            flag_space += 1;
        }

        if(c=='$' || c=='#' || c=='&' || c=='%' || c=='@'){
            flag_splchar += 1;   //checking for any special character
        }

    }while(c != '\n');

    if(first_letter < 'A' || first_letter > 'Z'){
        printf("Invalid Password:\nPassword must start with an upper case letter\n");
    }

    else if(count<7 || count>11){
         printf("Invalid Password:\nPassword must be between 8 and 12 charecters long\n");
    }

    else if(flag_space != 0){
        printf("Invalid Password:\nSpaces are not allowed in password\n");
    }

    else if(flag_splchar == 0){
        printf("Invalid Password:\nPassword must have at least one special character\n");
    }

    else if(flag_dig == 0){
        printf("Invalid Password:\nPassword must have at least one digit\n");
    }

    else{
        printf("Password is valid");
    }
}
