#include<stdio.h>
typedef struct user{
  char *userid;
  char *password;
}user;
void enrollment(user a)
{
    printf("enter the userid\n");
    int l,i=0,u,n,s;
    while(a.userid[i]=='\n')
    {
        scanf("%c",a.userid[i]);
        i++;
    }
    i=0;
    printf("\nenter the password\n");
    while(a.password[i]=='\n')
    {
        scanf("%c",a.password[i]);
        if(a.password[i]<='9'||a.password[i]>='0')
        {
            n=n+1;
        }
         if(a.password[i]<='Z'||a.password[i]>='A')
        {
            u=u+1;
        }
         if(a.password[i]<='z'||a.password[i]>='a')
        {
            l=l+1;
        }
         if(a.password[i]=='!'||a.password[i]=='@'||a.password[i]=='~'||a.password[i]=='#'||a.password[i]=='$'||a.password[i]=='%'||a.password[i]=='*'||a.password[i]=='&')
        {
            s=s+1;
        }
        i++;
        
    }
    i=i-1;
    if(n==0||s==0||l==0||u==0||i<12)
    {
        printf("invalid password");
        return;
    }
    
    
    
    
}
int main(){
    int n;
    printf("enter the max no of user");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        user a;
    
    enrollment(a);
    signin(a);
    }
   

}