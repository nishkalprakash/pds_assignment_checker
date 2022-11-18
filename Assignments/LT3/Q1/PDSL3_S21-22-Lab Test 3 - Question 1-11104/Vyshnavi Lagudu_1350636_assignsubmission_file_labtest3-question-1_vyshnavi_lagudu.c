/*name           : vyshnavi_lagudu
dept             : EE
roll number      : 21EE10044
assignment class : 3c
package          : code blocks
comments   :  maximum size of input image matrix  is 100x100.
*/
#include<stdio.h>
int main()
{
   int m,n,i,j,a[100][100],k;
   printf("enter the image size:");
   scanf("%d%d",&m,&n);
   printf("\nenter the image:\n");
   for(i=0;i<m;i++){
       for(j=0;j<n;j++) scanf("%d",&a[i][j]);
       printf("\n");
       }
    printf("output image with labelled connected components:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++) printf("%d",a[i][j]);
        printf("\n");
        }
    printf("no.of connected components=%d\n",k);
    return 0;
}
