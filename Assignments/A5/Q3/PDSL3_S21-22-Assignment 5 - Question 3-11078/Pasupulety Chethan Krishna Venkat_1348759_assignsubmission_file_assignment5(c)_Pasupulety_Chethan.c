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
    int m,n,i,j;
    printf("enter no of rows:"); scanf("%d",&m);
    printf("enter no of columns:"); scanf("%d",&n);

    //dynamically alloting space for the 2D array
    int **a=(int **)malloc(m*sizeof(int));
    //dynamically alloting space for each coloumn
    for(i=0;i<m;i++) a[i]=(int *)malloc(n*sizeof(int));

    //taking array input
    printf("enter array elements row wise:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++) scanf("%d",&a[i][j]);
    }

    //defining parameters to operate within loops
    int value,r,c;
    //defining an array to find min/max in all the rows
    int mm[m];
    int flag=1;

    for(i=1;i<=2;i++){
        //finding min in each row and storing it in mm array.
        for(r=0;r<m;r++){
            mm[r]=a[r][0];
            for(c=1;c<n;c++){
                if(flag*mm[r]<flag*a[r][c]) mm[r]=a[r][c];
            }

        }
        //finding max in each column to compare if it matches with the mm array
        for(c=0;c<n;c++){
            value=a[0][c];
            for(r=1;r<m;r++){
                if(flag*value>flag*a[r][c]) value=a[r][c];
            }
            //if both the values match,printing the saddle point along with position
            for(r=0;r<m;r++){
                if(value==a[r][c]&&value==mm[r]) {printf("saddle point at a[%d][%d]=%d\n",r,c,value);}

            }
        }
        //reversing flag to check if max/min case is possible
        flag=-flag;

    }
    //freeing the alloted space
    free(a);


    return 0;
}

