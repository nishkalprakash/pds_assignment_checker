/*
* Section 2
* Roll No : 22NA10049
* Name : Yash Agarwal
* Assignment No : 4
* Description : Program to find relevancy of a password
*/

#include <stdio.h>
void abc()
{
    char str[100],str1[20],str2[30];
    scanf("%s",str);
    int x=scanf("%19s %29s",str1,str2);

    printf("calling abc \n");
}
int main()
{
   // abc();
    char s[1024];
    printf("enter the string \n");
    scanf("%[^\n]%*c",s);

    int i=0,l=0,sen=0,num=0,v=0,c=0,special=0,space=0;

    while(s[i]!='\0')
    {
        i++;
        l++;
    }

         printf("%s",s);



    for(i=0;i<l;i++)
    {
        if(s[i]==46)
            sen++;


        if(s[1]<=57 && s[i]>=48)
        {
            num++;
        }

        if(s[i]=='a' || s[i]=='A' || s[i]=='e' ||
                s[i]=='E' || s[i]=='i' || s[i]=='I'||s[i]=='o'
                || s[i]=='O' || s[i]=='u' || s[i]=='U' )
        {

            v++;
        }
        else
            c++;

        if(s[i]>=32 && s[i]<=47)
            special++;

        if(s[i]==32)
            space++;
    }

    printf("%d numeric character \n",num);
    printf("%d Special printable characters \n",special);
    printf("%d words \n",space+1);
    printf("%d vowels \n",v);
    printf("%d consonants \n",c);
    printf("%d sentences \n",sen);




}
