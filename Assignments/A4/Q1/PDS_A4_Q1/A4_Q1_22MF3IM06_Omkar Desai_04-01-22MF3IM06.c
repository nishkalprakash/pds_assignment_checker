/*
sec2
name- Omkar Dilip Desai
Roll no - 22MF3Im06
q. no-1
description- To write a programm for password input*/






#include<stdio.h>

int main()
{
    int i=0,space,spchar, integer;
    char c;

    printf("Enter the password\n");
    do
    {
        scanf("%c",&c);
        i++;
        if(c==' ')
        {
            space=100; /* space=100 it just for my convinence*/
        }
        if(((c=='$')||(c=='@')||(c=='#')||(c=='%')||(c=='&')))
        {
            spchar=150; /* space=100 it just for my convinence*/
        }
        if(((c=='1')||(c=='2')||(c=='3')||(c=='4')||(c=='5')||(c=='6')||(c=='7')||(c=='8')||(c=='9')||(c=='0')))
        {
            integer=250; /* space=100 it just for my convinence*/
        }

        switch(i)
        {
        case 2:
            if(c<'A'|| c>'Z')
            {
                printf("Invalid password: First input should upper case\n");


            }

        }
    }
    while(c!='\n');
    printf("your password is of %d character\n",i);

    if(i<=8 || i>13)
    {
        printf("Invalid password: must between 8 to 12 input\n");
    }




    if(space==100)
    {
        printf("Invalid password: space not allowed\n");

    }
    if(spchar!=150)
    {
        printf("Invalid password: atleast one special charater needed\n");

    }
    if(integer!=250)
    {
        printf("Invalid password: at least one digit should include\n");

    }
    if((case 2) &&(integer!=250) && (spchar!=150) && (space==100) && (i>=8 || i<13))
       printf("valid");


    return 0;
}
