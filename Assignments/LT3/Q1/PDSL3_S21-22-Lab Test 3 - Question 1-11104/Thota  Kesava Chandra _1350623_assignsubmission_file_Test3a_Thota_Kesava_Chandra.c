/*
Thota Kesava Chandra
Computer Science Department
21CS30056
Code Blocks
Windows
*/


#include <stdio.h>
#include <stdlib.h>

int count=1; //count describes the current group number

//this function changes the neighbours of current 1
void changer(int i,int j,int nrow,int ncolumn,int **image,int copy)
{
    if (i==0) i=0;
    else i--;
    if (j==0) j=0;
    else j--;
    for(int row=0;row<3;row++)
    {
        if(i+row==nrow) break;
        for(int column=0;column<3;column++)
        {
            if(j+column==ncolumn) break;
            if(image[i+row][j+column]==1)
            {
                //found a new neighbour and changing it to the current group
                image[i+row][j+column] = copy;
                //making this new member as centre and invoking the changer function to find its neighbours
                changer(i+row,j+column,nrow,ncolumn,image,copy);
            }
        }
    }
}

//this function finds the 1s in the matrix then changes the 1 to current count
void finder(int nrow,int ncolumn,int **image)
{
    int i,j;
    for(i=0;i<nrow;i++)
    {
        for(j=0;j<ncolumn;j++)
        {
            if(image[i][j]==1)
            {
                if(count==1) image[i][j]=-1;  //for differentiating between the group 1 and normal 1
                else image[i][j]=count;
                //intiating the changer function
                changer(i,j,nrow,ncolumn,image,image[i][j]);
                count++;
            }

        }
    }
}


int main()
{
    int nrow,ncolumn,**image,**finale,i,j;
    printf("Enter the size : ");
    scanf("%d %d",&nrow,&ncolumn);
    printf("Enter the image : \n");
    image = (int**) malloc(sizeof(int*)*nrow);
    for(i=0;i<nrow;i++) image[i] = (int*) malloc(sizeof(int*)*ncolumn);
    for(i=0;i<nrow;i++)
    {
        for(j=0;j<ncolumn;j++)
        {
            scanf("%d",&image[i][j]);
        }
    }
    //initiating the function
    finder (nrow,ncolumn,image);

    //printing the final output matrix
    printf("\nOutput image with labelled connected components : \n");
    for(i=0;i<nrow;i++)
    {
        for(j=0;j<ncolumn;j++)
        {
            if(image[i][j]==-1) printf("1 ");
            else printf("%d ",image[i][j]);
        }
        printf("\n");
    }
    printf("\nNo of connected components : %d\n",count-1);
    return 0;
}
