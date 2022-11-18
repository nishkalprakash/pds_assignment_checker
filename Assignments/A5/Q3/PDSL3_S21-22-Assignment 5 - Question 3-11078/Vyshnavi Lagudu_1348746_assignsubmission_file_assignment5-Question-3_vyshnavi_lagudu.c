/*name           : vyshnavi_lagudu
dept             : EE
roll number      : 21EE10044
assignment class : 3c
package          : code blocks
comments: maximum size of matrix  is 20x20.
*/
#include<stdio.h>
#define ROWS 15
#define COLS 15
void saddle(int a[15][15],int m,int n)
{
   int i,j,k,small,large,fact=1;
   for(i=0;i<m;i++){
       small=a[i][0];
       for(j=0;j<n;j++){
           if(small>a[i][j]){
                             small=a[i][j];
                             k=j;
                             }
           }
        large=0;
        for(j=0;j<n;j++){
            if(large<a[j][k]) large=a[j][k];
            }
        if(small==large){
           j--;
           printf("a[%d][%d]=%d is saddle point\n",j,k,small);
           fact=0;
           }
    }
    if(fact>0) printf("there is no saddle point\n");
}
main()
{
   int a[ROWS][COLS],m,n,i,j;
   printf("enter the size of matrix:");
   scanf("%d%d",&m,&n);
   printf("\nenter the elements:\n");
   for(i=0;i<m;i++){
      for(j=0;j<n;j++) scanf("%d",&a[i][j]);
      printf("\n");
      }
   saddle(a,m,n);
    return 0;
}
