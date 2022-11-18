/*
Name        : Basa Sreekar
Roll no.    : 21EE10024
Department : Electrical Engineering
package     : code blocks
Assignment 3
Question : 1
*/
#include <stdio.h>
int string_length(char a[])
{
    int i,l;
    for(i=0;a[i]!='/0';i++)
    {
     l = i;
    }
    return l;
}
int main()
{
    char u[100],p[15];
    int n,i,j,k,l1=0,l2=0 ;
    int s=0,S=0,c=0;
    printf("Enter the Username : ");
    scanf("%s",u);
    printf("Enter the password : ");
    scanf("%s",p);
    printf(" Your Username : %s \n Password  : %s",u,p);

    l1 = string_length(u);
    l2 = string_length(p);

    if(l1==l2)
    {
        for(i=0,k=0;i<l1;i++)
        {
            if(u[i]==p[i]) k++ ;
            else k =0;
        }
        if (k==l1) printf(" Error ,User name is same as password !!");
    }

    if(i2<8) printf(" THe password is of less than 8 charcters, Error!!");
    if(l2>15) printf(" Error!!,Length of password exceeds 15!!");

    for(i=0;i<l2;i++)
    {
        if( p >= 'a' && p<='z') s++;
        if( p>='A' && p<= 'Z') S++ ;
        else c++ ;
    }
    if(s==0) printf(" error , no small letters");
    if(S==0) printf(" error , no capital letters");
    if(c<1) printf(" error, no special charcaters");

}


