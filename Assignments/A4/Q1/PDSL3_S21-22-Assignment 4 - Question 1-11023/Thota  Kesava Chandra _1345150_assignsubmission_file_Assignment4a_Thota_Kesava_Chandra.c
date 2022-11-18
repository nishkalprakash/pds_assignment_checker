/*
Thota Kesava Chandra
Computer Science Department
21CS30056
Code Blocks
Windows
*/


#include <stdio.h>

void combo(int a[],int num,int len)
{
    static int b[20],count=0;
    int i,j;
    if (len==1)
    {
        for(i=0;i<num;i++)
        {
            b[len-1]=a[i];
            printf("{");
            for(j=0;j<count+len;j++)
            {
                printf(" %d ",b[j]);
            }
            printf("}\n");
        }
        count--;
        return;
    }
    for(i=0;i<num;i++)
    {
        for (j=count;j<num*(len-1);j++)
        {
            b[j]=a[i];
            count++;
            combo(a,num,len-1);
        }
    }
}

int main()
{
    int a[20],num,len,i;
    printf("Enter the number of elements of array : ");
    scanf("%d",&num);
    printf("Enter the array : ");
    for (i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
        for(int j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                i -= 1;
                num -=1;
                break;
            }
        }
    }
    printf("Enter the number of elements of set : ");
    scanf("%d",&len);
    combo(a,num,len);
    /*for(i=0;i<num;i++)
    {
        printf(" %d ",a[i]);
    }*/

    return 0;
}

