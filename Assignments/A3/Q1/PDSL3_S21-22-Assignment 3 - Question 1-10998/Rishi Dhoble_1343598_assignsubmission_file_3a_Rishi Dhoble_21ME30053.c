/* Name- Rishi Dhoble
Roll no.- 21ME30053
Department- Mechanical Engineering
Package- Code blocks
Question-3a
*/

#include<stdio.h>

int string_len(char a[]) {

    int i;                                          //length of string
    for (i=0; a[i]!='\0'; i++);

    return i;
}

int comp_string(char p[], char q[]) {

    int flag=0, i=0;                                      //flag if string not same

    if (string_len(p) == string_len(q) ) {
        while (p[i]!='\0' && q[i]!='\0') {

        if (p[i] != q[i]) {flag = 1; break;}
        i++;
    } }

    else {flag=1;}

    if (flag==0) {printf("password is same as username, enter again\n");}
    else {printf("Satisfies first criteria\n");}

}



int lower_string(char p[]) {

    int i, flag=0;
    for (i=0; p[i]!='\0'; i++) {
        if (p[i] >= 'a' && p[i] <= 'z') {flag=1; break;}
        else {flag=0;}
    }

    if (flag=1) {printf("satisfies second criteria\n");}
    else {printf("must contain lower case\n");}
}


int upper_string(char p[]) {

    int i, flag=0;
    for (i=0; p[i]!='\0'; i++) {
        if (p[i] >= 'A' && p[i] <= 'Z') {flag=1; break;}
        else {flag=0;}
    }

    if (flag=1) {printf("satisfies second criteria\n");}
    else {printf("must contain upper case\n");}


}

int special_string(char p[]) {

    int i, flag=0;

    for (i=0; p[i] != '\0'; i++) {
        if (p[i] == '!' || p[i] == '$' || p[i] == '*' || p[i] == '+' || p[i] == '/' || p[i] == '#' || p[i] == '@' || p[i] == '<' || p[i] == '>' || p[i] == '?' || p[i] == '_') {
            flag=1; break;}
        else {flag=0;}
    }

    if (flag=1) {printf("satisfies third criteria\n");}
    else {printf("must contain special charecter\n");}
}

int consecutive_alpha(char p[]) {

    int i, rep, j, flag;

    for(i=0; i < string_len(p); i++) { rep=1;

        for (j=1+1; j < (string_len(p) - 1); j++) {
            if (p[i] == p[j]) {rep++;}
        }

        if (rep>5) {flag=1;  break;}
        else {flag=0;}
    }

    if (flag=1) {printf("must not have 5 consecutive same character\n");}
    else {printf("satisfies 4th criteria\n");}
}


int consecutive_digit(char p[]) {

    int i, rep, j, flag;

    for (i=0; i < string_len(p); i++) {rep=1;

        if (p[i] >= '0' && p[i] <= '9') {
            for (j=0; j < string_len(p) - 1; j++) {
                if (p[j] >= '0' && p[j] <= '9') {rep++;}
            }
        }
        if (rep>5) {flag=1;  break;}
        else {flag=0;}
    }

    if (flag=1) {printf("must not have 5 consecutive same character\n");}
    else {printf("satisifes 4th criteria\n");}
}



int main() {

    char username[100], password[100];

    printf("enter username:");
    scanf("%s", username);
    printf("\n");

    printf("enter password:");
    scanf("%s", password);
    printf("\n");

    comp_string (username, password);                               //checking the criterias


    if (string_len(password) > 7 && string_len(password) < 16) {printf("second criteria satisfied\n");}
    else {printf("password length must be 8-15\n");}

    lower_string(password) ; upper_string(password); special_string(password);

    consecutive_alpha(password);  consecutive_digit(password) ;


return 0;
}
