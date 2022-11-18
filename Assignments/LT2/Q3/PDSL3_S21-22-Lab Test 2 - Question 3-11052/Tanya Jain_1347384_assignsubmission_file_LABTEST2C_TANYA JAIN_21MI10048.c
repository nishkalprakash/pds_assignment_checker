#include <stdio.h>
#include <string.h>

int minTotalIqDiff(int m, int n[])
{
    int l=strlen(n);
    int ar[l-1];
    for(int i=0;i<l-1;i++)
    {
        ar[i]=n[i];
    }
    if(m==0)
        return 0;
    else if(m==1)
    {
        if(l==0)
            return 0;
        return n[l-1]+minTotalIqDiff(m,ar);
    }
    return minTotalIqDiff(m-1,ar)-minTotalIqDiff(m-2,ar);

}

int main()
{
    printf("Enter the number of students: ");
    int num;
    scanf("%d",&num);
    int n[num];
    int m;
    printf("Enter array n[]: ");
    for (int i = 0; i < num; i++)
    {
        scanf("%d",n[i]);
    }
    printf("Enter m: ");
    scanf("%d",&m);
    int r=minTotalIqDiff(m,n);
    printf("Output : %d",r);
    return 0;
}