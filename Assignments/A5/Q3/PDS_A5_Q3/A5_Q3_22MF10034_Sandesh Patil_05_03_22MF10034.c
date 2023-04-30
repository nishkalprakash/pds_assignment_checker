/*name-sandesh patil
  sectiom-2
  roll no-22MF10034
  question-1*/


#include<stdio.h>
void swap(int*p,int*q);
int reverse(int*a[]);
int main()

{
    int a[100],i,b,c,l,temp,p,q;
    printf("Enter size of array and direction \n");
    scanf("%d%d",&b ,&c);
    return 0;
    printf("enter the array \n");
    for(i=0;i<b;i++)
    scanf("%d",&a[i]);
    swap(p,q);
    reverse(a[b]);
    for(i=0;i<b;i++)
     {
       printf("%d",&a[i]);
     }
   return 0;

}
void swap(int*p,int*q)
{
    int y;
    y=p;
    p=q;
    q=y;
}

int reverse(int*a[100])
{   int l,b,temp,i;
    l=b-1;
    for(i=0;i<l;i++,l--)
    {
    temp=a[i];
    a[i]=a[l];
    a[l]=temp;
    }
    printf("The reverse of the array elements is: ");
    for(i=0;i<b;i++)
    {
    printf("%d",a[i]);
    }

}
