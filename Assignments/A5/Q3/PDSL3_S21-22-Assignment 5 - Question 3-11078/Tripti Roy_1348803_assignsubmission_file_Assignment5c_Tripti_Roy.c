~# include<stdio.h>
# include<stdlib.h>
# define ROWS 3
# define COLS 3
//function to find saddle point
void saddle(int arr[3][3] )
{
    int i, minimum, maximum, j, k, position[2][2];
    for (i = 0; i < 3; i++)
		{
			maximum = arr[i][0];
			for (j = 0; j < 3; j++)
				{
					if (maximum <= arr[i][j])
						{
							maximum = arr[i][j];
							position[0][0] = i;
							position[0][1] = j;
						}
				}
     j = position[0][1];
     minimum = arr[0][j];
	for (k = 0; k < 3; k++)
	{
		if (minimum >= arr[k][j])
			{
				minimum = arr[i][j];
				position[1][0] = k;
				position[1][1] = j;
			}
	}
/* saddle point is the minimum of a row and maximum of the column */
	if (minimum == maximum)
    {
		if (position[0][0] == position[1][0] &&position[0][1] == position[1][1])
		{
			printf("Saddle point [%d, %d] : %d\n",position[0][0], position[0][1], maximum);
		}
	}
	else{
        printf("No saddle point.\n");
	}
    }
}
int main()
{
    int a[ROWS][COLS], i, j;
    int** arr= (int**) malloc(ROWS * sizeof(int*));
    for (i=0; i<ROWS; i++)
    {
        arr[i] = (int*)malloc(COLS * sizeof(int));
    }
    for(i=0; i<ROWS; i++)
    {
        for(j=0; j<COLS; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    saddle(a);
    return 0;
}

