#include<stdio.h>
int main(){
char password;
printf("Enter a password:\n");
scanf("%c",&password);
for(int counter=8;counter<=12;counter++){
if(password>'A'&&password<'Z')
        {
        printf("valid password le\n");
        break;
}    else{
        printf("Invalid password:password must start with an upper case letter.");
        break;
    }



   if(password>0){
        printf("valid password di\n");
        break;
   }
   else{
       printf("Invalid password:password must have at least one digit.");
       break;
   }
        if(password==' ');{
   printf("Invalid password:spaces are not allowed in password");
   break;
        }

    if(password=='$'||password=='#'||password=='&'||password=='%'||password=='@'){
            printf("valid password sp");
            break;
    }
    else{
        printf("Invalid password:password must have at least one special character.");
        break;
    }
}






return 0;
}

