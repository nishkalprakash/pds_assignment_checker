#include<stdio.h>
void compare( char a[],char b[])
{
    int i,j,k;
    for(i=0; a[i]='\0'; i++);
    for(j=0;b[j]='\0'; j++);
        if(i==j)
    {
        for(k=0;k<i;k++)
        {
            if(a[k]=b[k])
                break;
        }
    }
    else
        printf("these are not anagram");
    if(k=!i){
        printf("these are anagrams ");
    }
    else
        printf("these are not anagram");

}
void main()
{
    char a[100],b[100];
    printf("enter a string:");
    gets(a);
    printf("enter another string:");
    gets(b);
    compare(a,b);
}




#include<stdio.h>
void main x(int a[],int n)
{
    int l,i,j;
    for(i=0;i<n;i++)
    {

        if (l<a[i])
            l=a[i];

    }
    printf(" the array sorted order is :");
    for(i=0;i<l;i++)
    {
        for(j=0;j<n;j++)
        {
            if (a[j]==i)
                printf("%d",a[j]);
        }
    }

}
void main()
{
    int a[10],n,i;
    printf("enter %d numbers: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    x(a,n);
}