#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{

    char *ptr;
    char name[100];

    ptr=(char*)calloc(5,sizeof(char));
    printf("enter 5 names:");
    for(int i=0; i<5; i++)
    {
        scanf("%ch",&ptr[i]);

    }

    for(int i=0;i<5;i++)
    {
        scanf("%ch",&ptr[i]);
    }
    //print
    for(int i=0;i<8;i++)
    {
        printf("name %d is %ch\n",i,&ptr[i]);
    }
    return 0;
}