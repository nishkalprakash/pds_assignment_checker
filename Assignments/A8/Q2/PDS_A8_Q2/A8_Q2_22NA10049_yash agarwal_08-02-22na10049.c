
/*
yash agarwal
22na10049
sec 2
*/
#include <stdio.h>
struct matrix
{
  int **data;
  int m;
  int n;

};

void matMulti(struct matrix a,struct matrix b)  //multiplying
{
     struct matrix c;

      c.m=a.m;
      c.n=b.n;

        c.data=(int **) malloc(c.m*sizeof(int *));
       for(int i=0;i<c.m;i++)
        c.data[i]=(int *)malloc(c.n*sizeof(int));


       int s=0;

    for(int i=0;i<a.m;i++)
    {

        for(int j=0;j<b.n;j++)
        {
            s=0;
            for(int k=0; k<a.n;k++)
            {
                s=(a.data[i][k]*b.data[k][j]);
               c.data[i][j]+=s;
            }

        }

    }

     printf("\n Matrix c is \n ");  //ptinting

     for(int i=0;i<a.m;i++)
    {
        for(int j=0;j<b.n;j++)
        {
            printf("%d ",c.data[i][j]);
        }
        printf("\n ");

    }


};
int main()
{
    struct matrix a,b,c;


    printf("Enter the number of rows for matrix A:");  //input
    scanf("%d",&a.m);

    printf("\nEnter the number of rows for matrix A:");
    scanf("%d",&a.n);

    printf("\nEnter the number of rows for matrix B:");
    scanf("%d",&b.m);

    printf("\nEnter the number of rows for matrix B:");
    scanf("%d",&b.n);


    a.data=(int **) malloc(a.m*sizeof(int *));   //aloocating
    for(int i=0;i<a.m;i++)
        a.data[i]=(int *)malloc(a.n*sizeof(int));

    b.data=(int **) malloc(b.m*sizeof(int *));
    for(int i=0;i<b.n;i++)
        b.data[i]=(int *)malloc(b.n*sizeof(int));




        printf("Enter the values for matrix A\n");
    for(int i=0;i<a.m;i++)
    {

        for(int j=0;j<a.n;j++)
        {
            scanf(" %d",&a.data[i][j]);

        }

    }

    printf("Enter the values for matrix B\n");

    for(int i=0;i<b.m;i++)
    {
        for(int j=0;j<b.n;j++)
        {
            scanf(" %d",&b.data[i][j]);
        }

    }


    printf("\n Matrix a is \n ");

      for(int i=0;i<a.m;i++)
    {
        for(int j=0;j<a.n;j++)
        {
            printf("%d ",a.data[i][j]);
        }
         printf("\n ");

    }

     printf("\n Matrix b is \n ");

     for(int i=0;i<b.m;i++)
    {
        for(int j=0;j<b.n;j++)
        {
            printf("%d ",b.data[i][j]);
        }
        printf("\n ");

    }


    if(a.n!=b.m)  //if cant be multiplied
    {
        printf("Error:Invalid matrix sizes for multiplication !");
        return 0;
    }

     matMulti(a,b);





}
