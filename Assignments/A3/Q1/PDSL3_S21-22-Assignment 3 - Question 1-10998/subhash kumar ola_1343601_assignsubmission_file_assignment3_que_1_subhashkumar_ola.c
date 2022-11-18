#include <stdio.h>

int len(char s[])
{
int i,len=0;
for(i=0;s[i]!='\0';i++){
    len++;
}
return len;
}

int main()
{
char u[15],p[15];
int i,j,k=0,len1=0,len2=0,p1=0,q=0,r=0,s=0,t=0;
printf("Enter Username: ");
scanf("%s",u);

printf("Enter password: ");
scanf("%s",p);

len1=len(u);
len2=len(p);

if(len2<8 || len2>15) k=1;

for(i=0;p[i]!='\0';i++){
    if(p[i]==u[0]){
        for(j=1;j<len1;j++){
            if(p[i+j]==u[j]) continue;
            else break;
        }
        if(j==len1){
            k=1;
        }
    }
}
for(i=0;p[i]!='\0';i++){
    if(p[i]>='a' && p[i]<='z') p1=1;
    if(p[i]>='A' && p[i]<='Z') q=1;
    if(p[i]==33 || p[i]==35 || p[i]==36 || p[i]==42 || p[i]==43 || p[i]==47 || p[i]==60 || p[i]==62 || p[i]==63 || p[i]==64 || p[i]==95){
        r++;
    }
    if(i>0 && p[i]==p[i-1]){
        s++;
    }
    if(i>0 && p[i]>='0' && p[i]<='9' && p[i-1]>='0' && p[i-1]<='9'){
        t++;
    }
}

if(k!=1 && p1==1 && q==1 && r>=2 && s<=4 && t<=4){
    printf("Acceptable\n");
}
else printf("Not Acceptable\n");
return 0;
}
