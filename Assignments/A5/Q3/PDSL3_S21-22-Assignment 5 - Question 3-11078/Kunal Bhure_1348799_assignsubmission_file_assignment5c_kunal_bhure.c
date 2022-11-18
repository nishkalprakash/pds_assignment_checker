#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **a,m,n,i,j;
    printf("Enter rows and cols respectively");
    scanf("%d%d",&m,&n);
    //alloting dynamic memory
    a= (int **) malloc(m * sizeof(int *));
    for (i=0; i<m; i++) a[i] = (int *)malloc(n * sizeof(int));
    printf("Enter elements");
    //calling function to read elements
    read(a,m,n);
    //function to check saddle point
saddle(m,n,a);
}
void read(int **a, int m, int n)
{
    int i, j;
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
            scanf ("%d", &a[i][j]);
    }
    return;
}
//function to check max in row
int max_row(int i, int **a, int n)
{
    int j, *max=0;
    for(j=0; j<n; j++)
    {
        if(a[i][j]>*max)
        {
            max=&a[i][j];
        }
    }
return(max);
}
//function to check min in col
int min_col(int j, int **a, int m)
{
    int i, *min=1000;
    for(i=0; i<m; i++)
    {
        if(a[i][j]<*min)
        {
            min=&a[i][j];
        }
    }
return(min);
}
void saddle(int m, int n, int **a){
    int *r,*s,i,j,max,min;

for(i=0;i<m;i++){
   max_row(i,a,n);
   r=&max;
   min_col(j,a,m);
   s=&min;
   if (r==s){
    printf("%d",*r);
   }
   else{printf("none");
}

}
}
