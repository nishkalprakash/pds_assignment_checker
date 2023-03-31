#include<stdio.h>
/*
   sec-2
   Assignment no.- 4
   Roll no- 22IE10035
   Name- Roctotpal Sandilya
   Que no.- 1
*/

int main(){
char c;
int digit=1, chr=1,flag=1,check=1,space=0,upper=0,i;
printf("Enter a password: ");
while(1){
    i++;
    c= getchar();
    if(flag){
        if(c<65 || c>=97) upper=1;

        flag=0;
    }
    if(c==' ') space=1;
    if(c=='0'|| c=='1'||c=='2'||c=='3'||c=='4'||c=='5'||c=='6'||c=='7'||c=='8'||c=='9') digit=0;
    if(c=='$'||c=='#'||c=='&'||c=='%'||c=='@') chr=0;
    if(c=='\n') break;
}
if(chr||space||upper||digit||i<8||i>12){
    printf("Invalid Password\n");
    if(chr) printf("Password must contain special character\n");
    if(digit) printf("Password must contain a digit\n");
    if(i<8 || i>12) printf("Password must be between 8 and 12 characters long\n");
    if(space) printf("Spaces are not allowed in password\n");
    if(upper) printf("Password must start with upper case letter\n");
}
else printf("Password is valid");


return 0;
}
