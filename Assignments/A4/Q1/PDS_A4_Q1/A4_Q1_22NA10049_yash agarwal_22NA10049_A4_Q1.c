
/*
* Section 2
* Roll No : 22NA10049
* Name : Yash Agarwal
* Assignment No : 4
* Description : Program to find relevancy of a password
*/

#include <stdio.h>

int main()

{
    char c;

    int r1=0,r2=0,r3=0,r4=0,r5=0,count=0,flag=0; // temp variables to find the errors in the password according to the rules given

    do
    {
     scanf("%c",&c);

     if((c<65||c>90 )&& count==0)    // cecking if the first character is capital ot not
      r1++;

     if(c>47&&c<58)                  //checking if there is a number in the password or not
        r2++;

     if(c==32)                //looking for spaces in the passsword
        r3++;

     if(c==10)                          //looking for enter in the password
        break;

     if(c==36||c==35||c==38||c==37||c==64)    //looking for a special character in the password
        r4++;

     count++;    //counting the number of chracters


    }while(c!=10);  //loop breaks if ebter pressed

    if(r1>0)
    {
        printf("Password must start with an Upper case \n");   //if there is no capital in the start
        flag++;                                                // flag used to count the number of errors encountered
    }

    if(r2==0)
      {
          printf("Pasword must have at least one digit \n");   //if there is no digit in the character
          flag++;                                              // flag used to count the number of errors encountered
      }

    if(r3!=0)
        {
            printf("Spaces are not allowed in the password \n");   //if there are spaces
            flag++;                                                // flag used to count the number of errors encountered
        }

    if(r4==0)
        {
            printf("Password must have at least one special character \n");    //if there are 0 special characters
            flag++;                                                           // flag used to count the number of errors encountered
        }

    if(count<8 || count>12)
        {
            printf("Password must be between 8 and 12 character long \n");     // if the length of password is not sufficient
            flag++;                                                            // flag used to count the number of errors encountered
        }

    if(flag==0 )
        printf("Password is valid \n");        //when there are no errors we print that password is valid


    return 0;
}
