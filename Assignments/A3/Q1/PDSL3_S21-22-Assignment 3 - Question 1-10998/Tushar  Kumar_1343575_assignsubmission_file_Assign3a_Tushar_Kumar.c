/*
Tushar Kumar
21CH30035
Chemical Engineering
Section 3
Code Blocks
Windows 10
*/
#include <stdio.h>

int stringLength(char *str)
{
    int i=0;

    while(str[i] != '\0') i++;

    return i;
}

int main(){
    char username[16];
    char password[16];
    printf("username : ");
    scanf("%s",username);
    printf("password : ");
    scanf("%s",password);
    int length=stringLength(password);
     //first check password length
     if(length>15||length<8){
         printf("not acceptable");
         return 0;
     }

    int no_of_upper=0;
    int no_of_lower=0;
    int no_of_special=0;
    int value=0;
    for(int i=0;i<length;i++){
        value=password[i];
        if(97<=value&&value<=122){
            no_of_lower++;
        }
        if(65<=value&&value<=90){
            no_of_upper++;
        }
        if(password[i]==36||password[i]==42||password[i]==43||password[i]==47||password[i]==35||password[i]==64||password[i]==60||password[i]==62||password[i]==63||password[i]==95||password[i]==33){
            no_of_special++;
        }
    }
   if(no_of_lower==0||no_of_upper==0||no_of_special<2){
        printf("no acceptable");
        return 0;
    }
    int digits=0;
    int exceeded=0;
    int repeated_char=0;

    for(int i=0;i<length;i++){
        if(48<=password[i]&&password[i]<=57){
            digits++;
            if(digits>5){
                exceeded++;
            }
        }
        else{
            digits==0;
        }
    }
   if(exceeded>0){
        printf("not acceptable");
        return 0;
    }


    int no_of;
    int trouble=0;
    for(int i=0;i<length;i++){
        no_of=0;
        for(int j=0;j<length;j++){
            if(password[i]==password[j]){
                no_of++;
            }
        }
        if(no_of>5){
            trouble=1;
            break;
        }
    }
    if(trouble>0){
        printf("not acceptable");
        return 0;
    }


    int j=0;
    trouble=0;
    int user=stringLength(username);
    for(int i=0;i<length;i++){
        if(password[i]==username[j]){
            j++;
            if(user==j){
                trouble++;
                break;
            }
        }
        else{
            j=0;
        }
    }
    if(trouble>0){
        printf("not acceptable");
        return 0;
    }
    else{
        printf("acceptable");
        return 0;
    }
}
