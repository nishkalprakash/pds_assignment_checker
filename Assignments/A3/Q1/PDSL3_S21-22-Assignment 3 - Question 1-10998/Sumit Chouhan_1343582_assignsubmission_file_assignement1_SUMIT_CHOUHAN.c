#include<stdio.h>
int main()
{
    char USERNAME[15],PASSWORD[15],A[11]={'$','*','+','/','#','@','<','>','?','_','!'};
    int i,length,m,n,c;
    length=0;

    c=1;
    printf("Enter username=");
    scanf("%s",USERNAME);
    printf("Enter password");
    scanf("%s",PASSWORD);
    printf("username:%s\n",USERNAME);
    printf("password:%s",PASSWORD);

    for (i=0; PASSWORD[i]!= '\0'; i++)length++;


    for(m=0;m<length;m++)
    {
        for(n=0;n<11;n++)
            if(PASSWORD[m]==A[n])c++;

    }
    if ((c<2)) {printf("\n  NOT ACCEPTABLE CHOOSE ATLEAT TWO SPECIAL CHARACTER");}
    if(length<9){printf("\n NOT ACCEPTABLE ENTER ATLEAST EIGHT CHARACTER");}


    return 0;
}
