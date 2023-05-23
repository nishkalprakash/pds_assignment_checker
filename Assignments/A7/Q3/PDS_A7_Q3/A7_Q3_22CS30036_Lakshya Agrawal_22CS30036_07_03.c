/*
Section 2
Roll No : 22CS30036
Name : Lakshya Agrawal
Assignment No : 7
Description : sorting and deleting common names
*/

#include<stdio.h>
#include<stdlib.h>

#define MAXSIZE 100

int len(char *str)
{
    int i;
    for(i=0;str[i]!='\0';i++);
    return i;
}

void str_copy(char *str1,char *str2)
{
    int i;
    for(i=0;str1[i]!=0;i++)
        str2[i] = str1[i];
    str2[i] = '\0';
}

void name_print(char**str,int n)
{
    for(int i=0;i<n;i++)
       printf("%d  %s\n",i+1,str[i]);
}

int str_compare(char *str1,char *str2)
{
    if(len(str1)!=len(str2))
    {
        int min = (len(str1)>len(str2))? len(str2):len(str1);
        for(int i=0;i<min;i++)
        {
            if(str2[i]==str1[i]) continue;
            if(str2[i]>str1[i])
                return -1;
            else
                return 1;
        }
    }else
    {
        for(int i=0;i<len(str1);i++)
        {
            if(str2[i]==str1[i]) continue;
            if(str2[i]>str1[i])
                return -1;
            else
                return 1;
        }
    }
    return 0;
}

int delete_duplicate(char **Z,int rows)
{
    int num=0;
    for(int i=0;i<rows;i++)
    {
        for(int j=i+1;j<rows;j++)
        {
            if(!str_compare(Z[i],Z[j]))
            {
                num++;
                for(int k=j;k<rows-1;k++)
                    str_copy(Z[k+1],Z[k]);
                 rows--;
                 j--;
            }
        }
    }
    return num;
}

void sort(char**Z,int z_rows)
{
    char *str;
    for(int i=0;i<z_rows;i++)
    {
        for(int j=0;j<(z_rows-i-1);j++)
        {
            if(str_compare(Z[j],Z[j+1])>0)
            {
                str = Z[j];
                Z[j] = Z[j+1];
                Z[j+1] = str;
            }
        }
    }
}

int main()
{
    int n,m;
    scanf("%d",&n);

    char **X,**Y,**Z,str[MAXSIZE];
    X = (char**)malloc(n*sizeof(char*));

    for(int i=0;i<n;i++)
    {
        scanf(" %[^\n]s",str);
        X[i] = (char*)malloc((len(str)+1)*sizeof(char));
        str_copy(str,X[i]);
    }

    printf("\n");
    name_print(X,n);
    printf("\n");

    scanf("%d",&m);
    Y = (char**)malloc(m*sizeof(char*));
    for(int i=0;i<m;i++)
    {
        scanf(" %[^\n]s",str);
        Y[i] = (char*)malloc((len(str)+1)*sizeof(char));
        str_copy(str,Y[i]);
    }

    printf("\n");
    name_print(Y,m);
    printf("\n");

    Z = (char**)malloc((m+n)*sizeof(char*));
    for(int i=0;i<(m+n);i++)
    {
        if(i<n)
        {
            Z[i] = (char*)malloc((len(X[i])+1)*sizeof(char));
             str_copy(X[i],Z[i]);
        }
        else
        {
            Z[i] = (char*)malloc((len(Y[i-n])+1)*sizeof(char));
            str_copy(Y[i-n],Z[i]);
        }
    }

    int z_rows = m+n-delete_duplicate(Z,m+n);
    Z = realloc(Z,z_rows*sizeof(char*));
    sort(Z,z_rows);
    name_print(Z,z_rows);

    return 0;
}

