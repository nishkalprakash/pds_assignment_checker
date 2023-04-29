/*
section :
roll no :
name :
assignment no :
*/
#include<stdio.h>
/*void swap(int p, int q);



int main()

{
   int p,q;
   printf("enter p, q");
   scanf("%d %d", &p,&q);
    return 0;
}*/

int main()
{
int a[10],i,n,k,l;
printf("enter limit(<10) : ");
scanf("%d", &n);
printf("enter elements : ", n);
for(i=0;i<n;i++)
{
    scanf("%d", &a[i]);
}
l=n-1;
for(i=0;i<l;i++,l--)
{
  k=a[i];
  a[i]=a[l];
  a[l]=k;
}
printf("the reverse the ordering of the elements is : ");
for(i=0;i<n;i++)
{
    printf("%d ", a[i]);
}

return 0;
}
