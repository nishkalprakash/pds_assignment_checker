/*Soumojit Bhattacharya 
21EC10071 
macos visual studio code*/
#include <stdio.h>
#include <stdlib.h>

int calculate(int **a,int **k,int kdim, int x,int y)  //calculate value of the final matrix
{
    int val=0,i,j;
    for(i=0;i<kdim;i++)
    {
        for(j=0;j<kdim;j++)
        {
            val+=a[x+i][y+j]*k[i][j];  //multiply corresponding values and add to val
        }
    }
    return val;   //val stores one part of result matrix
}

void findnew(int **a,int **k,int kdim,int **final,int rows,int columns)
{
    int i,j;
    int border=kdim/2;
    for(i=0;i<rows-border*2;i++)          //stores correct values in result matrix
    {
        for(j=0;j<columns-border*2;j++)
        {
            final[i][j]=calculate(a,k,kdim,i,j);    
        }
    }
}

int main()
{
    int rows,columns;                       //--------------------------------------------
    printf("Enter the dimension of the input image matrix:");          
    scanf("%d %d",&rows, &columns);
    //int a[rows][columns];

    int **a=(int**)malloc(rows*sizeof(int*));
    for(int i=0;i<rows;i++)
    {
        a[i]=(int*)malloc(columns*sizeof(int));  //accept and store image matrix
    }
    printf("Enter the input image matrix:");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            scanf("%d", &a[i][j]);
        }
        //printf("\n");
    }                                       //--------------------------------------------


    int kdim;                               //--------------------------------------------
    printf("enter the kernel size:");
    scanf("%d",&kdim);
    //int k[kdim][kdim];

    int **k=(int**)malloc(kdim*sizeof(int*));
    for(int i=0;i<kdim;i++)
    {
        k[i]=(int*)malloc(kdim*sizeof(int));        //accept and store kernel matrix
    }
    printf("Enter the kernel elements:");
    for(int i=0;i<kdim;i++)
    {
        for(int j=0;j<kdim;j++)
        {
            scanf("%d", &k[i][j]);
        }
        //printf("\n");
    }                                           //--------------------------------------------

    int border=kdim/2;   //find border size                                   
    int **final=(int**)malloc((rows-border*2)*sizeof(int*));  //make result matrix
    for(int i=0;i<kdim;i++)
    {
        final[i]=(int*)malloc((columns-border*2)*sizeof(int));
    }                                                           
    findnew(a,k,kdim,final,rows,columns);  //calculate result matrix
                        
    
    printf("Output image matrix is:\n");                                      //--------------print--------------
    for(int i=0;i<border;i++)                               //print upper border
    {
        for(int j=0;j<columns;j++)                        
        {
            printf("- ");
        }
        printf("\n");
    }
    for(int i=0;i<rows-border*2;i++)    
    {
        for(int j=0;j<border;j++)                   //print values and side borders
        printf("- ");
        for(int j=0;j<columns-border*2;j++)
        {
            printf("%d ",final[i][j]);
        }
        for(int j=0;j<border;j++)
        printf("- ");
        printf("\n");
    }
    for(int i=0;i<border;i++)
    {
        for(int j=0;j<columns;j++)                 //print lower border
        {
            printf("- ");
        }
        printf("\n");
    }                                               //------------------------------------
    return 0;
}