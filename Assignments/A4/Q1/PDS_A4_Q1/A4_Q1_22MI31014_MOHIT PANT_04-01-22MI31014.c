/*section 2
roll no.: 22mi31014
name :MOhit Pant
question 1
Assignment No.:4*/
#include<stdio.h>
int main(){
    char p;
    int l=0,sp=1,n=0,b=1,spc=0;
    printf("Enter a password:\n");
    scanf("%c",&p);
    if(p>=65 && p<=90){
        b--;
    }



    while(p!='\n'){
            scanf("%c",&p);
            l++;
            if(p=='!' || p=='@' || p=='#' || p=='$' || p=='%' || p=='&' || p=='*' || p=='~'){
                    sp++;

            }

            if (p<=57 && p>=48){
                n++;

            }
            if(p==32){
                spc++;
            }


    }
    if(l<=8 || l>=12) printf("Invalid password\nPassword must be between 8 to 12 characters long\n\n");
    if(sp==1) printf("Invalid password\nPassword must have atleast one special character\n\n");
    if(n==0) printf("Invalid password\nPassword must have atleast one digit\n\n");
    if(b==1) printf("Invalid password\nPassword must start with an upper case letter\n\n");
    if(l>=8 && l<=12 && sp>1 && n>0 && b==0 && spc==0) printf("Password is valid");
    if (spc>0)printf("Invalid password\nspaces are not allowed in password\n\n");





return 0;
}
