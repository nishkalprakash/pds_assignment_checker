// Name : Krishna Chaudhari
// roll: 22MT10012
//Q3.

#include<stdio.h>
int reverse();

int main()
{
    int i,s,d,k;
    printf("Enter the size of array and direction \n:");
    scanf("%d%d",&s,&d);
    int num[s+1];
    printf("Enter %d integers :\n",s);
    for(i=0; i<s; i++)
    {
        scanf("%d",&num[i]);
    }
    printf("orignal Array : \n");
    for(i=0; i<s; i++)
    {
        printf("%d ",num[i]);
    }
    printf("\n\n");
    printf("Array after reverse : \n");
    for(i=s-1;i>=0;i--)
    {
        printf("%d ",num[i]);
    }
    printf("\n\n");

    if(d==1)
    {
        printf("Array after left cycle shift \n");
        for(i=s-2;i>=0;i--)
        {
            printf("%d ",num[i]);
        }
        printf("%d",num[s-1]);
    }
    else
    {
        printf("Array after right cycle shift : \n");
        printf("%d ",num[0]);

        for(i=s-1;i>0;i--)
        {
            printf("%d ",num[i]);
        }
    }
    return 0;
}