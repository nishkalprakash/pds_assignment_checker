/*
section - 2
roll no: 22ME10072
name: Samares Malik
assignment - 04
description
*/
#include<stdio.h>
int main(){
    int s=0,p=0,k,valid=0;
    char pass;
    printf("Enter the password:\n");
    /*checking for each character*/
    do{
        scanf("%ch",&pass);
        s++;
        //checking for validation of password
        if(s==1 &&!(pass>'A'&&pass<'Z')){
            printf("\nInvalid password , first letter should be capital");
            break;
        }
        if(pass>='0'&&pass<'9'){
            p = 1;
        }
        if((pass='@')||(pass=='#')||(pass='$')||(pass='%')){
            printf("\nInvalid password , special character is not allowed");
            break;
        }
        if(pass='/0'){
            printf("\nInvalid password , spaces are not allowed");
            break;
        }

    }while(pass!='\n');
    if(p==0){
        printf("\nInvalid password one digit should be there");
    }
    //password length checking
    if (s<8){
        printf("\nPassword too short");
    }
    if(s>12){
        printf("\nPassword too long");
    }


    return 0;



}
