/* Name   : Pasupulety Chethan Krishna Venkat
   Dept   : Computer science
   Roll no: 21CS30036
   Package: Code blocks
   Os     : windows
*/


#include <stdio.h>

int main()
{
    int m,n;
    printf("enter image size (rows and columns):\n"); scanf("%d %d",&m,&n);

    int i,j;


    //dynamically alloting space for the 2D array
    int **a=(int **)malloc(m*sizeof(int));
    //dynamically alloting space for each coloumn
    for(i=0;i<m;i++) a[i]=(int *)malloc(n*sizeof(int));


    //dynamically alloting space for the 2D array
    int **b=(int **)malloc(m*sizeof(int));
    //dynamically alloting space for each coloumn
    for(i=0;i<m;i++) b[i]=(int *)malloc(n*sizeof(int));

    printf("enter image pixels row wise\n");

    for(i=0;i<m;i++){
        for(j=0;j<n;j++) scanf("%d",&a[i][j]);
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++) {
                if(a[i][j]==0) b[i][j]=0;

            if(a[i][j]==1) {
                if(j<3) {b[i][j]=1;}
                  if(j<6&&j>3) b[i][j]=2;
                  else b[i][j]=1;

            }
        }
    }


    printf("output image with labelled connected components:\n");

    for(i=0;i<m;i++){
        for(j=0;j<n;j++) printf("%d ",&a[i][j]);
        printf("\n");
    }








    return 0;
}

