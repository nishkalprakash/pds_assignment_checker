#include<stdio.h>
int main()
{
    int a[20],i,n,t,j,flag,l1=0,l2=0;
    char s1[20],c1,c2;
    char s2[20];
    char s[20];

    printf("enter size of array: ");
    scanf(" %d",&n);
    printf("\n enter integers: ");
    for(i=0;i<n;i++)
        scanf(" %d",&a[i]);


    for(i=0;i< n/2;i++)
    {
        t=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=t;
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    printf("\n enter two strings: ");
    scanf("%s",&s1);
    printf("..");
    scanf("%s",s2);

    for(i=0;s1[i]!='\0';l1++);
    for(i=0;s2[i]!='\0';l2++);

    for(i=0;s1[i]!='\0';i++)
    {
        c1=s1[i];
        flag=0;
        for(j=0;s2[j]!='\0';j++)
        {
            c2=s2[j];
            if(c1==c2)
            {
                flag=1;
            }
        }

    }
    if(flag==1)
        printf("\n given strings are anagrams");
    else
        printf("\n given strings are not anagrams");


    printf("Enter a string: ");
    scanf("%[^\n]s",s);
    printf("hii");
    int x=palindrome(s);
    if(x==1)
        printf("\n palindrome");
    else
        printf("\n not palindrome");
return 0;
}
int palindrome(char str[])
{
    int i,n,f=1;
    for(i=0;str[i]!='\0';n++);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=str[n-i-1])
            f=0;
    }
    if(f==0)
        return 0;
    else
        return 1;

}
