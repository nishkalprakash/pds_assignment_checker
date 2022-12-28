/*
Section 14
Roll no - 22IE10007
Name - Anisha Banerjee
Assignment 5
Program to merge two arrays
*/
#include <stdio.h>
#include <stdlib.h>
int*Merge(int size1,int size2,int*ptr1,int*ptr2,int*ptr3)
    {
      int i;
      for(i=0;i<(size1+size2);i++)
        {
          if(*ptr1<*ptr2)
            {
              *(ptr3+i)=*ptr1;
               ptr1++;
            }
          else if (*ptr2<*ptr1)
               {
              *(ptr3+i)=*ptr2;
               ptr2++;
            }
         else if(*ptr1==*ptr2)
             
            {
              *(ptr3+i)=*ptr1;
               ptr1++;
            }
         }
              
        return ptr3;
       
}
int main()
   {
     int n1,n2,i;
     int*a;
     int*b;
     int*ptr3;
     printf("Enter size\n");
     scanf("%d",&n1);
     a=(int*)malloc(n1*sizeof(int));
     printf("Enter values\n");
     for(i=0;i<n1;i++)
        scanf("%d",&a[i]);
     printf("Enter size\n");
     scanf("%d",&n2);
     b=(int*)malloc(n2*sizeof(int));
     ptr3=(int*)malloc((n1+n2)*sizeof(int));
     printf("Enter values\n");
     for(i=0;i<n2;i++)
        scanf("%d",&b[i]);
     Merge(n1,n2,a,b,ptr3);
     printf("A = ");
     for(i=0;i<n1;i++)
        printf("%d ",*(a+i));
     printf("B = ");
     for(i=0;i<n2;i++)
        printf("%d ",*(b+i));
     printf("C = ");
     for(i=0;i<(n1+n2);i++)
        printf("%d ",*(ptr3+i));
     return 0;
    }
