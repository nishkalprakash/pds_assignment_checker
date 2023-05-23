#include<stdio.h>
int main()
{
    int ch;
    printf("Enter choice for menu driven program.\n1.Reverse Array\n2.Anagram Check\n3.Palindrome Check\n");
    scanf("%d",&ch);
    int len,i;
    int ar[100];
    char a[100], b[100];
    switch(ch)
    {
        case 1:
        printf("Enter length of array\n");
        scanf("%d",&len);
        printf("Enter array elements\n");
        for(i=0;i<len;i++)
            scanf("%d",&ar[i]);
        reverse(ar,len);
        break;
        case 2:
        printf("Enter a String\n");
        scanf("%s",a);
        printf("Enter another String\n");
        scanf("%s",b);
        anagram(a,b);
        break;
        case 3:
        printf("Enter string\n");
        scanf("%s",a);
        int result=palindrome(a);
        if(result==1)
            printf("%s is a palindrome",a);
        else
            printf("%s is not a palindrome",a);
        printf("\n");
        break;
        default:printf("Wrong Choice");
    }
}
void reverse(int a[],int n)
{
    int l=n-1,i,temp;
    for(i=0;i<l;i++,l--)
    {
       temp=a[i];
       a[i]=a[l];
       a[l]=temp;
    }
    for(i=0;i<n;i++)
        printf("%d",a[i]);
    printf("\n");
    printf("The reverse of the array elements is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ,",a[i]);
    }
}
void anagram(char a[],char b[])
{
    char m;
    int i,j,ch,k,l;
    for (i = 0; a[i] != '\0'; i++);
    for (j = 0; b[j] != '\0'; j++);
    if(i==j){
    for(k=0;k<i;k++)
    {
        ch=0;
        m=a[k];
        for(l=0;l<j;l++)
        {
            if(m==b[l])
            {
                a[k]='\0';
                ch++;
                break;
            }
        }
        if(ch==0)
            break;

    }}
    else
        printf("Strings are not anagrams\n");
    if(ch==0)
        printf("Strings are not anagrams\n");
    else
        printf("Strings are anagrams\n");
}
int palindrome(char str[20])
{
    int i,j;
    for (i = 0; str[i] != '\0'; i++);
    int flag = 0;
    for (j=0;j<i;j++)
    {
        if (str[j]!=str[i-1-j])
        flag = 1;
    }
if (flag == 0)
    return 1;
else
    return 0;
}

