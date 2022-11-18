/*
Name: Nidhi Nandwani
Roll no. : 21MA10036
Section: 3
Package: Visual Studio Code
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct 
{
    int n;
    int c[10000];
    int exp[10000];
}poly;

poly extract(char s[], int c_ind, int exp_ind)
{
    //function to extract polynomial termss, coefficients, exponents
    poly p;
    int l=strlen(s);
    int c1=0, exp1=0;
    p.n=0;
    int last_sign,last_x;
    for(int i=0; i<l; i++)
    {
        if(s[i]=='x')
        {
            last_x=i;
            
            /*
            if(i==0)
            {
                p.c[c1++]=1;
            }
            else
            {
                if(s[i-1]=='+')
                p.c[c1++]=1;
                else if(s[i-1]=='-')
                p.c[c1++]=-1;
                else
                p.c[c1++]=s[i-1];
            }*/

            if(s[i+1]=='^')//using next index of x to extract exponents
            {
                p.exp[exp1++] = s[i+2];
            }
            else
            {
                p.exp[exp1++] = 1;
            }
        }
        if(s[i]=='+'||s[i]=='-')//using signs to locate coeffiecients
        {
            p.n+=1;//using signs to count the number of terms
            last_sign=i;
            for(int j=i+1; j<l; j++)
            {
                if(s[j]=='x')
                {
                    char new[100];
                    int ind=0;
                    for(int k=i+1; k<j;k++)
                    {
                        new[ind++]=s[k];
                    }
                    p.c[c1]=atoi(new);
                    if(s[i]=='-')
                    p.c[c1] = -p.c[c1];
                    c1++;
                    break;
                }
            }
        }
        
    }
    char new1[100];
    int ind=0;
    for(int j=last_sign+1;j>last_x && j<l; j++)
    {
        new1[ind++]=s[j];
    }
    p.c[c1++]=atoi(new1);
    p.n+=1;
    c_ind=c1;
    exp_ind=exp1;
    return p;
}

int main()
{
    char s1[10000], s2[10000];
    printf("Enter the first polynomial: \n");
    scanf("%s", &s1);
    printf("Enter the second polynomial: \n");
    scanf("%s", &s2);
    poly p1, p2;
    int c1_ind,c2_ind, exp1_ind, exp2_ind;
    p1 = extract(s1, c1_ind, exp1_ind);
    printf("No. of terms in 1st: %d/n", p1.n);
    printf("Coefficients: \n");
    for(int i=0; i<c1_ind; i++)
    {
        printf("%d ", p1.c[i]);
    }
    printf("\nExponents: \n");
    for(int i=0; i<exp1_ind; i++)
    {
        printf("%d ", p1.exp[i]);
    }
    

}

