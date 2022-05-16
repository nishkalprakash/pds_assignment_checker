/* Name			: Kshitij Das
   Class No. 	: 2
   Roll No.		: 21CS10039
   Department	: CSE
   Package		: VS Code
   OS			: MS Windows 11
   */

#include <stdio.h>

//gives the position of null zero hence lenght of string
int len(char B[20]){
    int j;
    for(j = 0; j < 20; j++){
        if(B[j] == '\0'){
            return j;
        }
    }
}

//this functions checks if username is a part of password
// A array is username and B password
int check_u(char A[20], char B[20]){
    int i,j,count;
    count = 0;
    int x = len(A);
    int y = len(B);
    char c = A[0];
    for(i = 0; i < y; i++){
        //matching initial character
        if(B[i] == c){
            for(j = 1; j < x; j++){
                if(B[i + j] == A[j]){
                    count++;
                    continue;
                }
                else{
                    count = 0;
                    break;
                }
            }
        }
    }
    if(count == x -1 ){
        return 0
    }
    return 1;
}

//this functions checks for character types
int char_type(char B[20]){
    int x; x = len(B);
    int i;
    int flag, flag1,flag2,flag3;
    flag = flag1 = flag2 = flag3 = 0;
    //lowercase
    for(i = 0; i < x; i++){
        if((int) B[i] >= 97 && (int) B[i] <= 122){
            flag1++;
            break;
        }
    }
    //uppercase
    for(i = 0; i < x; i++){
        if((int) B[i] >= 65 && (int) B[i] <= 90){
            flag2++;
            break;
        }
    }
    //special characters
    for(i = 0; i < x; i++){
        if(B[i] == '$'||B[i] == '*'||B[i] == '='||B[i] == '/'||B[i] == '#'||B[i] == '@'||B[i] == '<'||B[i] == '>'||B[i] == '?'||B[i] == '_'||B[i] == '!'){
            flag++;
        }
        if(flag == 2){
            flag3++;
            break;
        }
    }
    if(flag1 == 1 && flag2 == 1 && flag3 == 1){
        return 1;
    }
    return 0;
}

//this function checks length
int check_len(int l){
    if(l >= 8 && l <= 15){
        return 1;
    }
    return 0;
}


//this functions tells whether the password contains 5 consecutive digits
int digits(char B[20]){
    int i;
    int x = len(B);
    for(i = 0; i < x - 4; i++){
        if((int) B[i] >= 48 && (int) B[i] <= 57){
            if((int) B[i+1] >= 48 && (int) B[i+1] <= 57){
                if((int) B[i+2] >= 48 && (int) B[i+2] <= 57){
                    if((int) B[i+3] >= 48 && (int) B[i+3] <= 57){
                        if((int) B[i+4] >= 48 && (int) B[i+4] <= 57){
                            return 0;
                        }
                    }
                }
            }
        }
    }
    return 1;
}



//this funtion checks for repeated characters
int charac(char B[20]){
    int i,j,count, max_count;
    int x;
    x = len(B);
    max_count = 0;
    count = 0;
    for(i = 0; i < x; i++){
        int ref = B[i];
        for(j = i + 1; j < x; j++){
            if (B[j] == B[i]){
                count++;
            }
        }
        if(count > max_count){
            max_count = count;
        }
        count = 0;
    }
    if(max_count > 5){
        return 0;
    }
    return 1;
}

int main(){
    //asking the user for username and password
    char u_n[20];
    char pw[20];

    printf("username: ");
    scanf("%s",u_n);
    printf("\npassword: ");
    scanf("%s",pw);

    int length;
    length = len(pw);
    if(check_u(u_n,pw) && char_type(pw) && digits(pw) && check_len(length) && charac(pw)){
        printf("\nValid Password");
    }
    else{
        printf("\nNot a Valid Password");
    }
    
    return 0;
}