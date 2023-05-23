#include<stdio.h>
int palindrome(char str[20])      //function to check if string is palindrome
{
    int i,l,c;
    for(l=0; str[l]!='\0'; l++);
    for(i=0; i<1/2; i++)
    {
        if(str[i]=str[l-i-1])
            c++;
    }
    if(c=l/2)
        return 1;
    else
        return 0;
}


void reverse(char str[20])      //function to reverse the string
{
    int n, k, j, m;
    char temp;
    for(j=0; str[j]!='\0'; j++);
    for(m=0; m<j; m++)
    {
        temp=str[m];
        str[m]=str[j-m-1];
        a[j-m-1]=temp;
    }
}









int main()
{
    int p, m, n, r, k, h, j, k;

    char str1[20], str2[20], str3[20];
    scanf("%d", &h);

    if(h==1)
    {
        scanf("%d", &n);
        for(k=0; k<n; k++)
        {
            scanf("%s", &str2);
        }

        reverse(str2[20]);
        printf("%s", str2);
    }

    else if(h==3)
    {
        scanf("%s", &str1);
        p=palindrome(str1[20]);

        if(p=1)
            printf("%s is a palindrome", str1);
        else
            printf("%s is not a palindrome", str1)

        }
    return 0;
}





