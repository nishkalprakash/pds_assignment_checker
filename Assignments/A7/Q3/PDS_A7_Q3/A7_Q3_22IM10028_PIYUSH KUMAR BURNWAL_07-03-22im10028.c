#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch,**ptr,**ptr2;
    int i,m,c=0,n;
    printf("Enter the number of names you want to store");
    scanf("%d",&n);

    ptr=(char**) calloc(n,sizeof(char*));
    for(i=0;i<n;i++)
    {

        ptr[i]=(char *) calloc(100,sizeof(char));
    }
    for(i=0;i<n;i++)
    {
        do
        {
            printf("%c",&ch);
            ptr[i][c]=ch;
            c++;
        }while (ch!='\n');
        c=c-1;
        ptr[i][c]='\0';
    }
    printf("Enter the number of names you want to store in array Y");
    scanf("%d",&m);
    c=0;

    ptr2=(char**) calloc(n,sizeof(char*));
    for(i=0;i<m;i++)
    {


        ptr2[i]=(char *) calloc(100,sizeof(char));
    }
    for(i=0;i<n;i++)
    {
        do
        {
            printf("%c",&ch);
            ptr2[i][c]=ch;
            c++;
        }while (ch!='\n');
        c=c-1;
        ptr[i][c]='\0';
    }

}
