/*

Section 14

Roll no : 22CE10065

Name : Saloni Shaw

Test 2 (Set-B)

Description - Program to reverse the array

*/
#include<stdio.h>
#include<stdlib.h>
int mval()//for getting the value of m
{int m;
    printf("Enter M: ");
    scanf("%d",&m);
    return m;
}
int nval()//for getting the value of n
{
int n;
printf("Enter N: ");
scanf("%d",&n);
return n;
}
int sizeval(int m, int n)//for getting the whole array size
{
int size=m*n;
return size;
}
int entry(size)//for entering the values 
{
int *arr = (int *)malloc(sizeof(int)*size);
    printf("Enter %d elements",size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
return arr;
}
}

/*
int reverse(int size, int *arr)
{int arr1;
for(int i=0;i<size;i++)
{
int *arr1[size];
int j=size-1;
*arr1[i]=arr[j];
size--;
}
for(int i=0;i<size;i++)
{
printf("%d ",arr1[i]);
}
}*/
int main(){
int m=mval();
int n=nval();//function calling
int size=sizeval(m,n);
int *arr= entry(size);
for(int i=0;i<size;i++)
{
int *arr1[size];
int j=(size-1)-i;
arr1[i]=arr[j];
}
for (int k=0;k<m;k++)
{
for(int p=0;p<n;p++)
printf("\n");
}
}

    

    
