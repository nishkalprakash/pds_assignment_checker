/*Section 2
Roll no.: 22ME10091
Name: Shreya Vadhavkar
Assignment : 5
Description:Reverse and cyclic shift of arrays  */
#include<stdio.h>
void swap(int *p,int *q);
void reverse(int *a,int);
void cyclicShift(int *a, int dir,int);
int lim;
int y,z;
int perm;
int main()
{

    int dir;
    int *p;
    printf("Enter the size of the array and the direction: ");
    scanf("%d %d", &lim, &dir);
    int count =lim;
    int countl=lim-1;
    int countr=lim-1;
    int a[lim];
    int i;
    y=0,z=lim-1;
    perm=lim;
    printf("Enter %d integers:",lim);
    for(i=0;i<lim;++i)
    {
        scanf("%d", &a[i]);
    }
    printf("Original array:");
    for(i=0;i<lim;++i)
    {
        printf(" %d", a[i]);
    }
    p= &a[lim-1];
    printf("\nArray after reverse:");
    reverse(p,count);
    if(dir==1)
    {
        printf("\nArray after left cyclic shift:");
    }
    else
    {
        printf("\nArray after right cyclic shift:");
    }
   cyclicShift(a,dir,lim);
    return 0;
}

void swap(int *p,int *q)
{
    int *temp;
    temp = p;
     p=q;
    q= temp;
}
void reverse(int *a,int count)
{
    if(count!=0)
    {
        printf(" %d", *a);
        --count;
        a=a-1;
        reverse(a,count);
    }
}

void cyclicShift(int *a,int dir,int lim)
{
    if(dir==1)
    {
       if(lim!=1)
       {
           swap(a+y,a+y+1);
           --lim;
           ++y;
           cyclicShift(a,dir,lim);
       }
       else
       {
           int i;
           for(i=0;i<perm;++i)
           {
               printf(" %d", a[i]);
           }
       }
    }
    else
    {
        if(lim!=1)
        {
            swap(a+z,a+z-1);
            --z;
            --lim;
            cyclicShift(a,dir,lim);
        }
        else
        {
            int i;
            for(i=0;i<perm;++i)
            {
                printf(" %d", a[i]);
            }
        }
    }
}
