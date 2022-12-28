/ Name Bonthu Matthews
// section 14
// Roll No 22PH10013
// Assignment 6

#include <stdio.h>
int Merge(int size1,int size2,int *ptr1,int *ptr2)
{
    int ptr3[size1+size2];
    for( int i=0;i<size;i++)
    {
        ptr3[i]=ptr1[i];
    }
    for(int i=size;i<(size1+size2);i++)
    {
        ptr3[i]=ptr2[i-size1];
    }
    int temp;
    for(int i=0;i<size1+size2;i++)

    {
        for(int j=i+1 ; j<size1+size2; j++)
        {
            if(ptr3[i]<=ptr3[j])
            {
                continue;
            }
            else
            {
                temp=ptr3[i];
                ptr3[i]=ptr3[j];
                ptr3[j]=temp;
            }
        }
    }

    for(int i=0;i<size1+size2;i++)
    {
        printf("%d",ptr3[i]);
    }
}
int main ( )
{
    int i,size,size2;
    int ptr1[m];
    int ptr2[n];
    int ptr3[m+n];
    printf("please enter the number of elements in first array");
    scanf("%d",&size1);
    printf("please enter the elements in first array");
    for(i=0;i<size1;i++)
    {
        printf("enter %d element \n",i);
        scanf("%d",&ptr1[i]);
    }
    printf("please enter the number of element in second array");
    scanf("%d",&size2);
    printf("please enter the elements of second array");
    for(i=0;i<size2;i++)
    {
        printf("enter %d element\n",i);
        scanf("%d",&ptr2[i])
    }

    printf("A is=\n");
    for(i=0;i<size1;i++)
    {
       printf("%d ",ptr1[i]);
    }
    printf(" B is =\n");
    for(i=0;i<size2;i++)
    {
        printf("%d ",ptr2[i]);
    }
    printf(" c is = \n");
    for(i=0;i<(size1+size2);i++)
    {
        printf("%d ",ptr3[i]);
    }

}