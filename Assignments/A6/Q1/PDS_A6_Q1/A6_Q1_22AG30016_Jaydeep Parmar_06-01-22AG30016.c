#include<stdio.h>
int x(int a[],int n)
{
    printf("reverse order is: ");
    for(int i=(n-1);i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
int palindrome(char str[20])
{
    char tem=' ';
    for(int l=0;str[l]!='\0';l++);
    int l;
for(int i=0;i<l/2;i++)
{
if(str[i]!=str[l-i-1])
{
tem=str[i];
str[i]=str[l-i-1];
str[l-i-1]=tem;
}
}
(tem==' ')? printf("The reverse string is %s i.e. The string is palindrome\n",str) :
printf("The string is not palindrome. The reverse string is %s \n",str);
return 0;
}
int main()
{
int a[10],n,i;
printf("Enter limit (<10): ");
scanf("%d",&n);
printf("Enter %d numbers: ",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
x(a,n);
char t[20];
printf("enter string for checking palindrome: ");
scanf("%s",t);
palindrome(t);

}
