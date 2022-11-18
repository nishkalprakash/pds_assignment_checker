/*name           : vyshnavi_lagudu
dept             : EE
roll number      : 21EE10044
assignment class : 3c
package          : code blocks
comments:NA
*/
#include<stdio.h>
int main()
{
   int a[20][20],b[20][20],m,n,k,i,j;
   printf("enter the dimension of input image matrix:");
   scanf("%d%d",&m,&n);
   printf("\nenter the input image matrix:\n");
   for(i=0;i<m;i++){
       for(j=0;j<n;j++) scanf("%d",&a[i][j]);
       printf("\n");
       }
    printf("\nenter the kernal size:");
    scanf("%d",&k);
    printf("\nenter the kernel elements:\n");
    for(i=0;i<k;i++){
        for(j=0;j<k;j++) scanf("%d",&b[i][j]);
        printf("\n");
        }
    }
