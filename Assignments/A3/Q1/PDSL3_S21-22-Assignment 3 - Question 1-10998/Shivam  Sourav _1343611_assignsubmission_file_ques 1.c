/*NAME:SHIVAM SOURAV
  ROLL NO:21CS10059
  SECTION:3
  PACKAGE:CODEBLOCKS*/
#include<stdio.h>
int main()
{
    char u[100]={0},a[100]={0};
    int s[100];
    int u1,a1,c1,lc,uc,cd,sc,i,j,k,l,c2,c3,c4,c5;
    printf("username");
scanf("%s",u);
printf("password");
scanf("%s",a);
u1=sizeof(u);
a1=sizeof(a);
if(a1<16 && a1>7)
    c1=1;
for(i=0;i<a1;i++)
{
    if((a[i]-'a')>=0&&(a[i]-'a')<26)
        lc++;
    if ((a[i]-'A')>=0&&(a[i]-'A')<26)
        uc++;
    if((a[i]=='$')&&(a[i]=='*')&&(a[i]=='+')&&(a[i]=='/')&&(a[i]=='#')&&(a[i]=='@')&&(a[i]=='<')&&(a[i]=='>')&&(a[i]=='?')&&(a[i]=='_')&&(a[i]=='!'))
     sc ++;
     if((a[i]-'0')<10 &&(a[i]-'0')>=0)
     {
         if(a[i+1]==a[i])
         {
            cd++;
            if(cd>5)
            {
                c3=0;
                break;
            }
         else cd=0;
         for(j=0;j<a1;j++)
         {
             if(a[i]==a[j])
                s[i]++;
         }
         for(k=0;k<a1;k++)
         {
             if(s[k]>5)
             {
                 c4=0;
                 break;
             }
     }
}
     }
}
for(k=0;k<a1;k++)
{
    if(a[k]==u[0])
    {
        for(l=k;l<k+u1;l++)
        {
            if(a[l]!=u[l-k])
            c5=1;

        }
    }
}
if(lc>0&&uc>0&&sc>1)
    c2=1;

    if(c1==1&&c2==1&&c3!=0&&c4!=0&&c5!=1)
        printf("acceptable");
    else printf("not acceptable");
return 0;
     }


