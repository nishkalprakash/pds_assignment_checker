/*Name- Krish Agarwal
Roll No.- 21NA10018
Department- Ocean Engineering and Naval Architecture
Section- 3
IDE-VS Code
*/
#include<stdio.h>
#include<stdlib.h>
void saddle_point(int** arr, int m, int n)
{
    printf("\nThe required Saddle point(s) is(are) :-\n");
    int max,min,x,f=0;
    for(int i=0;i<m;i++)
    {
        min=arr[i][0];//Initializing min with first element of every row
        x=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]<min)
            {//storing the column position of the minimum element of the row
                min=arr[i][j];
                x=j;
            }
        }

        max=arr[0][x];//initializing max with the first element of that row
        for(int j=0;j<m;j++)
        {
            if(arr[j][x]>max)
            max=arr[j][x];
        }
        if(max==min)//if same printing them
        {
            printf("A[%d][%d] = %d\n",i,x,max);
            f=1;//flag value=1
        }
    }
    for(int i=0;i<m;i++)
    {
        max=arr[i][0];//Initializing max with first element of every row
        x=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]>max)
            {//storing the column position of the maximum element of the row
                max=arr[i][j];
                x=j;
            }
        }

        min=arr[0][x];//initializing min with the first element of that row
        for(int j=0;j<m;j++)
        {
            if(arr[j][x]<min)
            min=arr[j][x];
        }
        if(max==min)//if same printing them
        {
            printf("A[%d][%d] = %d\n",i,x,max);
            f=1;//flag value=1
        }
    }

    if(f==0)
    {
        printf("No saddle point found.");
    }
}
int main()
{
    int row,column;
    printf("Enter the number of rows : ");
    scanf("%d",&row);
    fflush(stdin);
    printf("Enter the number of column : ");
    scanf("%d",&column);
    int **a;
    a=(int **)malloc(sizeof(int *) * row);//dynamic allocation of 2d array
    for(int i=0;i<column;i++)
    {
        a[i]=(int *)malloc(sizeof(int)*column);
    }
    printf("Enter the elements in the array : \n");//taking elements in the array
    for(int i=0; i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("A[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nThe Matrix is : \n");//displaying the array
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    saddle_point(a,row,column);//finding saddle point 
    for(int i=0;i<row;i++)//freeing out memory space
    free(a[i]);
    free(a);
    return 0;
}