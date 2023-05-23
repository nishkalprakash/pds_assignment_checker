/*Name: Abhiraj Ranjan
Roll Number: 22MI10002
Section: 2
Assignment: 7
Question: 3
Description: Reading Names*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void read(char* p)
{
    char ch;
    int c=0;
    do
    {
        ch = getchar();
        *(p+c)= ch;
        c++;
    }
    while(ch!='\n');
    c=c-1;
    *(p+c) = '\0';
}

int main()
{
    int n,i;
    scanf("%d",&n);
    char **X;
    X=(char**)malloc((n+1)*sizeof(char));//reading X start
    for(i=0; i<(n+1); ++i)
        X[i]=(char*)malloc(100);
    for(int i=0; i<(n+1); i++)
    {

        read(X[i]);
    }                                    //reading X end
    /*for(i=0;i<=n;i++){
    printf("%s\n",X[i]);
    }*/
    int n1;
    scanf("%d",&n1);
    char **Y;
    Y=(char**)malloc((n1+1)*sizeof(char));//reading Y start
    for(i=0; i<(n1+1); ++i)
        Y[i]=(char*)malloc(100);
    for(int i=0; i<(n1+1); i++)
    {

        read(Y[i]);
    }
    /*for(i=0; i<=n; i++)
    {
        printf("%s\n",X[i]);
    }
    for(i=0; i<=n1; i++)
    {
        printf("%s\n",Y[i]);
    }*/
    printf("## After reading X ##\n\nPrinting %d names (names stored in X):\n\n",n);
    printf("#      Name\n\n==================\n\n");
    for(i=0; i<n; i++)
    {
        printf("%d      %s\n",(i+1),X[i+1]);
    }
    printf("\n\n");
    printf("## After reading Y ##\n\nPrinting %d names (names stored in Y):\n\n",n1);
    printf("#      Name\n\n==================\n\n");


    for(i=0; i<n1; i++)
    {
        printf("%d      %s\n",(i+1),Y[i+1]);
    }

    char **Z;
    Z=(char**)malloc((n1+n+2)*sizeof(char));//reading Y start
    for(i=0; i<(n1+n+2); ++i)
        Y[i]=(char*)malloc(100);


    for(i=0; i<(n+1); i++)
    {
        Z[i]=X[i];
        //  printf("%s\t",Z[i]);
    }
    for(i=n+1; i<(n1+n+1); i++)
    {
        Z[i]=Y[i-(n)];
//    printf("%s\t",Z[i]);
    }

//for(i=0;i<n+n1+2;i++)
    //  printf("%s\n",Z[i+1]);

    printf("\n## After sorting and deleting duplicates in Z ##\n\nPrinting %d names (names stored in Z): \n\n#      Name\n\n==================\n\n",n1+n);
    for(i=0; i<n1+n; i++)
    {
        printf("%d      %s\n",(i+1),Z[i+1]);
    }









    return 0;

}
