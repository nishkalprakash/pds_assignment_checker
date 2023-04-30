#include<stdio.h>
void swap(int *p , int *q)
{
int t;
t = *p; *p = *q; *q = t;
}
void reverse(int a[] , int l)
{ int i ;
    for(i=0 ; i<l ;i++ )
    {
        a[i] = a[l-i-1] ;
    }
}

int main()
{

int a[100] , i ,n ;
for(i=0 ; i<n ; i++)
{
scanf("%d" ,&n) ;
}

reverse(a ,n ) ;

    for(i=0 ; i<n ; i++)
    {
        printf("%d",a[i]) ;
    }
    return 0;
}
