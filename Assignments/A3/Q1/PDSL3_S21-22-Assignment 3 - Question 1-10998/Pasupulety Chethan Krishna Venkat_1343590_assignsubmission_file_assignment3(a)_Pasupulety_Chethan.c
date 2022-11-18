/* Name   : Pasupulety Chethan Krishna Venkat
   Dept   : Computer science
   Roll no: 21CS30036
   Package: Code blocks
   Os     : windows
*/
#include<stdio.h>




//Function to get length of string
int length(char s[]){
    int res = 0;
    while(s[res] != '\0'){
        res++;
    }
    return res;
}

// Function to check if there is any substring in password which is equal to username
int check_substring(char password[], char username[], int len_user){
    int i, j;
    for(i=0, j=0; password[i] != '\0' && username[j] != '\0'; i++){
        if(password[i] == username[j]){
            j++;
        }
        else{
            j = 0;
        }
    }

    // if j == length of username that means we found a part of password string that is same as username
    if(j == len_user){
        return 1;
    }
    return 0;
}

int main(){
    // Assumed that the maximum entered username and password will not cross 1000
    char username[1000], password[1000];
    int i = 0, len_user, len_pass;

    //Taking the input
    printf("Username: ");
    scanf("%s", username);
    printf("Password: ");
    scanf("%s", password);

    // Getting the length of username and password
    len_user = length(username), len_pass = length(password);

    // Checking if password is equal to username or if it contains username in it
    if(len_pass >= len_user){
        // if username is a part of password then we print not acceptable
        if(check_substring(password, username, len_user)){
            printf("Not acceptable\n");
            return 0;
        }
    }

    // printing not acceptable and ending program if length of password doesnt satisfy conditions
    if(len_pass < 8 || len_pass > 15){
        printf("Not acceptable\n");
        return 0;
    }

    int lower_case = 0, upper_case = 0, special_char = 0, consecutive_digit = 0, ascii[128] ={0};
    while(password[i] != '\0'){
        // Finding the number of lower case characters
        if(password[i] - 'a' >= 0 && password[i] - 'a' < 26){
            lower_case++;
        }

        // Finding the number of upper case characters
        if(password[i] - 'A' >= 0 && password[i] - 'A' < 26){
            upper_case++;
        }

        //Finding the number of special characters
        if(password[i] == '$' || password[i] == '*' || password[i] == '+' || password[i] == '/' || password[i] == '#' || password[i] == '@' || password[i] == '<' || password[i] == '>' || password[i] == '?' || password[i] == '_' || password[i] == '!'){
            special_char++;
        }

        //Checking for consecutive digits, by storing the number of consecutive digit in a variable
        if(password[i] - '0' >= 0 && password[i] - '0' <= 9){
            consecutive_digit++;
        }

        //As soon as we get to a character which is not a digit we make consecutive_digit = 0
        else{
            consecutive_digit = 0;
        }

        //If at any point number of consecutive digit crosses 5 we print not acceptable
        if(consecutive_digit > 5){
            printf("Not acceptable\n");
            return 0;
        }

        //Storing the number of characters of each ascii character
        ascii[(int)password[i]]++, i++;
    }

    //if conditions on lower case, upper case and special characters are not satisfied
    if(lower_case < 1 || upper_case < 1 || special_char < 2){
        printf("Not acceptable\n");
        return 0;
    }

    //if there are characters which have occurred for more than 5 times
    for(i=0; i<128; i++){
        if(ascii[i] > 5){
            printf("Not Acceptable\n");
            return 0;
        }
    }

    // if the program still hasnt ended that means it satisfied all the conditions
    printf("Acceptable\n");
    return 0;
}
