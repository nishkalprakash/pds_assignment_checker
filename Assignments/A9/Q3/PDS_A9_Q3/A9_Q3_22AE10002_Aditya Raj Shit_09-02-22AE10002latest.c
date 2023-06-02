#include<stdio.h>
#define MAX 100


typedef struct
{
    char userID[MAX];
    char password[MAX];
}User;

void enrolment()
{
    int upper=1;            //upper=1 means password starts with upper case letter.
    int flag=0;             //using flag to check if the first letter is uppercase or not
    int count2=0;            //counting number of characters.
    int space=0;            //counting number of spaces.
    int special=0;          //no of special characters.
    int digit=0;            //no of digits.


    User u;
    int count=0;
    printf("Enter user ID: ");
    //scanf("%s",&(*u.userID));

    do{
        scanf("%c",&(u.userID[count]));
        count++;
    }while((u.userID[count-1]!='\n') && (u.userID[count-1]!=' ') && count<MAX) ;

    /*for(int i=0;u.userID[i]!='\0';i++){
        printf("%c",u.userID[i]);
    }*/

    printf("Set password: ");
    //int count2=0;

        do{
        scanf("%c",&u.password[count2]);
        if(count2==0){                   //checking first letter
            if(u.password[count2]>=65 && u.password[count2]<=90){
                flag=1;
                //count++;
            }

        }

        if(flag==1){                //moving ahead if the first letter is uppercase
                if(u.password[count2]=='$' || u.password[count2]=='#' || u.password[count2]=='&' || u.password[count2]=='%' || u.password[count2]=='@'){
                    special++;
                }

                else if(u.password[count2]>=48 && u.password[count2]<=57){       //Checking if the input is a digit or not via ASCII values------ASCII value of 0=48 and 9=58
                    digit++;
                }

                else if(u.password[count2]==32){          //ASCII value of space
                    space++;
                    break;
                }

        }

        else{
            upper=0;            //setting upper to 0 as first letter is small.
            break;
        }
        count2++;
    }while(u.password[count2]!='\n');         //running till user hits enter.

    if(special==0 || digit==0){
        printf("Invalid password.");
    }


}

int main()
{
    //enrolment();

    int n;
    printf("Enter max number of users: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Choose one of the options-\n");
        printf("    1. Enrol\n");
        printf("    2. Sign-in\n");
        printf("    3. Exit\n");

        int choice;
        scanf("%d",&choice);
        if(choice==1){
            enrolment();
        }
    }


}

