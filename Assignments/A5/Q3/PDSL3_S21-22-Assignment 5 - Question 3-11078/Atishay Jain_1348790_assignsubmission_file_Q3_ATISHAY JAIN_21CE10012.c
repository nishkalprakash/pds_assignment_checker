#include <stdio.h>  // C program to find the saddle point coordinates in the given matrix
int main()
{
	int i, j, k, m, n, min, max,pos[2][2];  // defining variables

	printf("Enter the square matrix order : ");  /* Input the size of the matrix from the user */
	scanf("%d", &m);
	int matrix[m][m];

	printf("\nInput the matrix : \n");  /* Input the matrix */
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &matrix[i][j]);
		}
		printf("\n");
	}

	printf("\nThe matrix is \n");  //show the matrix entered to the user
	for (i = 0; i < m; i++)
		{
			for (j = 0; j < m; j++)
				{
					printf("%d ", matrix[i][j]);
				}
			printf("\n");
		}

	for (i = 0; i < m; i++)   /* find the saddle points in the given matrix */
		{
			min = matrix[i][0];
			for (j = 0; j < m; j++)
				{
					if (min >= matrix[i][j])
						{
							min = matrix[i][j];
							pos[0][0] = i;
							pos[0][1] = j;
						}
				}
            j = pos[0][1];
            max = matrix[0][j];


            for (k = 0; k < m; k++)
            {
                if (max <= matrix[k][j])
                    {
                        max = matrix[i][j];
                        pos[1][0] = k;
                        pos[1][1] = j;
                    }
            }

            if (min == max)    //printing info about saddle point
            {
                if (pos[0][0] == pos[1][0] &&pos[0][1] == pos[1][1])
                {
                    printf("\nSaddle point is at (%d, %d) with value : %d\n",pos[0][0]+1, pos[0][1]+1, max);
                }
            }
        }
        return 0;
    }
