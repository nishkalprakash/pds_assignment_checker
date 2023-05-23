#include <stdio.h>
void main()
{
    int i,s[100];
    printf("enter a integer: ");

    scanf("%d",&i);

    printf("\n entered integer= %d",i);
    abc();
    fun();
}
void abc()
{
    char str[100],str1[20],str2[30];
    printf("\n enter a string");
    scanf("%s",str);
    printf("enter another string");
    int x=scanf("%19s %29s",str1,str2);
    printf("\n str1= %s",str1);
    printf("\n str2= %s",str2);
    printf("\n str= %s",str);
    printf("\n x= %d",x);
}
void fun()
{
    char s[100];
    int v=0,c=0,sp=0,w=1,sen=0,i,d=0;
    printf("\n enter a string in lower case: ");
    scanf("%s",s);
    for(int i=0;s[i]!='\0';i++)
    {
        c=s[i];
        if((c>='a' && c=<'z') || (c>='A') && (c=<'Z'))
        {
            if(c=='a' ||c=='e' ||c=='i' || c=='o' ||c=='u')
                v++;
            else
                c++;
        }
        if(c=='.')
            sen++;
        if(c==' ')
            sp++;
        if(c>'0' &&c<'9')
            d++;

    }
    printf("\n numeric characters: %d",d);
    printf("\n words: %d",w);
    printf("\n vowels: %d",v);
    printf("\n consonants: %d",c);
    printf("\n sentences: %d",sen);


}
