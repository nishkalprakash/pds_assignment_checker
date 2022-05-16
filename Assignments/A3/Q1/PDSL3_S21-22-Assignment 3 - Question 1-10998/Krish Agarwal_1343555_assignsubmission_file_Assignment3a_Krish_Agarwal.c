/*Name- Krish Agarwal
Roll No.- 21NA10018
Department- Ocean Engineering and Naval Architecture
Section- 3
IDE-code blocks
*/
#include <stdio.h>
int main()
{
    int l1=0,l2=0,chcount=0,lc=0,uc=0,i,j,spcount=0;
    char user[50];
    char pw[15];
    char sp[11]={'$', '*', '+', '/', '#', '@', '<', '>', '?', '_', '!'};
    printf("Username: ");
    user[l1]=getchar();
    while(user[l1]!='\n')// Taking Input
    {
        l1++;
        user[l1]=getchar();
    }
    user[l1]='\0';
    fflush(stdin);
    printf("Password : ");//Taking password
    pw[l2]=getchar();
    if(pw[l2]>'a'&&pw[l2]<'z')
    lc++;
    if(pw[l2]>'A'&&pw[l2]<'Z')
    uc++;
    for(i=0;i<11;i++)
    {
        if(pw[l2]==sp[i])
        spcount++;
    }
    while(pw[l2]!='\n')
    {
        l2++;
        pw[l2]=getchar();

        if(pw[l2]>'a'&&pw[l2]<'z')
        lc++;
        if(pw[l2]>'A'&&pw[l2]<'Z')
        uc++;
        for(i=0;i<11;i++)
        {
            if(pw[l2]==sp[i])
            spcount++;
        }
    }
    pw[l2]='\0';
    if(l2>15)//Checking Cases
    {
        printf("Not acceptable.\nThe maximum length of password should not exceed 15.");
        return 0;
    }
    else if(l2<8)
    {
        printf("Not acceptable.\nThere should be atleast 8 characters.");
        return 0;
    }
    else if((lc<1) ||(uc<1)||(spcount<2))
    {
        printf("Not acceptable.\nIt should contain at least one lowercase, one uppercase, and at least two characters from the following: $, *, +, /, #, @, <, >, ?, _, !");
        return 0;
    }
    for(i=0;pw[i]!='\0';i++)
    {
        for(j=0;j<l1;j++)
        {
            if(pw[i+j]!=user[j])
            break;
        }
        if(j==l1)
        {
            printf("Not acceptable.\nUsername is present in it.");
            return 0;
        }
    }
    int rep=1;
    for(i=0;i<l2;i++)
    {
        for(j=i+1;j<l2-1;j++)
        {
            if(pw[i]==pw[j])
            rep++;
        }
        if(rep>5)
        {
            printf("Not Acceptable.\nMore than 5 same characters or digits present.");
            return 0;
        }
        rep=1;
    }
    printf("Acceptable.");
    return 0;
}