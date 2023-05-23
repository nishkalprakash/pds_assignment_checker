#include<stdio.h>
int main()
{
    char c[100],ch;
    int c1 = 0;
    printf("enter the string");
    do
    {
        ch = getchar();
        c[c1]=ch;
        c1++;
    }while(ch!='\n');
    c1 = c1-1;
    c[c1] = '\0';
    ch = c[0];
    int i =0;
    int d=0,sc=0,w=0,sent=0,v=0,con;
    for(i=0;i<c1;i++)
    {
        ch = c[i];
        if(ch=='1'||ch=='0'||ch=='2'||ch=='3'||ch=='4'||ch=='5'||ch=='6'||ch=='7'||ch=='8'||ch=='9')
            d++;
        if(ch=='!'||ch=='*'||ch=='@'||ch=='#'||ch=='.')
            sc++;
        if(ch==' ')
            w++;
        if(ch=='.')
            sent++;
        if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
            v++;
    }
    con = c1+1-d-sc-w-sent-v;
    w++;
    printf("Number of digits = %d\n",d);
    printf("Number of special characters = %d\n",sc);
    printf("Number of words = %d\n",w);
    printf("Number of vowels = %d\n",v);
    printf("Number of consonants= %d\n",con);
    printf("Number of sentences = %d",sent);

}
