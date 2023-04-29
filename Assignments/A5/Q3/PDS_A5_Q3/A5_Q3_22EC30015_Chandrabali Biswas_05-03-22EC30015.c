/*
Section :2
Roll No:22EC30015
Name: Chandrabali Biswas
Assignment No:5
Description: Recursion
*/
#include <stdio.h>
int size,t,s;   //global variables
int main()    //main
{
    int n,d,a[100];
    printf("Enter the size of the array and direction:");
    scanf("%d%d",&n,&d);
    size=n;
    printf("Enter %d integers:",n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        t=a[0];
        s=a[size-1];
    printf("Original array:");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);

    reverse(a,0);
    printf("\nArray after reverse: ");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    cyclicShift(a,d,0,size-1);
    if(d==1)
        {
            printf("\nArray after left cyclic shift:");   //printing left cyclic array

        }
    else
        printf("\nArray after right cyclic shift:");     //printing right cyclic array
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;  //end
}
void swap(int *p,int *q)   //swapping variables
{
    int t;
    t=*p;
    *p=*q;
    *q=t;
}
void reverse(int *a,int i)
{

   if(i==(size+1)/2)
    return;
    swap(&a[i],&a[size-i-1]);

    return reverse(a,i+1);
}
void cyclicShift(int *a,int direction,int i,int j)
{

    if(i==size || j==-1)
        return;
   if(direction==1)   //left cyclic shift
   {
       if(i==size-1)
       a[i]=s;
       else
        a[i]=a[i+1];
       return cyclicShift(a,direction,++i,j);

   }
   if(direction!=1)    //right cyclic array
   {
     if(j==0)
        a[j]=t;
     else
        a[j]=a[j-1];
     return cyclicShift(a,direction,i,--j);
   }

}

