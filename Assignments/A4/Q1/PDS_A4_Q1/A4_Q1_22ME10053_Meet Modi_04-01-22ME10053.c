// Section -2
// Roll No - 22ME10053
// Name :Meet Modi
// Assignment - 01
// Description -

#include<stdio.h>

int main()
{
 char next;
 int count=0;
 int flag=1;
 int flag1,flag2,flag3,flag4,flag5;
 printf("Enter the password :");
 do{
   scanf("%c",&next);
   count++;
   if(count==1){
    if(next>='A' && next<='Z')  continue;
    else{
    flag1=2;
    }
   }
   else if(next==' ') {
   flag2=3;
   }
   else if((next>'A'&& next<'Z') || (next>'a' && next<'z')) flag5=2;
   else flag4=4;
 } while(next !='\n');


    if(count<8 || count>12) printf("Invalid password :\n Password must be between 8 and 12.");
    else if(flag1==2) printf("Invalid password:\n Password must start with uppercase alphabet.");
    else if(flag2==3) printf("Invalid password:\n Spaces are not allowed in password");
    else if(flag4!=4)  printf("Invalid password. \n Password must contain special character or digit.");
    else if(flag == 1) printf("Valid password");



    return 0;
}
