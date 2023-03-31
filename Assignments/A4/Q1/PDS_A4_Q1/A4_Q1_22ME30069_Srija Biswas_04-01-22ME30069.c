//Section 2
//Roll No.-22ME30069
//Name-Srija Biswas
//Assignment-4
//Description:
#include<stdio.h>
int main()
{
    int k=0,j,c=0,d=0,e=0,f=0,g=0,h=0,i=0;
    char ch='A';
    printf("Enter a password:\n");
    while(ch!='\n')//loop runs until it encounters next line
    {
        scanf("%c",&ch);
        if(i==1)
        {

            if(ch>='A' && ch<='Z')
                c++;
            i=0;
            // goto line;
        }

        if(ch!='0' || ch!='1' || ch!='2' || ch!='3' || ch!='4' || ch!='5' || ch!='6' || ch!='7' || ch!='8' || ch!='9')
            d++;
        //goto line;

        if(ch==' ')
        {
            e++;
            //goto line;
        }
        if(ch=='$' || ch=='#' || ch=='&' || ch=='%' || ch=='@')
        {
            f++;
            //goto line;
        }
        if(ch=='\n' && i<8)
        {
            g++;

        }

        if(i>=12)
        {
            k++;


        }
    }
    if(c!=0)
    {
        printf("Invalid Password\n");
        printf("Password must start with an Upper Case letter");
    }
    else if(d==0)
    {
        printf("Invalid Password\n");
        printf("Password must have at least one digit");
    }
    else if(e!=0)
    {
        printf("Invalid Password\n");
        printf("No space is allowed");
    }
    else if(f==0)
    {
        printf("Invalid Password\n");
        printf("There must be at least one special character");
    }
    else if(g!=0)
    {
        printf("Invalid Password\n");
        printf("Password must be between 8 and 12 characters");
    }
    else if(k!=0)
    {
        printf("Invalid Password\n");
        printf("Password must be between 8 and 12 characters");
    }
    else
        printf("Password is valid");

    return 0;
}
