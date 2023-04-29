/*name-sandesh patil
  sectiom-2
  roll no-22MF10034
  question-1*/


#include<stdio.h>
#define N 100

int main()
{
    int a[100],i,n,l,z,s=n-1;
    printf("enter how many numbers to enter: \n");
    scanf("%d",&n);
    printf("enter the array of elements \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    l=0;
    z=0;
    s=n-1;
  for(i=0;i<n;i++){
    if(a[i]<0)
     a[i]=a[s];
    }

    for(i=0;i<n;i++)
    {
     printf("a[%d] is = %d",i,a[i]);
    }


    return 0;

}

