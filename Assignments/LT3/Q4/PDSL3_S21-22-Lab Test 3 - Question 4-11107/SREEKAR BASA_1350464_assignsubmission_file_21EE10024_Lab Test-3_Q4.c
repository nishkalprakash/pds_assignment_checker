/*
Name        : Basa Sreekar
Roll no.    : 21EE10024
Department  : Electrical Engineering
package     : code blocks
Lab Test_3
Question    : 1
*/

#include <stdio.h>
#include <string.h>

int expression(char a[],int seq[])
{
     int p=0;  // p-{},q-() ,r-[] //
     int q=2;   // value '0,2,4' => closed for p,q,r //
     int r=4;  // value '1,3,5' => open for p,q,r respectively //

    int n = strlen(a);
    int i,k;
    if(a[0]=='}' || a[0]==')' || a[0]==']')
    {
        k = 0;
        return k ;
    }

    if(a[n-1]=='{' || a[n-1]=='(' || a[n-1]=='[')
    {
        k = 0;
        return k ;
    }

    for(i=0;i<n;i++)
    {
        if(a[i]=='{')
        {
            p = 1 ;
            seq[i] = p ;
        }
        if(a[i]=='(')
        {
            q = 3 ;
            seq[i] = q ;
        }
        if(a[i]=='[')
        {
            r = 5 ;
            seq[i] = r ;    // this whole function converts the string sequence into a integer code sequence//
        }
        if(a[i]=='}')       // the integer code will be decoded and used in match function //
        {
            p = 0 ;
            seq[i] = p ;
        }
        if(a[i]==')')
        {
            q = 2 ;
            seq[i] = q ;
        }
        if(a[i]==']')
        {
            r = 4 ;
            seq[i] = r ;
        }
    }

}

int match(int a[])
{
    static int i=0;
    static int x=0;
    static int y=0;
    static int z=0;
    static int k=0;
    int p,q,r ;

    if(a[i]=='\0') return ;
     switch(a[i])
     {
        case '0' : p = 0 ; // open bracket //
                   z = 1 ; // represents closed bracket of same type//
                   x = p ;  // z represents complementary bracket //
                   break ;
        case '1' : p = 1 ;
                   x = p ;
                   break ;
        case '2' : q = 2 ;
                   z = 3 ;
                   x = q ;
                   break ;
        case '3' : q = 3 ; //closed bracket //
                   x = q ;
                   break ;
        case '4' : r = 4 ;
                   z = 5 ;
                   x = r ;
                   break ;
        case '5' : r = 5 ;
                   x = r ;

                   break ;
     }

     i++ ;
     if((i-1)!='\0')
        y = match(a);
     else
        return x ;

     if(y==1 || y==3 || y==5)
     {
         k = 0 ;
         return y ;
     }
     else
     {
         if(y==z)
         {
             k=0;
             return y;
         }
         else if(y!=z)
         {
             k=1 ;
             return k;
         }
     }
}

int main()
{
  int i,j,k,t,n ;
  char a[50];
  int p=0,q=0,r=0 ;

  printf(" Enter the expression : ");
  scanf("%s",a);
  n = strlen(a);
  int seq[n];

  k = expression(a,seq);
  if(k==0) // initial checking //
  {
      printf(" Unmatched parenthesis ");
      return 0;
  }

  k = match(seq) ;
  printf(" Results : ");
  if(k==1) printf(" Unmatched parenthesis ");
  else if(k==0) printf(" Matched parenthesis ");
  return 0;
}



/*

int Match(int a[],int t)
{
    static int i;
    int x,y,z,n,p,q,r ;
    static int k =0 ;

    if(a[i]=='\0') return ; //termination of recursive calls //

    switch(a[i])
     {
        case '0' : p = 0 ; // open bracket //
                   z = 1 ;
                   x = p ;
                   break ;
        case '1' : p = 1 ;
                   x = p ;
                   break ;
        case '2' : q = 2 ;
                   z = 3 ;
                   x = q ;
                   break ;
        case '3' : q = 3 ; //closed bracket //
                   x = q ;
                   break ;
        case '4' : r = 4 ;
                   z = 5 ;
                   x = r ;
                   break ;
        case '5' : r = 5 ;
                   x = r ;

                   break ;
     }

     i++ ;
     if(x==0 || x==2 || x==4)
     {
       t = x;  //to restore present x value //
       y = Match(a,t);
     }

     else if(x==1 || x==3 || x==5)
     {
        if(x==t) k = 0 ;
        else {
            k =1 ;
            return k ;
        }
        t = x ;
        y = Match(a,t);

     }



}

*/



