/* Shruti Srivastava
   21EE30025
   Electrical Engg Dual Degree
   Section 03
   Codeblocks
   Windows 10 */

#include<stdio.h>
#include<stdlib.h>
void binCreate(int a[],int size,int num,int min,int max);

void binCreate(int a[],int size,int num,int min,int max)
{
    int interval=max-min+1;

    if (interval%num!=0)
    {
        /* code */
        printf("\nNot possible to create bins");
        return;
    }
    else
    {
        int x=interval/num;



        for (int j = 0; j < num; j++)
        {
            int lower=min+(j*x);
            int upper=max-((num-1-j)*x);
            int count=0;
            printf("\nbin%d-> ",j+1);
            for (int i = 0; i < size; i++)
            {
                if (a[i]>=lower && a[i]<=upper)
                {
                    printf("%d, ",a[i]);
                    count++;
                }

            }

            printf("; Number of elements= %d",count);
        }// end of for loop


    }


}
int main()
{
    int n,*arr,max,min;
    printf("Enter the number of array elements: "); //Taking the size of array as input from user
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));  // Allocating the Array
    printf("\nEnter elements of array: "); //Taking Array elements as input
    for (int i = 0; i < n; i++)
    {
        scanf("%d",arr+i);
        if (i==0)
        {
            max=arr[0];
            min=arr[0];
            continue;
        }
        max=(max<arr[i])?arr[i]:max;
        min=(min>arr[i])?arr[i]:min;
    }//for loop fills array


    int num;

    printf("\nEnter the number of bins: "); //Taking the number of bins as input from user
    scanf("%d",&num);

    binCreate(arr,n,num,min,max); //calling the bin function

}
