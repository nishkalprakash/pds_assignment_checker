/*
* Section-2
* Roll No : 22CS30056
* Name : Sumit Kumar
* Assignment No : 4
* Description :
*/
#include <stdio.h>
int main(){
    char c;
    int count=0;
    do{

        scanf("%c",&c);
        count=count+1;
        if (!((c>='A')&&(c<='Z'))){
         printf("Invalid Password:\n");
         printf("The password must start with an upper case letter. \n");
         break;
        }
        else if (!(c=='#')&&(c=='@')&&(c=='$')&&(c=='&')&&(c=='%')){
                 printf("Invalid Password:\n");
                 printf("The password must have at least one special character. \n");
                 break;

        }


        else if ((c==' ')){
                printf("Invalid Password:\n");
                printf("Spaces are not allowed in password.\n");
                break;

        }
        else if((count<8)&&(count>12)){
                printf("Invalid Password:\n");
                printf("The minimum number of characters is 8 and the maximum number of characters is 12. \n");
                break;

        }
        else   {
                printf("password is valid");
                break;


               }
    }while(c!='\n');

}
