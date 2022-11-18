/* Name   : Pasupulety Chethan Krishna Venkat
   Dept   : Computer science
   Roll no: 21CS30036
   Package: Code blocks
   Os     : windows
*/

#include <stdio.h>

int main()
{
      //initializing #rows and #columns
    int m,n,i,j,k;
    printf("enter no of rows:"); scanf("%d",&m);
    printf("enter no of columns:"); scanf("%d",&n);

    //dynamically alloting space for the 2D array
    int **a=(int **)malloc(m*sizeof(int));
    //dynamically alloting space for each coloumn
    for(i=0;i<m;i++) a[i]=(int *)malloc(n*sizeof(int));


    //taking array input
    printf("enter input matrix row wise:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++) scanf("%d",&a[i][j]);
    }

    printf("enter kernal size:"); scanf("%d",&k);

    int b[k][k];

    for(i=0;i<k;i++){
        for(j=0;j<k;j++) scanf("%d",&b[i][j]);
    }
return 0;
}
