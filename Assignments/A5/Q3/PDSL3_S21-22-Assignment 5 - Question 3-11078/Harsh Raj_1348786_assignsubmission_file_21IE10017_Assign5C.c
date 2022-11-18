#include<stdio.h>
#include<stdlib.h>

// Name : Harsh Raj
// Roll : 21IE10017

int **allocate (int h, int w)
{
int **p;
int i,j;
p=(int **)malloc(h*sizeof (int *));
for(i=0;i<h;i++)
p[i]=(int *)malloc(w*sizeof (int));
return(p);
}

void take_data(int **p, int h, int w)
{
    int i,j;
    printf("\n Enter the values of Elements");
    for(i=0;i<h;i++)
     for(j=0;j<w;j++)
     {
         scanf("%d",&p[i][j]);
     }
}

void saddle_points(int **p, int h, int w)
{
    int i,j,k,l,count;
    for(i=0;i<h;i++)
     for(j=0;j<w;j++)
     {
         count=1;
         for(k=0;k<w;k++)
         {
             if(p[i][j]<p[i][k])
             {
                 count=0;
             }
             for(l=0;l<h;l++)
             {
                 if(p[i][j]>p[l][j])
                 {
                     count=0;
                 }
             }
         }
         if(count==1)
         printf("\n A [ %d ] [ %d ] = %d is a saddle point.",i,j,p[i][j]);
     }
}

int main()
{
int **p;
int M,N;
printf("Give M and N \n");
scanf("%d%d",&M,&N);
p=allocate(M,N);
take_data(p,M,N);
saddle_points(p,M,N);
return 0;
}
