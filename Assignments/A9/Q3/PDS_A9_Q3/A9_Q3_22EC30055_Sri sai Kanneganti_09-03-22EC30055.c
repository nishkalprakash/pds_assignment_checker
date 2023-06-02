#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int E=0 ;
typedef struct {
char userid[20],password[20];

} user;
user enroll(user *u,int U);
int signin(user *u, int U);
int main()
{
    int n,ch,U=0 ;
    user *u ;
    scanf("%d",&n);
    u=(user*)malloc((n-1)*sizeof(user));
    printf("Max number of users:");

    for(int i=0;i<n;i++){
    printf("\n Choose one of the options_\n 1_Enroll\n 2_Sighn_in_\n 3_Exit\n");
    scanf("%d",&ch);
    if(ch==1)
        {
         u[U]=enroll(u,U);
         U++;
         if(E==1) return 0 ;
        }
    if(ch==2)
    {
        signin(u,U);
        if(E==1) return 0 ;
    }
    if(ch==3)
    {
        return 0 ;
    }
    }
}
user enroll(user *u,int U)
{
    user u1;
    printf("\n Enter user id:-");
    scanf("%s",u1.userid);
    for(int i=0;i<U;i++)
    {
        if(strcmp(u1.userid,u[i].userid)==0)
        {
            E=1;
            return u1 ;
        }
    }
    printf("\n Enter Password:-");
    char n[20] ;
    scanf("%s",u1.password);

   ;
    int L=0,Uc=0,N=0,S=0 ;

    for(int i=0;u1.password[i]!='\0';i++)
        {
        if((u1.password[i]>='a')&&(u1.password[i]<='z'))

       {
           L++ ;
       }
                if((u1.password[i]>='A')&&(u1.password[i]<='Z'))

        {
            Uc++ ;
        }
                if((u1.password[i]>='0')&&(u1.password[i]<='9'))

        {
            N++ ;
       }

       switch(u1.password[i])
        {
      case '~' :
      case '!' :
      case '@' :
      case '#' :
      case '$' :
      case '%' :
      case '^' :
      case '&' :
      case '*' :  S++ ;
         }
        }
        if((S==0)||(L==0)||(Uc==0))
            {
              E=1 ;
        return u1 ;
            }
            printf("\n Enrolled sucessfully");
        return u1 ;
}
int signin(user *u, int U)
{
    int v=0;
     user u1;
    printf("\n Enter user id:-");
    scanf("%s",u1.userid);
    int is ;
        for(int i=0;i<U;i++)
    {
        if(strcmp(u1.userid,u[i].userid)==0)
        {
            v++;
          break ;
        }
        is=i ;
    }
    if(v==0)
    {
        printf("\n No such UserID exist ");
        E=1 ;
        return 0 ;
    }
       printf("\n Enter Password:-");
    scanf("%s",u1.password);
    if(strcmp(u1.password,u[is].password)==0)
    {
      printf(" \n Logged in successfully");
    return 1 ;
    } else
    {
        E=1 ;
      return 0 ;
    }
}
