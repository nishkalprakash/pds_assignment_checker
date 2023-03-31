#include<stdio.h>

/*
* Section 2
* Roll No : 22PH10040
* Name : Sagarneel Ghoshal
* Assignment No : 4
* Description : Program to check for the correct password
*/

int main(){
    char c;     //declaring the character
    int R1=0,R2=0,R3=0,R4=0,counter=0;   //declaring variables required
    printf("Enter a password: ");
    do{
        scanf("%c",&c);                  //taking in the password
        if((c<65||c>90) && counter==0){    //updating variables declared to get the laws violated
            R1++;
        }
        if(c>=48 && c<=57){
            R2++;
        }
        if(c==32){
            R3++;
        }
        if(c==36 || c==35 || c==38 || c==37 || c==64){
            R4++;
        }


        counter++;

    }while(c!=10);                      //condition for ending the loop

    if(R1==1){                              //printing reasons for invalid password
        printf("Invalid Password\n");
        printf("Password must start with an upper case letter");
    }

    else if(R2==0){
        printf("Invalid Password\n");
        printf("Password must have atleast one digit.\n");
    }
    else if(R3>0){
        printf("Invalid Password\n");
        printf("Spaces are not allowed in password.\n");}
    else if(R4==0){
        printf("Invalid Password\n");
        printf("Password must have atleast one special character.\n");
    }
    else if(counter<8 || counter>12){
        printf("Invalid Password\n");
        printf("Password must be 8 to 12 characters long");
    }
    else{printf("Password is valid");}        //if all rules are followed, printing the required message


    return 0;



}
