#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char **x,**y,**z,*temp;
    temp = (char*)malloc(50*sizeof(char));
    int m,n,i,j,k;
    printf("Enter size of 1st array\n");
    scanf("%d",&m);
    x = (char**)malloc(m*sizeof(char*));
    for (i=0; i<=m; ++i)
    {
        x[i] = (char*)malloc(50*sizeof(char));
        gets(&x[i]);
    }
    printf("After reading x printing %d names",m);
    for(i=0;i<=m;i++)
    printf("%s\n",(x+i));
    printf("Enter size of 2nd array\n");
    scanf("%d",&n);
    y=(char**)malloc(m*sizeof(char*));
    for (j=0; j<=n; ++j)
    {
        y[j] =(char*)malloc(50*sizeof(char));
        gets(&y[j]);
    }
    printf("After reading y printing %d names",n);
    for(i=0;i<=n;i++)
    printf("%s\n",(y+i));
    int h=m+n+1;
    z=(char**)malloc(h*sizeof(char*));
    int f=0;
    for(i=0;i<=m;++i)
    {
        z[i]=(char*)malloc(50*sizeof(char*));
        strcpy(&z[i],&x[f]);
        ++f;
    }
    for(i=0;i<=m;i++)
    printf("%s\n",(z+i));
    k=0;
    for(j=m+1;j<=h;++j )
    {
        z[j]=(char*)malloc(50*sizeof(char*));
        strcpy(&z[j],&y[k]);
        ++k;
    }

    printf("The combined Array is");
    for(int d=0;d<=h;++d)
    printf("%s\n",(z+d));

    for(int a=0;a<(h-1);a++)
    {
        for(int b=0;b<k-1-i;b++)
        {
            if(strcmp(&z[b],&z[b+1])>0)
            {
                strcpy(&temp,&z[b]);
                strcpy(&z[b],&z[b+1]);
                strcpy(&z[b+1],&temp);
            }

        }
    }
    printf("After sorting\n");
    for(i=0;i<=(m+n);++i)
    {
        printf("%s\n",(z+i));
    }
    return 0;
}