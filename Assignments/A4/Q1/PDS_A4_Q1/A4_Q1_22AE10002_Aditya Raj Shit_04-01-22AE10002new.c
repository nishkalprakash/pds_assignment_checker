/*
* Section 2
* Roll No : 22AE10002
* Name : Aditya Raj Shit
* Assignment No : 1
* Description : Program to detect an incorrect type of password
*/

#include<stdio.h>

int main(){
    char pass;
    int upper=1;            //upper=1 means password starts with upper case letter.
    int flag=0;             //using flag to check if the first letter is uppercase or not
    int count=0;            //counting number of characters.
    int space=0;            //counting number of spaces.
    int special=0;          //no of special characters.
    int digit=0;            //no of digits.

    printf("Enter a password: ");   //taking user input
    do{
        scanf("%c",&pass);
        if(count==0){                   //checking first letter
            if(pass>=65 && pass<=90){
                flag=1;
                //count++;
            }

        }

        if(flag==1){                //moving ahead if the first letter is uppercase
                if(pass=='$' || pass=='#' || pass=='&' || pass=='%' || pass=='@'){
                    special++;
                }

                else if(pass>=48 && pass<=57){       //Checking if the input is a digit or not via ASCII values------ASCII value of 0=48 and 9=58
                    digit++;
                }

                else if(pass==32){          //ASCII value of space
                    space++;
                    break;
                }

        }

        else{
            upper=0;            //setting upper to 0 as first letter is small.
            break;
        }
        count++;
    }while(pass!='\n');         //running till user hits enter.



    if(upper==0){           //first letter is lowercase.
        printf("\nInvalid Password:\nPassword must start with an upper case letter.\n");
    }

    else if(digit==0){      //0 digits are there.
        printf("\nInvalid password:\nPassword must have at least one digit.\n");
    }

    else if(count<8 || count>12){ //checking number of characters.
        printf("\nInvalid password:\nPassword must be between 8 and 12 characters long.\n");
    }

    else if(special==0){        //checking special characters.
        printf("\nInvalid password:\nPassword must have at least one special character.");
    }

    else if(space==1){          //checking if space is there.
        printf("\nInvalid password:\nSpaces are not allowed in password.\n");
    }

    else{
        printf("\nPassword is valid.\n");
    }
    return 0;
}
