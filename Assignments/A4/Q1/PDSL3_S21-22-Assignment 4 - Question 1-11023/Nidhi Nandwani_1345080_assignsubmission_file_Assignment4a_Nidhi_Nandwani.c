/*
Name: Nidhi Nandwani
Roll no. : 21MA10036
Section: 3
Package: Visual Studio Code
*/
#include<stdio.h>
void fun(int a[],int n, int l, int data[],int start, int index)
{
    //using data to store the values that will be printed   
    if(index == l) // once the data stores all the values till length then printing those values
    {
        for(int i=0; i<l; i++)
            {
                printf("%d ", data[i]);
            }
        printf("\n");
        return;
    }
    for(int i=start; i<n;i++)
    {        
        data[index] = a[i];//storing the values in data array
        fun(a,n, l, data, i,index+1);        
    }
}

int main()
{
    int length, r;
    printf("Enter the length of array: ");
    scanf("%d", &length);
    int array[length];
    printf("Enter the elements of array: ");
    for(int i=0; i<length; i++)
    {
        scanf("%d", &array[i]);
    }
 
    printf("Enter the length l= ");
    scanf("%d", &r);

    int data[r-1];
    fun(array, length, r, data, 0, 0);//calling the recursive function to start from the first number
}
