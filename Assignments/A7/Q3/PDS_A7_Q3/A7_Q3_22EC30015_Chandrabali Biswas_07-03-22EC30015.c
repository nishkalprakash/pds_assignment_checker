/*
Name:Chandrabali Biswas
Roll No:22EC30015
Section:2
Problem 3
Description: Sorting Names
*/
#include <stdio.h>    //Header files
#include <stdlib.h>
int main()
{
  char** X;char** Y;int n1,n2;char ch;
  printf("Enter number of names to be stored in X:");  //takes input for X
  scanf("%d ",&n1);

     X = (char**)calloc(n1,sizeof(char*));

    for(int i=0;i<n1;i++)
        X[i]=(char*)calloc(50,sizeof(char));
    printf("Enter names:");
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<49;j++)
        {
           ch=getchar();
           if(ch=='\n')
              {
                  X[i][j]='\0';
                  break;
              }
           X[i][j]=ch;

        }
    }

    printf("Enter number of names to be stored in Y:");   //takes input for Y
    scanf("%d ",&n2);

    Y = (char**)calloc(n2,sizeof(char*));

    for(int i=0;i<n2;i++)
        Y[i]=(char*)calloc(50,sizeof(char));
    printf("Enter names:");
    for(int i=0;i<n2;i++)
    {

        for(int j=0;j<49;j++)
        {
           ch=getchar();
           if(ch=='\n')
              {
                  Y[i][j]='\0';
                  break;
              }
           Y[i][j]=ch;

        }
    }
      Z = (char**)calloc(n1+n2,sizeof(char*)); //takes input for Z
    for(int i=0;i<(n1+n2);i++)
        Z[i]=(char*)calloc(50,sizeof(char));
    for(int i=0; X[i]!='\0';i++)
        Z[i]=X[i];
    for(int i=0;Y[i]!='\0';i++)
        Z[n1+i]=Y[i];


  return 0;
}
