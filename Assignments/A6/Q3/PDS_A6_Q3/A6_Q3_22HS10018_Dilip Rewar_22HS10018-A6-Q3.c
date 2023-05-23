#include<stdio.h>
/*
Section 2
Roll No: 22HS10018
Name: Dilip Kumar Rewar
Assignment No: 6
Description: Question 3
*/
int first(int n){
    int a[10],i,l,temp;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }

    printf("\n");

    l=n-1;

    for(i=0;i<l-1;i++,l--)
    {
    temp=a[i];
    a[i]=a[l];
    a[l]=temp;
    }

    for(i=0;i<n;i++)
    {
    printf(" %d",a[i]);
    }
}

int palindrome(char str[20]){
    int k=20, i, flag=0;

    while(i<20){
        if(str[i]=='\0')
            k=i-1;
            break;

    }
}


int main()
{
    int which_program,n;
    printf("Program to be executed: ");
    scanf("%d",&which_program);
    if(which_program == 1){
        printf("Number of elements in array:");
            scanf("%d",&n);
        printf("%d",first(n));
    }

    if(which_program == ){
        printf()
    }
return 0;
}
