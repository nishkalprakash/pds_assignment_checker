#include <stdio.h>
int main(){char a;int a1,x=1,b=0,c=0,d=0,e=0;
    /*section - 2
    Name - Nain Aditya
    Roll - 22AG10029
    LAB NO - 4
    ASSIGNMENT NO - 1
    PROGRAM - program to check the password is valid*/
        printf("enter the password");
        a=getchar();
        a1=(int)a;
        if (!(a1>64 && a1<91)){printf("USE UPPER CASE CHARACTER AS FIRST CHARACTER");}
        else {for (int i=2;i>1;i++){
        a=getchar();
        if (a=='\n') break;
        a1=(int)a;
        if(a1>47 && a1 < 58) b++;
        if(a1==32) break;
        if(a1>34 && a1 <39) c++;
        if (a1==64) c++;
        d++;
        }
        if (b==0) printf("invalid password \n no digits used\n");
        else if (c==0) printf ("invalid password \n no special characters used\n");
        else if (d<7 || d>11) printf("please enter a password within 8-12 characters\n");
        else printf("valid password");}
        return 0;
    }

