/*
* Section 2
* Roll No.: 22NA30019
* Name : Kavita Thakur
* Assignment No.: 4
* Description : Setting passwords by taking input from user.
*/
#include<stdio.h>
    int main(){
       printf("Enter a password:");
       char ch;
       //ASCII values are being used
       int PR1=0,PR2=0,PR3=0,PR4=0,counter=0;   //PR stands for password rule

    do{
        scanf("%c",&ch);
        if((ch<'A' || ch>'Z')&& counter==0 ){  //rule 1 first letter uppercase
            PR1++;
        }
        if(ch>=48 && ch<=57){    //rule 2 atleast one digit
            PR2++;
        }
        if(ch==32){             //rule 3 no space character are used
            PR3++;
        }
        if(ch==36 || ch==35 || ch==38 || ch==37 || ch== 64){  //rule 4 atleast one of the special character @ # $ % &
            PR4++;
        }

        counter++;
    }while(ch!=10); //when user press enter no more inputs will be taken from user



        if(PR1==1||PR2==0||PR3>1||PR4==0||(!(counter<=12 && counter>=8))){
            printf("invalid password\n");
        }

        if(PR1==1){
            printf("password must start with an uppercase letter\n");
        }
        if(PR2==0){
            printf("password must have atleast one digit\n");
        }
        if(PR3>1){
            printf("password must start with an uppercase letter\n");
        }
        if(PR1==1){
            printf("spaces are not at all allowed in password\n");
        }
        if(PR4==0){
            printf("password must contain atleast one special character\n");
        }
        if(!(counter<=12 && counter>=8)){
            printf("password must contain 8 to 12 letters\n");
        }

        if(!(PR1==1||PR2==0||PR3>1||PR4==0||(!(counter<=12 && counter>=8))))
        {
             printf("valid password\n");

        }
    return 0;
}
