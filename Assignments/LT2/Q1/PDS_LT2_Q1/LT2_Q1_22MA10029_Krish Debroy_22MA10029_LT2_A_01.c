/*
Name    : Krish Debroy
Roll No : 22MA10029
*/

#include <stdio.h>

float mean(int *a,int n)/*takes sum of each sub array and adds it up */
{
    if(n==1)
    {
        return a[0];
    }
    else if(n==0)
    {
        return 0.0;
    }
    int* b;
    float u1,u2;
    b=a+((n/2));
    u1=mean(a,(n/2));
    u2=mean(b,(n-n/2));
    return (u1+u2);
}

int main()
{
    int num;
    int * rec;
    printf("Enter the number of integers :");
    scanf("%d",&num);
    rec= (int *)malloc(num*sizeof(int));
    printf("\nEnter the numbers : ");
    for(int i=0;i<num;i++)
    {
        scanf("%d",&rec[i]);
    }
    printf("List = [");
    for(int j=0;j<num;j++)
    {
        if (j==num-1)
        {
            printf("%d]\n",rec[j]);
        }
        else
        {
            printf("%d, ",rec[j]);
        }
    }
    printf("Mean = %.2f",mean(rec,num)/num);




    return 0;
}
