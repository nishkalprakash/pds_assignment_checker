/*Shreya Vadhavkar
22ME10091
Section 2
Lab Test 2
problem 2*/
#include<stdio.h>
#include<malloc.h>
#include<string.h>
#define N 100
struct dob
{
    char d[2];
    char m[2];
    char y[4];
};
struct Rec
{
    char rollNo[10];
    char branch[2];
    struct dob p;
};
int main()
{
    int n;
    scanf("%d", &n);
    if(n>N)
    {
        printf("Invalid value of N");
        return 0;
    }
    struct Rec *a;
    char c;
    a= (struct Rec*)calloc(n,sizeof(struct Rec));
    int i;
    int z,w;
    char x[n][10];
    for(i=0;i<n;++i)
    {
        scanf("%s",a[i].rollNo);
        scanf("%s",a[i].branch);
        scanf("%s",x[i]);
        /*for(z=0;z<2;++z)
        {
            a[i].p.d[z]=x[z];
        }
        for(z=3;z<5;++z)
        {
            a[i].p.m[z-3]=x[z];
        }
        for(z=6;z<10;++z)
        {
            a[i].p.y[z-6]=x[z];
        }*/
    }
    int yr[n];
    for(i=0;i<n;++i)
    {
        yr[i]=0;
    }
    for(i=0;i<n;++i)
    {
        for(z=6;z<10;++z)
        {
            yr[i]+=x[i][z];
        }
    }
   int year;
    scanf("%d",year);
    int m=0;
    for(i=0;i<n;++i)
    {
       if(year>yr[i])
       {
           ++m;
       }
    }
    /*char e[10][10];
    struct Rec b[2][n];
    int j=0,k=0;
    for(i=0;i<n;++i)
    {
        if(year>yr[i])
       {
           strcpy(b[0][j].rollNo,a[i].rollNo);
           strcpy(b[0][j].branch,a[i].branch);
         //  strcpy(e[j],x[i]);
          // strcpy(b[0][j].p.d,a[i].p.d);
           strcpy(b[0][j].p.m,a[i].p.m);
           strcpy(b[0][j].p.y,a[i].p.y);
           ++j;

       }
       else
       {
           strcpy(b[1][j].rollNo,a[i].rollNo);
           strcpy(b[1][j].branch,a[i].branch);
         //  strcpy(e[1],x[i]);
           /*strcpy(b[1][j].p.d,a[i].p.d);
           strcpy(b[1][j].p.m,a[i].p.m);
           strcpy(b[1][j].p.y,a[i].p.y);
           ++k;
       }


    }

    for(i=0;i<m;++i)
    {
        printf("Deleted Record: %s %s %s\n",b[0][i].rollNo,b[0][i].branch,e[0][i]);
    }*/
    printf("m= %d,n-m = %d\n",m,n-m);
    /*printf("Remaining Records:\n");
    for(i=0;i<n-m;++i)
    {
        printf("%s %s\n",b[0][i].rollNo,b[0][i].branch);
    }*/

    return 0;

}
