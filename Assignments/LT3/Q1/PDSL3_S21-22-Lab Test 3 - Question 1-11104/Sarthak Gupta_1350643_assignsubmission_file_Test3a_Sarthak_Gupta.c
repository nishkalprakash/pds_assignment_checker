#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct position
{
    int x;
    int y;
};
float distance(struct position a, struct position b)
{
    float d;
    d=sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
    return d;
}
int main()
{
    struct position b[60];
    int i,j,r,c,k=0,count=1,m=0;
    int temp;
    int **a;
    scanf("%d",&r);
    scanf("%d",&c);
    a=(int**)malloc(sizeof(int*)*r);
    for(i=0;i<r;i++)
    {
        *(a+i)=(int*)malloc(sizeof(int)*c);
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==1)
            {
                b[k].x=i;
                b[k].y=j;
                k++;
            }
        }
    }
    for(i=0;i<k;i=i+m)
    {
        for(j=0;j<k;j++)
        {
            if(distance(b[i],b[j])<1.5)
            {
                if(j<i)
                {
                    a[b[i].x][b[i].y]=temp;
                }
                else
                {
                    a[b[i].x][b[i].y]=count;
                    temp=count;
                    count++;
                    m++;
                }
            }
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
