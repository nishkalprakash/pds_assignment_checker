/*Soumojit Bhattacharya 
21EC10071 
macos visual studio code*/
#include <stdio.h>
#include <stdlib.h>
int chksad=0;

void checkrow(int *b,int ip,int jp,int columns,int minmax) //checks condition in row
{
    int chk=0;                                              //minmax checks if we ahve to check for min or for max
    if(minmax==0)
    {
        for(int i=0;i<columns;i++)
        {
            if(b[i]>=b[ip]&&i!=ip)
            {
                chk=1;
                break;
            }
        }
    }
    else 
    {
        for(int i=0;i<columns;i++)
        {
            if(b[i]<=b[ip]&&i!=ip)
            {
                chk=1;
                break;
            }
        }
    }
    if(chk==0)
    {
        printf("a[%d][%d]=%d is a saddle point\n",ip,jp,b[ip]);
        chksad++;
    }
}

void checkcol(int **a,int rows,int columns)  //checks condition in column
{
    
    for(int j=0;j<columns;j++)
    {
        int min=a[0][j],max=a[0][j];
        int minpos=0,maxpos=0;
        int minc=0,maxc=0;
        for(int i=0;i<rows;i++)
        {
            if(min>a[i][j])
            {
                min=a[i][j];
                minpos=i;
                minc=0;
            }
            else
            if(min==a[i][j])
            minc=1;

        }
        for(int i=0;i<rows;i++)
        {
            if(max<a[i][j])
            {
                max=a[i][j];
                maxpos=i;
                maxc=0;
            }
            else
            if(max==a[i][j])
            maxc=1;
        }
        
        if(maxc==0)
        checkrow(a[j],maxpos,j,columns,1);// check in row if column condition statisfied
        if(minc==0)
        checkrow(a[j],minpos,j,columns,0);
    }
}



int main()
{
    printf("enter dimensions");
    int rows,columns;
    scanf("%d %d",&rows, &columns);//accept size of array and accept values after dynamic allocation
    int **a=(int**)malloc(rows*sizeof(int*));
    for(int i=0;i<rows;i++)
    {
        a[i]=(int*)malloc(columns*sizeof(int));
    }
    printf("Enter the 2D array:");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            scanf("%d", &a[i][j]);
        }
        //printf("\n");
    }
    checkcol(a,rows,columns);  
    if(chksad==0)           //if no saddle points
    printf("no saddle points");
    printf("\n");
    
    return 0;
}