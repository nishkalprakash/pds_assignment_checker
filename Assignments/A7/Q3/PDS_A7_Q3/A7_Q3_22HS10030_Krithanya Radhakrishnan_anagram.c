#include <stdio.h>
#include <string.h>
int main()
{
    char s1[30],s2[30];
    int l,l1,l2,i,j,f=0,nf=0;
    printf("enter 1st string \n");
    gets(s1);
    printf("enter 2nd string \n");
    gets(s2);
    l1=strlen(s1);
    l2=strlen(s2);
    if (l1==l2)
    {
        l=l1;
        for(i=0;i<l;j++)
        {
            f=0;
            for(j=0;j<l;j++)
            {
                if(s1[i]==s2[j])
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
            {
                nf=1;
                break;
            }
        }
        if(nf==1)
        {
            printf("not anagram");
        }
        else
        {
        printf("anagram");
        }
    }
    else
    printf("not anagram");    
    return 0;
}
