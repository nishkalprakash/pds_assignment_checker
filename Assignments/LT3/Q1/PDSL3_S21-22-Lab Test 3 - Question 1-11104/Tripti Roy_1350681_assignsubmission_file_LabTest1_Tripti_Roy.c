#include <stdio.h>

int ROW, COL;

//function to calculate the number of groups of 1
int group(int arr[][COL])
{
    int count = 0;
    for (int i=0; i<ROW; i++)
    {
        for (int j=0; j<COL; j++)
        {

            if (arr[i][j] == 1)
            {
                if ((i == 0 || arr[i-1][j] == 0) && (j == 0 || arr[i][j-1] == 0))
                    count++;
            }
        }
    }

    return count;
}

int main()
{
    int img[10][10], i, j;
    printf("Enter the image size:");
    scanf("%d%d", &ROW, &COL);
    printf("Enter the image:");
    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
            scanf("%d", &img[i][j]);
        }
    }
    int n = group(img);
    printf("Number of connected components = %d", n);
    return 0;
}
