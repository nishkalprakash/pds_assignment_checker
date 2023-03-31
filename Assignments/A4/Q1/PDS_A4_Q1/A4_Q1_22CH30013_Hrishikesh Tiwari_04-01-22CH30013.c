/*
section 2
Roll no 22CH30013
Name : Hrishikesh Tiwari
Assignment no: 4
Description : assignment 4 question 1 about passwords

*/


#include<stdio.h>

int main()
{
    char e ;

    int tot=0 ;

    printf("Enter a password :");
    while(e!='\n')
    {
        scanf("%c",&e);
        if(e<'A')
           {

            printf("Invalid password\nFirst letter caps\n"); break; }
        else if(e=' ')
            {printf("INvalid password\nNo spaces allowed\n");break;}

           else if(e != '$' ||e != '#'||e != '&'||e != '%'||e != '@')
            {
               printf("Invalid password\n No special CHaracters yet input\n"); break ;
           }

               tot = tot + 1;

               if(tot<8 || tot > 12)
               {
                   printf("Invalid Password\nBecause no of characters b/w 8-12"); break ;
               }

     else printf("valid password\n");


        }
return 0;
}
