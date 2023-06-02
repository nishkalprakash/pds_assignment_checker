#include<stdio.h>
typedef struct{
char userID[max_userID_length];
char password[max_password_length];
}user;
 int is lowercase (char c){
 return c>= 'a' && c<= 'z';
 }
int is uppercase (char c){
return c>= 'a' && c<= 'Z';
}
int is number(char c){
return c>= '0' && c<= '9';
}
int is specialsymbol (char c){
return c=='~' || c=='!' || c=='@' || c=='#'|| c=='$'|| c=='%'||  c=='%'|| c=='&'|| c=='*';
 }
