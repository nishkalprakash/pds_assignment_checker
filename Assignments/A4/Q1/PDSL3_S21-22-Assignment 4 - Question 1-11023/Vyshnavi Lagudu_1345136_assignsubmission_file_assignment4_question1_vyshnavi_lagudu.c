/*name           : vyshnavi_lagudu
dept             : EE
roll number      :21EE10044
assignment class :3c
package          : code blocks
comments: all inputs are integers and output value is integers
*/
#include <stdio.h>
#include<string.h>
void values(int a[],int b[],int p, int q,int r,int l);
void Combinations(int a[], int n, int l)
{
    int b[l];
    values(a,b,0,n-1,0,l);
}
void values(int a[],int b[],int p,int q,int r,int l)
{
    if(r== l){
             for (int j=0;j<l;j++)
             printf("%d ",b[j]);
             printf("\n");
                return;
           }
    for (int i=p;(i<=q)&&(q-i+1 >= l-r);i++)
    {
        b[r] = a[i];
        values(a,b,i+1,q,r+1,l);
    }
}

main()
{
    int a[20],l,n,k;
    printf("input:");
    scanf("%s",a);
    k=strlen(a);
    n=k/sizeof(a[0]);
    Combinations(a,n,l);
}
