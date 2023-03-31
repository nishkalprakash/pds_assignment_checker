/*Name= Rajpriya Rani
 Sec-2
 Roll number- 22CS10057
 Assignment-1
 description-password program
 */
 #include <stdio.h>
 void main()
 {
     char ch;
     int c=0,flag=0,space=0,d=0,s=0;
     /* flag for upper case, space for space character,d dor digit and s for special character*/

     printf("Enter password:  ");
     while(1)
     {
         ch=getchar();
         c++;
         if(c==1)
         {
             if((ch<='A')&&(ch>='Z'))       //upper case letter check
             {  flag=1;
                printf("hi");
             }
         }
         else if(ch==' ')                   //space character check
            space++;
         else if((ch>='0')&&(ch<='9'))      //digit check
            d++;
         else if((ch=='$')||(ch=='#')||(ch=='&')||(ch=='%')||(ch=='@'))         //Special character check
            s++;
         else if(ch=='\n')
            break;

    }

    if(space>0)
    {
        printf("Invalid password");
        printf("\n Spaces are not allowed in password");
    }
    else if(flag==1)
    {
        printf("Invalid password");
        printf("\n Password must start with an upper case letter");
    }
    else if(d==0)
    {
        printf("invalid password");
        printf("\n Password must have atleast one digit");
    }
    else if(s==0)
    {
        printf("Invalid password");
        printf("\n Password must have atleast one character");
    }

    else if((c<9) || (c>13))       /* limit is shifted by 1 because the loop is
                                        executed one time extra*/
    {
        printf("Invalid password");
        printf("\n Password must be between 8 and 12 characters long");
    }
    else
        printf("Password is valid");

 }
