/*
NAME: VISHWAJEET SINGH SOLANKI
ROLL NO: 21CS10079
DEPT: COMPUTER SCIENCE
PACKAGE: CODEBLOCKS
*/
void find_group(int i, int j, int n, int** arr, int rows, int cols) {      //find_group function
	arr[i][j] = n;
	if (i > 0) {
		if ((j > 0) && (arr[i - 1][j - 1] < 0))
			find_group(i - 1, j - 1, n, arr, rows, cols);
		if ((j < cols - 1) && (arr[i - 1][j + 1] < 0))
			find_group(i - 1, j + 1, n, arr, rows, cols);
		if (arr[i - 1][j] < 0)
			find_group(i - 1, j, n, arr, rows, cols);
	}
	if (i < rows - 1) {
		if ((j > 0) && (arr[i + 1][j - 1] < 0))
			find_group(i + 1, j - 1, n, arr, rows, cols);
		if ((j < cols - 1) && (arr[i + 1][j + 1] < 0))
			find_group(i + 1, j + 1, n, arr, rows, cols);
		if (arr[i - 1][j] < 0)
			find_group(i + 1, j, n, arr, rows, cols);
	}
	if ((j > 0) && (arr[i][j - 1] < 0))
		find_group(i, j - 1, n, arr, rows, cols);
	if ((j < cols - 1) && (arr[i][j + 1] < 0))
		find_group(i, j + 1, n, arr, rows, cols);
}

int group(int** arr, int rows, int cols) {                                    //group function
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] *= -1;
		}
	}
	int flag = 1;
	int n = 0;
	while (flag) {
		flag = 0;
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				if (arr[i][j] < 0) {
					flag = 1;
					n++;
					find_group(i, j, n, arr, rows, cols);
				}
			}
		}
	}
	return n;
}
int main(){                                                                    //main function
    int rows,cols,arr[100][100];
    printf("Enter the image size\n");
    scanf("%d %d\n",&rows,&cols);

    printf("Enter the image\n");
    for(int i=0; i<rows; i++) {                                                //input image
       for(int j=0; j<cols; j++)
         scanf("%d",&arr[i][j]);
      }
    printf("Number of connected components = ");
   int group(int** arr, int rows, int cols);

   printf("Output image with labelled connected components:");                 //output image
    for(int i=0; i<rows; i++) {
       for(int j=0; j<cols; j++)
          printf("%d",&arr[i][j]);
      }

}
