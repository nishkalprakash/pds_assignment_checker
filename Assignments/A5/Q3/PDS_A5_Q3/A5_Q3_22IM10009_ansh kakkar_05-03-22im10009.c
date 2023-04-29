#include<stdio.h>
void swap(int *p,int *q)
{  int count;
 count=*p;
 *p=*q;
 *q=count;
}
int main()
{    int n;
     printf("enter the number of values in array\n");
     scanf("%d",&n);//size of the array is defined
    int arr[n];
    printf("enter the values in array\n");//value of elements in array
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    return 0;

}
