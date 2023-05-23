/*Section 2
Roll no.: 22ME10091
Name: Shreya Vadhavkar
Assignment : 6
Description:  */
#include<stdio.h>
void abc();
int main()
{
     char a[100],str1[20],str2[20];
    int i=0;
    for(i=0;i<100;++i)
    {
        a[i]='\0';
    }
    for(i=0;i<20;++i)
    {
        str1[i]='\0';
    }
    for(i=0;i<30;++i)
    {
        str2[i]='\0';
    }
    scanf("%[^'\n']",a);
    for(i=0;i<20;++i)
    {
        if(a[i]!=' ')
        {
            str1[i]=a[i];
        }
        else
        {
            break;
        }
    }
    int j=i+1;
    for(i=i+1;i<30+j;++i)
    {
        if(a[i]!=' ')
        {
            str2[i]=a[i];
        }
        else
        {
            break;
        }
    }
    int x= 2;
    printf("x:%d",x);
    printf("\nstr1:%s",str1);
    printf("\nstr2:%s",str2);

    i=0;
    for(i=0;i<100;++i)
    {
        a[i]='\0';
    }
    scanf("%[^'\n']", a);
    int nc=0,spc=0,w=0,v=0,c=0,s=0,l=0;
    for(i=0;i<100;++i)
    {
        if(a[i]=='.')
        {
            ++s;
        }
        if(a[i]==' ')
        {
            ++w;
        }
        if(a[i]>='0'&&a[i]<='9')
        {
            ++nc;
        }
        if(a[i]=='.'||a[i]=='@'||a[i]=='#')
        {
            ++spc;
        }
        if(((a[i]>='a')&&(a[i]<='z'))||((a[i]>='A')&&(a[i]<='Z')))
        {
            ++l;
        }
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            ++v;
        }
    }
    printf("\nNumeric Characters:%d \nSpecial Printable Characters:%d \nWords:%d \nVowels:%d \nConsonants:%d \nSentences:%d",nc,spc,w+1,v,l-v,s);
    return 0;

}
void abc()
{
    char str[100],str1[20],str2[20];
    int i=0;
    for(i=0;i<100;++i)
    {
        str[i]='\0';
    }
    for(i=0;i<20;++i)
    {
        str1[i]='\0';
    }
    for(i=0;i<30;++i)
    {
        str2[i]='\0';
    }
    scanf("%[^'\n']",str);
    for(i=0;i<20;++i)
    {
        if(str[i]!=' ')
        {
            str1[i]=str[i];
        }
        else
        {
            break;
        }
    }
    int j=i+1;
    for(i=i+1;i<30+j;++i)
    {
        if(str[i]!=' ')
        {
            str2[i]=str[i];
        }
        else
        {
            break;
        }
    }
    int x= 2;
    printf("%d",x);
}
