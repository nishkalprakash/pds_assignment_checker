/*
Name: Aditya Raj Shit
Roll no. : 22AE10002
Set: B
Question: 2
*/

#include<stdio.h>
#include<stdlib.h>

int bigger(int a,int b)             //function to return larger of two numbers.
{
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int max(int* a,int n)               //funtion to find max number in the list
{
    if(n==1){
        return a[0];
    }

    int mid=n/2;
    int largest=bigger(max(a,mid),max(a+mid,n-mid));
    return largest;
}

int main()
{
    int n,p,q;
    printf("Enter size of array: ");
    scanf("%d",&n);                     //taking size of list from user
    printf("\nEnter upper and lower limit of the random numbers: ");
    scanf("%d%d",&p,&q);        //taking upper and lower limits from user

    int* arr;
    arr=(int*)malloc(sizeof(int)*n);        //creating array of size n

    for(int i=0;i<n;i++){
        arr[i]=rand()%(q-p+1)+p;
    }


    printf("List = [");             //printing elements of list
    for(int i=0;i<n-1;i++){
        printf("%d, ",arr[i]);
    }
    printf("%d]\n",arr[n-1]);

    printf("Max = %d",max(arr,n));      //printing the max value of a list

}
