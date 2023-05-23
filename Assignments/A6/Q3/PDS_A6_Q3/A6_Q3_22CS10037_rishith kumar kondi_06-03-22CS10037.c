#include<stdio.h>
#include<string.h>
void rev(int a[10],int i,int j)
{
    int m;
    if(i<=j){return ;}
    else m=a[i];a[i]=a[j];a[j]=m;rev(a,i-1,j+1);

}
int anagramcheck(char p[20],char q[20],int u)
{
    int i,j,g=0,k;
    for(i=0;i<u;i++){
        for(j=0;j<u;j++)
        {
            if(q[j]==p[i]){g=g+1;}
        }
        if(g>=1){k=1;g=0;}
    }
    if(k==1){return (1);}
    else return 0;
}
int palindromecheck(char r[20],int q,int p)
{
   if(r[p]==r[q]){if(p==q){return 1;}palindromecheck(r,q+1,p-1);return 1;}
   else {return 0;}
}
int main()
{
    int i,j,k,n,l,a[10],u,x,c,d,e;
    char p[20],q[20],r[20];
    scanf("%d",&n);
    if(n==1){
        scanf("%d",&l);
        for(i=0;i<l;i++)
        {
            scanf("%d",&a[i]);
        }
        rev(a,i-1,0);for(i=0;i<l;i++){printf("%d ",a[i]);} }
   if(n==2)
    {
        scanf("%s",p);
        scanf("%s",q);
        u=strlen(p);
        x=strlen(q);
        if(u==x){
        c=anagramcheck(p,q,u);
        if(c==1){printf("the two are anagrams");}
        if(c==0){printf("the two are not anagrams");}}

    }
    if(n==3)
    {
        scanf("%s",r);
        d=strlen(r);
        e=palindromecheck(r,d-1,0);
        if(e==1){printf("%s is palindrome",r);}
        if(e==0){printf("%s si not palindrome",r);}
    }
}