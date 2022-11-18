/*
Name: Anfal S
Roll no: 21AE10003
Section: 3
Dept: AE
Package: Codeblocks
Assignment class: 5
Operating System: windows
*/
#include<stdio.h>
#include<stdlib.h>
int noof(int* p)
{
    int a=0;
    for(p;(*p)!='\0';p++)
    {
        a+=1;
    }
    return(a);
}
int max(int a[],int x)
{
    int temp,i;
    temp=a[0];
    for(i=0;i<x;i++)
    {
        if(temp<a[i]) temp=a[i];
    }
    return(temp);
}
int min(int a[],int x)
{
    int temp,i;
    temp=a[0];
    for(i=0;i<x;i++)
    {
        if(temp>a[i]) temp=a[i];
    }
    return(temp);
}
int main()
{
    int **p,*a;
    int i,j,l,m,x,y;
    float k;
    printf("Enter the amount of elements:");
    scanf("%d",&x);
    a=(int*)malloc(x*sizeof(int));
    printf("enter the elements\n");
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the no of bins:");
    scanf("%d",&y);
    k=(max(a,x)-min(a,x)+1)/((float)y) ;
    p=(int**)malloc(y*sizeof(int*));
    for(i=0;i<y;i++)
    {
        p[i]=(int*)malloc(k*sizeof(int));
    }
    for(i=0;i<y;i++)
    {
        for(j=0;j<k;j++)
        {
            for(l=0;l<x;l++)
            {
                for(m=0;m<x;m++)
                {
                if(((min(a,x)+(i*k))<=a[l])&&(a[l]<(min(a,x)+((i+1)*k))))
                {
                    p[i][j]=a[l];
                    break;
                }
                }
            }
        }
    }
    for(i=0;i<y;i++)
    {
        printf("bin%d-> ",i);
        for(j=0;j<k;j++)
        {
            printf("%d,",p[i][j]);
        }
        printf("no of elements=%d\n",noof(p[i]));
    }
    return 0;
}
