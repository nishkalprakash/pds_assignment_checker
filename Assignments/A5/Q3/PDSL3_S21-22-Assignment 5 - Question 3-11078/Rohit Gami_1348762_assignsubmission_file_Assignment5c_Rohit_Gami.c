#include<stdio.h>

int find_saddle_point(int **point,int n,int length)
{
    int saddle[n],saddle_rows[n],saddle_collumns[n];
    int x=0;
    int flag=0;
    for(int k=0;k<n;k++)            //fix k as column element and check whether if smallest
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<length;j++)
            {
                if( point[i][j] > point[i][k])
                {
                    flag=1;
                }
            }
            if(flag!=1)
            {
                for(int l=0;l<length;l++)     //fix l as row element and check whether if greatest
                {
                    for(int j=0;j<n;j++)
                    {
                        if(point[j][k]<point[l][k])
                        {
                            flag =0;
                        }
                    }
                    if(flag!=0)
                    {
                        saddle[x]=point[l][k];
                        saddle_rows[x]=l;
                        saddle_collumns[x]=k;
                        x++;
                    }
                }
            }
        }
    }
     for(int k=0;k<n;k++)            //fix k as column element and check whether if greatest
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<length;j++)
            {
                if( point[i][j] < point[i][k])
                {
                    flag=1;
                }
            }
            if(flag!=1)
            {
                for(int l=0;l<length;l++)     //fix l as row element and check whether if smallest
                {
                    for(int j=0;j<n;j++)
                    {
                        if(point[j][k]>point[l][k])
                        {
                            flag =0;
                        }
                    }
                    if(flag!=0)
                    {
                        saddle[x]=point[l][k];
                        saddle_rows[x]=l;
                        saddle_collumns[x]=k;
                        x++;
                    }
                }
            }
        }
    }
}
void read_data(int **p, int n, int length)
{
    int i, j;
    for (i=0;i<n;i++)
       for (j=0;j<length;j++)
          scanf("%d", &p[i][j]);
}
int main() {

    int n, length, flag=-1;

    printf("enter number of sequences: ");
    scanf("%d", &n);     //value of n
    printf("\n");

    int *point = (int)malloc(n*sizeof (int));     //memory allocation

    if (point == NULL)
    {
        printf("No Memory Allocation. Error\n");
    }

    else {

        int i, j;                       //array

        printf("enter size of sequence: ");
        scanf("%d", &length);

        point = (int **) malloc(n*sizeof(int *));
          for (i=0;i<n;i++)
            point[i] = (int *) malloc(length * sizeof(int));
        printf("enter sequence %d :",i+1);
        read_data(point,n,length);
        }
    find_saddle_point(point,n, length);
}
