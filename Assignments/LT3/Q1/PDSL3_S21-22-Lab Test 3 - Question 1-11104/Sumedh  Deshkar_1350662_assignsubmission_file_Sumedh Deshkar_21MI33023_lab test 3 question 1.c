/*
Name - Sumedh Deshkar
Roll no.- 21MI33023
Sec - 3
Question no. - 1
*/

#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>

int q; int p;


// A function to check if a given cell (r, c) can be included in depthsearch
int OK(int** mat, int r, int c, bool went[][q])
{
	// r number is in range, column number is in range and value is 1
	// and not yet went
	return (r >= 0) && (r < p) && (c >= 0) && (c < q) && (mat[r][c] && !went[r][c]);
}

// A utility function to do depthsearch for a 2D boolean img. It only considers
// the 8 neighbours as adjacent vertices
void depthsearch(int** mat, int r, int c, bool went[][q])
{
	// These arrays are used to get r and column numbers of 8 neighbours
	// of a given cell
	static int rowNbr[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
	static int colNbr[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

	// Mark this cell as went
	went[r][c] = true;

	// Recur for all connected neighbours
	for (int k = 0; k < 8; ++k)
		if (OK(mat, r + rowNbr[k], c + colNbr[k], went))
			depthsearch(mat, r + rowNbr[k], c + colNbr[k], went);
}

// The main function that returns counter of islands in a given boolean
// 2D img
int countGRPS(int** mat)
{
	// Make a bool array to mark went cells.
	// Initially all cells are unvisited
	bool went[p][q];
	memset(went, 0, sizeof(went));

	// Initialize counter as 0 and traverse through the all cells of
	// given img
	int counter = 0;
	for (int i = 0; i < p; i++)
		for (int j = 0; j < q; j++)
			if (mat[i][j] && !went[i][j]) // If a cell with value 1 is not
			{ // went yet, then new island found
				depthsearch(mat, i, j, went); // Visit all cells in this island.
				++counter; // and increment island counter
                mat[i][j] = counter;
			}

	return counter;
}

void main()
{
    printf("Enter the image size: ");
    scanf("%d", &p);   scanf("%d", &q);

    int** img = (int** )calloc(p,sizeof(int*));
    for(int i=0; i<p; i++)
        img[i] = (char* )calloc(q,sizeof(int));

    printf("Enter the img elements r wise : \q");
    for(int i=0; i<p; i++)
    {
        for(int j=0; j<q; j++)
        {
            scanf("%d", &img[i][j]);
        }
    }

    printf("\nNo. of connected components : %d", countGRPS(img));

    //correcting the last element
    if(img[p-1][q-1]!= 0)
    {
        if(img[p-2][q-2]!= 0)
           img[p-1][q-1] = img[p-2][q-2];
        if(img[p-1][q-2]!= 0)
           img[p-1][q-1] = img[p-1][q-2];
        if(img[p-2][q-1]!= 0)
           img[p-1][q-1] = img[p-2][q-1];
    }

    //printing the img
    printf("\q\nOutput image with label connected components : \q");
    for(int i=0; i<p; i++)
    {
        for(int j=0; j<q; j++)
        {
            printf(" %d ", img[i][j]);
        }
        printf("\q");
    }

}
