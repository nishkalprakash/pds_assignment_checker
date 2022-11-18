#include<stdio.h>
#include<stdlib.h>

/*Name-Chetna
  roll no.-21CS10019
  dep-CSE
  package-code blocks*/

void saddle(int ** arr, int m,int n)                   //This function takes the 2d array as parameter, along with dimensions
{

    int ct=0;

    for(int i=0; i<m; i++)
    {                                                           //The first part of the function finds the minimum of that row
                                                                //And checks if the minimum is maximum of the corresponding column


        int min_ROW_j=0,max_COL_i=0;

        for(int j=0; j<n; j++) if(arr[i][min_ROW_j]>arr[i][j]) min_ROW_j = j;

        for(int k=0; k<m; k++) if(arr[max_COL_i][min_ROW_j]<arr[k][min_ROW_j]) max_COL_i = k;

        if(max_COL_i == i)
        {

            ct++;
            printf("Saddle point is a[%d][%d]=%d\n",max_COL_i,min_ROW_j,arr[max_COL_i][min_ROW_j]);


        }

        int max_ROW_j=0;                                                        //The second part finds the maximum of that row
                                                                                //And checks if the maximum is minimum of the corresponding column
        for(int j=0; j<n; j++) if(arr[i][max_ROW_j]<arr[i][j]) max_ROW_j = j;

        int min_COL_i=0;

        for(int k=0; k<m; k++) if(arr[min_COL_i][max_ROW_j]>arr[k][max_ROW_j]) min_COL_i = k;

        if(min_COL_i == i)
        {
            ct++;
            printf("Saddle point is a[%d][%d]=%d\n",min_COL_i,max_ROW_j,arr[min_COL_i][max_ROW_j]);
        }
    }
    if(ct == 0) printf("No saddle point exists for given input matrix\n");

}


int main()
{

    int ROWS;
    int COLS;

    printf("Enter number of rows and columns:");
    scanf("%d %d",&ROWS,&COLS);

    int **arr =(int**)malloc(ROWS*sizeof(int*));                                //Dynamically allocationg a 2-D array
    for(int i=0; i<ROWS; i++)arr[i]=(int*)malloc(COLS*sizeof(int));

    printf("Enter elements of array(one row at a time):\n");
    for(int i=0; i<ROWS; i++)for(int j=0; j<COLS; j++) scanf("%d",&arr[i][j]);

    saddle(arr,ROWS,COLS);                                         //Calling the function

    return 0;


}
