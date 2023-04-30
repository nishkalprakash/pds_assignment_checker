#include <stdio.h>//header file
#define N 100//setting the upper limit using macro

int main()
{
    int a[N],n,i,k,t,p,j=0,temp;
    printf("Enter the number of elements to be stored in the array");
    scanf("%d",&n);//asking the user to input number of elements in the array
    if (n>N)//max size of the array is 100 so n should be less than 100
    {
        printf("Error: n > %d",N);
    }
    else
    {
        //taking the elements of array as input
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("Original Array:");
        //printing the original array
        for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");

        for(i=0;i<n;i++)
        {
            p=-1;//will help to determine whether the remaining part of our array has a negative element or not
            if (a[i]<0)//if our traversing element is negative then ,it is in its correct position so don't do anything
            {
                j++;
                continue;
            }
            //the compiler will reach this segment if the if statement is not true
            for(k=i+1;k<n;k++)
            {
                if(a[k]<0)//search the position of the next element
                {
                    t=a[k];
                    p=k;//store the index of the negative element in p
                    break;
                }

            }
            if (p>-1)
            {


                for(int l=p;l>=j+1;l--)//shifting the negative element to its correct position without changing the order of the array
                {
                    temp=a[l];
                    a[l]=a[l-1];
                    a[l-1]=temp;

                }
                j++;//checking how many negative elements have we already fixed
            }


        }

    printf("Rearranged Array:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    }

}
