/*NAME HARSH SOMANI
SECTION 3
ROLL NUMBER 21EC10031
ASSIGNMENT CLASS 6
DEPT ECE*/
#include<stdio.h>
check(int**p,int i,int j, int t)
{
    p[i][j]=t;
    if(i>0&&j>0){
    if(p[i-1][j-1]==1) {p[i-1][j-1]=t; check(p,i-1,j-1,t);}
    if(p[i-1][j]==1) {p[i-1][j]=t; check(p,i-1,j,t);}
    if(p[i-1][j+1]==1) {p[i-1][j+1]=t; check(p,i-1,j+1,t);}
    if(p[i][j-1]==1) {p[i][j-1]=t; check(p,i,j-1,t);}
    if(p[i][j+1]==1) {p[i][j+1]=t; check(p,i,j+1,t);}
    if(p[i+1][j-1]==1) {p[i+1][j-1]=t; check(p,i+1,j-1,t);}
    if(p[i+1][j]==1) {p[i+1][j]=t; check(p,i+1,j,t);}
    if(p[i+1][j+1]==1) {p[i+1][j+1]=t; check(p,i+1,j+1,t);}}
    if(i==0&&j==0){
        if(p[i][j+1]==1) {p[i][j+1]=t; check(p,i,j+1,t);}
        if(p[i+1][j]==1) {p[i+1][j]=t; check(p,i+1,j,t);}
    if(p[i+1][j+1]==1) {p[i+1][j+1]=t; check(p,i+1,j+1,t);}
    }
    if(i==0&&j!=0)
    {
    if(p[i][j-1]==1) {p[i][j-1]=t; check(p,i,j-1,t);}
    if(p[i][j+1]==1) {p[i][j+1]=t; check(p,i,j+1,t);}
    if(p[i+1][j-1]==1) {p[i+1][j-1]=t; check(p,i+1,j-1,t);}
    if(p[i+1][j]==1) {p[i+1][j]=t; check(p,i+1,j,t);}
    if(p[i+1][j+1]==1) {p[i+1][j+1]=t; check(p,i+1,j+1,t);}
    }
    if(j==0&&i!=0)
    {
        if(p[i-1][j]==1) {p[i-1][j]=t; check(p,i-1,j,t);}
    if(p[i-1][j+1]==1) {p[i-1][j+1]=t; check(p,i-1,j+1,t);}
     if(p[i+1][j]==1) {p[i+1][j]=t; check(p,i+1,j,t);}
    if(p[i+1][j+1]==1) {p[i+1][j+1]=t; check(p,i+1,j+1,t);}
     if(p[i][j+1]==1) {p[i][j+1]=t; check(p,i,j+1,t);}
    }
}
int **allocate(int a,int b)
{
    int **p;
    int i,j;
    p=(int**)malloc(a*sizeof(int*));//allocating array of pointers
    for(i=0;i<a;i++)
       {
        p[i]=(int*)malloc(b*sizeof(int));//aloocating the rows
       }
    return(p);
    }
    void r_data(int**p,int a, int b)
    {
        int i,j;
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                scanf("%d",&p[i][j]);//reading elements
            }
        }
    }
    void print(int**p,int a,int b)
    {
        int i,j;
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                printf("%d ",p[i][j]);
            }
            printf("\n");
        }
    }
int main()
{
    int n,m;
    int **p;
    int i,j,t=1;
    printf("enter m and n\n");
    scanf("%d%d",&m,&n);//we can only enter values 1 and 0 in this
    printf("enter image\n");
    p=allocate(m,n);//allocating 2d array
    r_data(p,m,n);//reading the values
    printf("print image\n");
    print(p,m,n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(p[i][j]==1) {check(p,i,j,t);t++;break;}

        }
    }
    printf("connected components %d",t);
    print(p,m,n);
}
