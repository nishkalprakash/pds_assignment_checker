/*
* Section 2
* Roll no : 22GG10052
* Name : Vedant Thakare
* Assignment : 7
* Description : Name
*/
#include<stdio.h>
int  main()
{
    char **X;
    int n,i;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Enter the name\n");
    for(i=0;i<n;i++)
    {
        scanf("%s",X[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%s",*X[i]);
    }
    return 0;




}
