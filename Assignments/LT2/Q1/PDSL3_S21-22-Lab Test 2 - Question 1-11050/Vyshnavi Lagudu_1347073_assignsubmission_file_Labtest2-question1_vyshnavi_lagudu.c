/*name           : vyshnavi_lagudu
dept             : EE
roll number      : 21EE10044
assignment class : 3c
package          : code blocks
comments: all values are integers and maximum size of arrays are taken as 20 because n max value is 20.
*/
#include<stdio.h>
int main()
{
   int n,a[20],i,j,p,s[20],k,large,b;
   printf("enter n:");
   scanf("%d",&n);
   printf("\nenter the numbers:");
   for(i=0;i<n;i++){
       scanf("%d",&a[i]);
       }
   printf("\n");
   s[0]=0;
   for(i=0,k=1;i<n;i++){
       s[k]=s[k-1]+a[i];
       k++;
      }
    large=s[0];
    for(i=0;i<=k;i++){
        if(large<s[i]){
                      large=s[i];
                      }
        }
    printf("largest sum=%d\n",large);
    printf("subarrays:");
    for(i=0,p=0,b=0;i<n;i++){
        b=b+a[i];
        if(b<0){
                b=0;
                p=i+1;
               }
        if(b==large){
                     while(p<=i){
                            printf("%d,",a[p]);
                            p++;
                            }
                      printf("}\n");
                    }
    }
    return 0;
}



