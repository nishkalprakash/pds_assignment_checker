/*
* Section 2
* Roll No.: 22PH10021
* Name : Kakade Yash Ashok
* Assignment No : 4
* Description : Program to check for the correct password
*/

#include <stdio.h>

int main()
{
    int i1=0,i2=0,i3=0,i4=0,s1=0; //Variable declared
    char t;

    printf("Enter a password: "); //Enter password
   do
   {
       scanf("%c",&t);
       if ((t<65||t>90) && s1==0){   //For starting letter to be uppercase
        i1++;
       }

       if (t<=57 && t>=48){    //Atleast one digit in password
        i2++;
       }

       if (t==32){    //Space shouldnt be in password
        i3++;
       }

       if (t==36 || t==35 || t==38 || t==37 || t==64){    //Atleast one special character in password
        i4++;
       }


       s1++;      //To count how many letters in password
}

    while(t!=10);
    if(i1==1){
        printf("Invalid password\n");
        printf("Password must start with an uppercase letter\n");
    }

    else if(i2==0){
        printf("Invalid password\n");
        printf("Password must have atleast one digit\n");
        }

    else if(i3!=0){
        printf("Invalid password\n");
        printf("Spaces are not allowed in password\n");
        }

    else if(i4==0){
        printf("Invalid password\n");
        printf("Password must have atleast one special character\n");
        }

    else if(s1<8 || s1>12){
        printf("Invalid password\n");
        printf("Password must be 8 to 12 character long\n");
        }

    else{printf("Password is valid");}

        return 0;
}
