/*
* Section 2
* Roll No : 22HS10038
* Name : Nayan Chauhan
* Assignment No : 6
* Description :
*/
#include <stdio.h>
void swap(int *p, int *q)
{
    int t = *p;
    *p = *q;
    *q = t;
}
void reverse(int a[], int s, int e)
{
    swap(a+s*1, (a+(e-s)*1));
    ++s;
    --e;
    if(s>=e)
    {
        return;
    }
    else{
        reverse(a, s, e);
    }
}
int anagram(char a[], char b[], int x, int y)
{
    int flag=0;
    if(x!=y)flag=1;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            if(a[i]==b[j]){


            }
        }
        flag=1;
    }
    for(int i=0;i<y;i++)
    {
        for(int j=0;j<x;j++)
        {
            if(b[i]==a[j]){
                a[j]='\0';
                break;

            }
        }
        flag=1;
    }

    return(flag);
}
int palindrome(char str[20])
{
    static int k=20, flag=0;
    for(int i=0; i<20; i++)
    {
        if(str[i]=='\0'){
            k=i-1;
            break;
        }
    }
    for(int i=0;i<=(k+1)/2;i++){
        if(str[i]!=str[k-i]){

            flag=1;
            break;
        }
    }
    if(flag==0) return(0);
    else return(1);
}
int main()
{
    int option;
    scanf("%d",&option);
    if(option==3){
        char str[20];
        scanf("%s", str);
        int flag = palindrome(str);
        if(flag==0) printf("Yes is Palindrome");
        else printf("Not Palindrome");
    }
    if(option==1){
        int n, a[n];
        scanf("%d",&n);
        for(int i = 0;i<n;i++)
        {
            scanf("%d", &a[i]);
        }
        reverse(a, 0, n-1);

    }
    if(option==2){
        char a[20], b[20];
        int k, l;
        for(int i=0; i<20; i++)
        if(a[i]=='\0'){
            k=i-1;
            break;
        }
        for(int i=0; i<20; i++)
        if(b[i]=='\0'){
            l=i-1;
            break;
        }
        scanf("%s", a);
        scanf("%s", b);
        int flag = anagram(a,b,k,l);
        if(flag==1) printf("Not an anagram");
            else if(flag==0) printf("Yes, Anagram");
}
}
