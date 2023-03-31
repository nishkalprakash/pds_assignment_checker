#include<stdio.h>

int main(){
char c;
c='A';
int U=0, d=0, space =0, spchar=0;
/* U is set to 0 initially and its value is change to one when*/

int counter = 0;
while(c!='\n')
{
    scanf("%c", &c);

    if(c>= 'A' && c<= 'Z')
        U =1;

    if(c==" ")
    {
        space = 1;
    }

    if(c=='$' || c=='#' || c=='&' || c=='%' || c=='@' )
    {
        spchar=1;
    }

    if(c==0 || c==1 || c==2 || c==3 || c==4 || c==5 || c==6 || c==7 || c==8 || c==9 )
    {
        d=1;
    }
    counter++;
}



if(U==1)
    {
        printf("\n In valid Password: \n Password must start with upper case letter. ");

    }


if(d==1)
{
    printf("\n Invalid Password: \n Password must have atleast one digit");

}


if(space==1)
{
    printf("\n Invalid password: \n Passwords do not have spaces");

}


if(spchar==1)
{
    printf("Imvalid password: \n Password must have atleast one special character");

}


if(counter<8 || counter>12)
    {
        printf("\n Password must be between 8 and 12 ");
    }
return 0;
}
