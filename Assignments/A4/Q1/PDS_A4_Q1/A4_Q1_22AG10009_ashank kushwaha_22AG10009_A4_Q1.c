/*
SECTION:2
ROLL NO:22AG10009
NAME:ASHANK KUMAR KUSHWAHA
ASSIGNMENT NO: 4
DESCRIPTION:CHECKING PASSWORD
*/
#include <stdio.h>
int main(){
    /*declaration of variables
    e1 to e5 for checking respective errors
    count to check length
    */
    int e1=0,e2=0,e3=0,e4=0,e5=0,count=0;
    //loop to get characters using getchar function
    while (1){
        char c;  //variable to work with single character one at a time
        c=getchar();  //input of variable
        count++;     //iterating length

        /*TESTING CONDITIONS*/

        //FIRST LETTER UPPERCASE
        if (count==1) {
            if ((c>='A')&&(c<='Z')) e1=1;
        }

        //DIGITS BETWEEN O TO 9
        if ((c>='0')&&(c<='9')) e2=1;

        //SPACE
        if (c==' ') e3=1;

        //SPECIAL CHARACTERS
        if ((c=='$')||(c=='#')||(c=='&')||(c=='%')||(c=='@')) e4=1;

        /*TO BREAK OUT OF LOOP ON RETURN*/
        if (c=='\n'){
                break;
        }

        /*OUTPUT*/
        }
        /*INCORRECT PASSWORD STATEMENTS*/
        if ((e1==0)||(e2==0)||(e3==1)||(e4==0)||(e5==1)) printf("INVALID PASSWORD\n");
        if (e1==0) {
            printf("Password must start with upper case letter\n");

        }
        if (e2==0){
            printf("Password must have at least one digit\n");

        }
        if (e3==1){
            printf("Spaces are not allowed\n");

        }
        if (e4==0){
            printf("Password must have a special character from $,#,&,%,@\n");

        }
        if ((count>13)||(count<9)){
            e5=1;
            printf("Password must be between 8 and 12 characters\n");

        }

        /*VALID PASSWORD STATEMENT*/
        if ((e1==1)&&(e2==1)&&(e3==0)&&(e4==1)&&(e5==0)){
            printf("PASSWORD IS VALID\n");
        }


    }



