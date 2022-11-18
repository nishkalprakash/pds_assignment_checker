/*
Name: Ankit Yadav
Roll No : 21EE30005
Section: 3
Department: Electrical Engineering
Operating System: Windows 11
Package: Codeblocks
Lab Test : 3
*/

#include<stdio.h>

struct str{

int n;
int coeff[30];
int exp[30];



};

int main(){

char s1[30],s2[30],s3[50];
int i,j=0,k=0,m,n;
struct str d[2];

printf("Enter the first polynomial as a string ");
scanf(" %s\n",&s1);
printf("Enter the second polynomial as a string ");
scanf(" %s\n",&s2);

d[1].n=1;
d[2].n=1;

for(i=0;s1[i]!='\0';i++){

    if(s1[i]=='+'||s1[i]=='-') d[1].n++;

    if(s1[i]=='x'){
        d[1].coeff[j]=s1[i-1];
        j++;
        if(s1[i+1]!='^'){
            d[1].exp[k]=1;
           } else{ d[1].exp[k]=s1[i+2];
                    k++;}
        }else  {d[1].coeff[j]=s1[i];
             d[1].exp[k]=0;}
    }
j=0;
k=0;

for(i=0;s2[i]!='\0';i++){

    if(s2[i]=='+'||s2[i]=='-') d[2].n++;

    if(s2[i]=='x'){
        d[2].coeff[j]=s2[i-1];
        j++;
        if(s2[i+1]!='^'){
            d[2].exp[k]=1;
           } else{ d[2].exp[k]=s2[i+2];
                    k++;}
        }else  {d[2].coeff[j]=s2[i];
             d[2].exp[k]=0;}
    }
    m=0;
    n=4;
    j=1;
    k=2

    for(i=0;i<(d[1].n*d[2].n);i++){

        s3[m]=d[1].coeff[i]*d[2].coeff[i];
        m=m+5;
        s3[n]=d[1].exp[i]+d[2].exp[i];
        n=n+5;
        s3[j]='x';
        s3[k]='^';



    }
    printf("%s",s3);

return 0;
}
