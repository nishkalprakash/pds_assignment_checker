#include <stdio.h>
int *Merge(size1,size2,*ptr1,*ptr2)
{
int arr[size1+size2];
int k=0;
int i,j;
for(i=0;i<size1;)
{
for(j=0;j<size2;)
{
if(*ptr1+i<*ptr2+j)
{
arr[k++]=*ptr1+i;
i++;
}
else if(*ptr2+j<*ptr1+i)
{
arr[k++] = *ptr2+j;
j++;
}
else
{
arr[k] = *ptr2+j;
k++;
arr[k] = *ptr2+j;
k++;
i++;
j++;
}
}
}
return *arr;
}
int main()
{
printf("enter the sizes\n");
int size1,size2;
scanf("%d",&size1);
scanf("%d",&size2);
int i;
int arr1[size1],arr2[size2];
printf("enter in the first array");
printf("\n");
for(i=0;i<size1;i++)
{
scanf("%d",&arr1[i]);
}
printf("enter in the second array\n");
for(i=0;i<size2;i++)
{
scanf("%d",&arr2[i]);
}
int *arr = *Merge(size1,size2,&arr1[0],&arr2[0]);
for(i = 0;i<size1+size2;i++)
printf("%d",*arr+i);
}
}
