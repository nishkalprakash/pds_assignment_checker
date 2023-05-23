/*Name: Abhiraj Ranjan
Roll Number: 22MI10002
Section: 2
Assignment: 6
Question: 3
Description: Arrays */
#include<stdio.h>
void swap(int* p,int *q)
{
    int t;
    t=*p;
    *p=*q;
    *q=t;
    return;
}
void rev(int a[],int n)
{
    int i=0;
    for(i=0; i<=n/2-1; i++)
    {
        swap(&a[i],&a[n-i-1]);
    }
    return;
}
void palindrome()
{
    int i, flag, temp = 0;
    char word[25];
    scanf ("%s", word);
    temp = 0;
    while (word[temp]) temp++;
    flag = 0;
    for (i=0; i<temp; i++)
    {
        if (word[i] != word[temp-1-i]) flag = 1;
    }
    if (flag==0) printf ("%s is a palindrome\n", word);
    else printf ("%s is not a palindrome\n", word);
    return ;
}
int len(char a[]){
int i=0;
for(i=0;a[i]!='\0';i++);
    return i;
}
void anagram(){
int i=0, flag=0, temp = 0;
char word1[25];
char word2[25];
scanf("%s",word1);
scanf("%s",word2);
if(len(word1)==len(word2)){
 i=0;
 int j=0;
 for(i=0;word1[i]!='\0';i++){
    for(j=0;word2[j]!='\0';j++){
        if(word1[i]==word2[j]) flag++;

    }
    if(flag==0){
       printf("%s and %s are not anagrams",word1,word2);
       flag=1;
       return;
    }
    flag=0;
 }
 if(flag==0)  {printf("%s and %s are anagrams",word1,word2);
 return;
 }
}
else{
    printf("%s and %s are not anagrams",word1,word2);
    return;
}
return;
}

int main()
{
    int menu;
    scanf("%d",&menu);
    if(menu==1)
    {
        int a[100];
        int n;
        scanf("%d",&n);
        int i=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        i=0;
        rev(a,n);
        for(i=0; i<n; i++)
        {
            printf("%d ",a[i]);
        }
    }
    if(menu==2)
    {
     anagram();
    }
    if(menu==3)
    {
        palindrome();
    }
    return 0;
}
