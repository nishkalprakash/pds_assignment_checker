#include <stdio.h>

int strlength(char password[])
{
    int i;
    for (i = 0; password[i] != '\0'; ++i);
    return i;
}
int compare(char s1[],char s2[])
{
    for(i=0;i<strlength(s1);i++)
        {
            if(s1[i]!=s2[i])
            score++;
        }
    return score;
}
void equate(char er[],char s2[], int a)
{
    for(i=0;i<=strlength(s2);i++)
    {
        if(i<a)
        er[i]=s2[i];
        else
        if(i=a)
        er[i]='_';
        else
        er[i+1]=s2[i];
    }
}
void equate(char er[],char s2[])
{
    for(i=0;i<=strlength(s2);i++)
    {
        er[i]=s2[i];
    }
}
int main()
{
    char s1[200],s2[200],d[200],small[200],big[200],mmm[200];;
    int i,j,score=0,min,length,chk=0;
    scanf("%s",s1);
    scanf("%s",s2);
    if(strlength(s2)>strlength(s1))
    {
        length=strlength(s2);
        chk=1;
        equate(big,s2);
        equate(small,s1);
    }
    else
    {
        length=strlength(s1);
        equate(big,s1);
        equate(small,s2);
    }
    min=length+4;
    int diff=strlength()-strlength();
    if(diff==0)
    {
        score=compare(s1,s2);
    }
    if(diff==1)
    {
        for(i=0;i<length;i++)
        {
            equate(d,small,i);
            if(min>compare(d,big))
            {
                min=compare(d,big);
                equate(mmm,d);
            }
        }
        min++;
    }
    if(diff==2)
    {
        for(i=0;i<length;i++)
        {
            equate(d,small,i);
            for(j=0;j<i;j++)
            {
            equate(d,small,j);
            if(min>compare(d,big))
            {
                min=compare(d,big);
                equate(mmm,d);
            }
            }
        }
        min+=2;
    }

    printf("Sequence: %s");
    for(i=0;i<length;i++)
    {
        printf("%c", big[i]);
    }
    printf("\nSequence: %s");
    for(i=0;i<length;i++)
    {
        printf("%c", mmm[i]);
    }
    printf("\n score=%d", min);
    
    return 0;
}