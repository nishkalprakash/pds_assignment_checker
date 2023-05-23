#include <stdio.h>
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;

}
void reverse(int *arr,int k,int n)
{

    static int i=0;
    if (k>n)
    {
        return ;
    }
    swap(&arr[k],&arr[n]);

    reverse(arr,k+1,n-1);

}
int anagram(char str1[],char str2[])
{
    printf("Hi");
    int len1,i,j,len2,c1=0,c2=0,c;
    char cha;
    for(i=0;str1[i]!='\0';i++);
    len1=i;
    for(i=0;str2[i]!='\0';i++);
    len2=i;
    if(len1!=len2)
    {
        return 0;
    }
    for(cha='a';cha<='z';cha++)
    {
        for(i=0;i<len1;i++)
        {
            if(cha==str1[i])
            {
                c1++;
            }
        }
        for(j=0;j<len2;j++)
        {
            if(cha==str2[j])
            {
                c2++;
            }
        }
        if(c1!=c2)
        {
            return 0;
        }

    }
   return 1;

}
int palindrome(char str[20])
{
    int len,i;
    for(i=0;str[i]!='\0';i++);
    len=i;
    for(i=0;i<=len/2;i++)
    {
        if(str[i]!=str[len-1-i])
        {
            return 0;
        }
    }
    return 1;
}



int main()
{
    int choice,i,c,len,n,arr[100],pal,ana;
    char ch,str[100],str1[100],str2[100];
    printf("Enter your choice\n");
    scanf("%d",&choice);
    if(choice==1)
    {


        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        reverse(arr,0,(n-1));
        for(i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
    }
    if (choice==2)
    {
        scanf("%s%s",str1,str2);
        ana=anagram(&str1,&str2);
        if (ana)
        {
            printf("%s and %s are anagrams");
        }
        else
        {
            printf("%s and %s are not anagrams");
        }


    }
    if(choice==3)
    {
        scanf("%s",str);
        pal=palindrome(str);
        if(pal)
        {
            printf("%s is a palindrome",str);
        }
        else
        {
            printf("%s is not a palindrome",str);
        }
    }




    }


