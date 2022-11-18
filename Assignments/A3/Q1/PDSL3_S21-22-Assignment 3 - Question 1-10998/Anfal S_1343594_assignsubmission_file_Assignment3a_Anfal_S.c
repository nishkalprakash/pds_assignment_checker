/*
Name: Anfal S
Roll no: 21AE10003
Section: 3
Dept: AE
Package: Codeblocks
Assignment class: 1
Operating System: windows
*/

#include<stdio.h>

int main()
{
int x,y=0,z=0,i,j,a=0,b=0,c=0,d=0;
char u[20], p[16];
printf("please enter username and password\n");
scanf("%s\n%s",u,p);
for(i=0;u[i]!='\0';++i){
y=y+1;}
for(i=0;p[i]!='\0';++i){
z=z+1;}
for (i=0;p[i]!='\0';++i)
{
if(u[0]==p[i]){for(j=1;u[j]!='\0';++j)
{x=1;
if(u[j]==p[i+j])x=x+1;
else{x=0; break;}
}
}
}
if(x==y){ printf("this password is not acceptable"); return 0;}
if(z<8||z>15){ printf("this password is not acceptable"); return 0;}
for(i=0;p[i]!='\0';++i){if('a'<p[i]<'z'){a=a+1;}}
for(i=0;p[i]!='\0';++i){if('A'<p[i]<'Z'){b=b+1;}}
for(i=0;p[i]!='\0';++i){if(p[i]=='$'||p[i]=='*'||p[i]=='+'||p[i]=='/'||p[i]=='#'||p[i]=='@'||p[i]=='<'||p[i]=='>'||p[i]=='?'||p[i]=='_'||p[i]=='!'){c=c+1;}}
if(a==0||b==0||c<2){ printf("this password is not acceptable"); return 0;}
for(i=0;p[i]!='\0';++i){if(p[i]+1==p[i+1]&&p[i+1]+1==p[i+2]&&p[i+2]+1==p[i+3]&&p[i+3]+1==p[i+4]&&p[i+4]+1==p[i+5])
{printf("this password is not acceptable"); return 0;}}
for(i=0;p[i]!='\0';++i){for(j=0;p[j]!='\0';++j){if(p[j]=p[i]) d=d+1;}
if(d>5){printf("this password is not acceptable"); break;}
else d=0;
}
}
