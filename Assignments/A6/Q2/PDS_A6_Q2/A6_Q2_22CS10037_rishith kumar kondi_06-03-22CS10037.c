#include<stdio.h>
int main()
{
    char s1[20],s2[20];int i,u,v,x,y,z;
    scanf("%[^\n]",s1);
    scanf("%[%^\n]",s2);
    printf("%s\n",s1);
    printf("%s\n",s2);
    for(i=0;i<20;i++)
    {
        if(s1[i]=='a'||'i'||'o'||'e'||'u'){x++;}
        if(s1[i]>='1'&&s1[i]<='9'){u++;}
        if(s1[i]=='$'||'!'||'@'||'#'||'%'||'&'){v++;}
        if(s1[i]==' '){y++;}
    }
    printf("no of numeric charcters:%d",x);
    printf("no of vowels:%d",u);
    printf("no of special charcters:%d",v);
    printf("the no of words:%d",y+1);
}