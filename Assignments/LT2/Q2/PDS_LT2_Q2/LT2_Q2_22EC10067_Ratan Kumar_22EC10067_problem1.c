/* Name : Ratan kumar
Roll: 22EC10067
Section: 2
Problem No.: 2
Lab test 2*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct record
{
    char rollNo[12];
    char branch[2];
    int dob;
} record;
int main()
{

    int n,Y,d1,m1,y,sum=0;
    scanf("%d",&n);
    int *ptr;
    ptr = (int *)malloc(n*sizeof(int));
    record arr[n];
    if(n>100)
    {
        printf("Invalid value of N");
    }
    for(int i=0; i<n; i++)
    {
        scanf("%s",arr[i].rollNo);
        scanf("%s",arr[i].branch);
        scanf("%d/%d%d/%d",&d1,&m1,&y);
    }
    for(int i=0; i<n; i++)
    {
        arr[i].dob = d1/m1/y;
    }
    scanf("%d",&Y);
    for(int i=0; i<n; i++)
    {
        if(y<Y)
        {
            printf("Deleted Records:");
            printf("%s",arr[i].rollNo);
            printf("%s",arr[i].branch);
            printf("%d",arr[i].dob);
            sum++;
        }


    }
    printf("m = %d,",sum);
    printf("n-m=%d",n-sum);
    for(int i=0; i<n; i++)
    {
        if(y>Y)
        {
            printf("Remaining Records:");
            printf("%s",arr[i].rollNo);
            printf("%s",arr[i].branch);
            printf("%d",arr[i].dob);
        }
    }
    //realloc(ptr,(n-m)sizeof(int));
    return 0;
}



