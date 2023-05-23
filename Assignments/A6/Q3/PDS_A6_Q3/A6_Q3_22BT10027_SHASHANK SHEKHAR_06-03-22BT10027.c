#include<stdio.h>
int main()
{
    int n;
    printf("enter the function number\n");
    scanf("%d",&n);
    if(n==1)
    {
        printf("Enter the size of the array\n");
        int s;
        scanf("%d",&s);
        rev(s);
    }
    if(n==2)
    {
        anagram();
    }
    if(n==3)
    {
        char mf[25];
        gets(mf);
        int n = palindrome(mf);
        if(n==0)
            printf("not a palindrome");
        if(n==1)
            printf("a palindrome");
    }
}
void rev(int n)
{
    int a[n];
    int i = 0;
    printf("Enter the values in the array \n");
    for(;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int temp;
    for(i=0;i<n/2;i++)
    {
        temp = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
   int palindrome(char str[20])
    {
        char temp=' ';
        int i,l;
        printf("Enter the string : ");
        gets(str);
        for(l=0;str[l]!='\0';l++);
        for(i=0;i<l/2;i++)
        {
        if(str[i]!=str[l-i-1])
        {
       temp=str[i];
       str[i]=str[l-i-1];
       str[l-i-1]=temp;
       }
       }
       printf("%s is ",str);
       if(temp==' ')
       return 1;
       else
        return 0;

    }
    void anagram()
    {
        printf("Enter two strings");

    }
