/*
Name:Biswaranjan Samal
Roll no: 21IM10011
Dept: Industrial and Systems Engineering
Package: Codeblocks
Assignment:3,Question 4
*/

#include<stdio.h>
#include<math.h>

int linear_search(int arr[],int n,int x)
{
    int k;
    for (k = 0; k < n; k++)
        if (arr[k] == x)
            return k;

        return -1;
}
// int  bin_search()




int main() {
 int arr[20];
 int i,n,j,k,x,type=8,search,algo; //random non zero number
 printf("Enter the number of elements n: ");
 scanf("%d",&n);
 printf("Enter the elements in sorted order:");

 for(i=0;i<n ;i++)
    {
    scanf("%d",&arr[i]);
    }
 for(j=0; j<n ; j++)
    {
        if(arr[j]>arr[j+1])
        {
              printf("Array is Not sorted in ascending Order.Enter Again.\n");
              type=0;
              break;
            }

    }

//printf("%d",type);
        if(type == 8)
            {
             printf("Enter Key Element X,You want to search:\n");
             scanf("%d",&x);
             printf("Choose the algorithm: Type 1 for linear search and 2 for binary search.\n ");
             scanf("%d",&search);

             if(search==1)
                { algo = linear_search( arr,n,x);
                   if(algo!= -1)
                   {
                      printf("Executing the linear search algorithm.\n");
                      printf("Successful search.\n") ;
                      printf("Element %d has been found at the index %d ",x,algo) ;


                   }

                }
            /* else
             { algo = bin_search(arr,n,x);
                   if(algo!= -1)
                   {
                      printf("Executing the binary search algorithm.\n");
                      printf("Successful search.\n") ;
                      printf("Element %d has been found at the index %d ",x,algo) ;


                   }

                }*/






            }








 }
