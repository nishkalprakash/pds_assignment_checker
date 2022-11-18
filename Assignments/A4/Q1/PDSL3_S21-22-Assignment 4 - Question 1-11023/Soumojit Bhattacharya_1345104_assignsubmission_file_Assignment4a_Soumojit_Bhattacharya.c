/*Soumojit Bhattacharya 
21EC10071 
macos visual studio code*/
#include <stdio.h>
int bsize=0;                                 //global value to store initial value of user inputted I
                                             //since I will be changed during recursion


int unique(int a[],int j)                    //this keeps all the elements in the array unique
{                                            //the function tells us if the number given by user 
    int flag=0;                              //is already stored or not
    for(int i=0;i<j;i++)
    {
        if(a[j]==a[i])
        {
            return 1;
        }
    }
    return 0;
}
void combo(int a[], int b[],int I, int j)
{

    int i;
    if(I==0)
    {
        for(i=0;i<bsize;i++)
        printf("%d ", b[i]);               //after the b array is filled print it
        printf("\n");
        return;
    }
    for(i=j-1;i>=0;i--)
    {
        b[I-1]=a[i];                       //update the b array
        combo(a,b,I-1,i+1);                //update I in next function to I-1 since 1 element was added
                                           //also update the apparent size of array so that the elements after ith one are discarded
    }

}
int main()
{
    printf("Enter size of array: ");
    int n;                                //stores size of user given array
    scanf("%d", &n);                      //input size of array
    int a[n];                             // stores array given by user
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);                //input array
        if(unique(a,i)==1)
        {                                  //if number given not unique then decrease n(effectively decreases size of array)
            n--;                           //also decrease i so the ununique number gets overwritten by next number
            i--;
        }
    }
    printf("Enter value of I: ");
    int I;
    scanf("%d", &I);                       //input I from user
    bsize=I;                               
    int b[I];                              //will store all the I sized arrays to be printed later
    combo(a,b,I,n);                        //b array will store each configuration of numbers before printing it
    printf("\n");
    
    return 0;
}