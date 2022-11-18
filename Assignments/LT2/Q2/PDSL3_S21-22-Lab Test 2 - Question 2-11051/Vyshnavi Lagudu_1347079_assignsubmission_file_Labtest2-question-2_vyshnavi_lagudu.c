/*name           : vyshnavi_lagudu
dept             : EE
roll number      : 21EE10044
assignment class : 3c
package          : code blocks
comments: maximum number of elements in array is 20
*/
#include<stdio.h>
int maxalphavalue(int s[],int n)
{
  int i,j,p[20],count=0;
  for(j=1;j<n;j++){
      for(i=0;i<j;i++){
          p[i]=0;
          if(s[i]%s[j]==0){
                           p[i]++;
                           }
                        }
        }
  for(i=0;i<n;i++){
      if(count<p[i]){
                     count==p[i];
                     }
      }
   return(count);
}
main()
{
   int s[20],i,n,a;
   printf("no.of elements:");
   scanf("%d",&n);
   printf("\n");
   printf("enter array:");
   for(i=0;i<n;i++) scanf("%d",s[i]);
   printf("\n");
   a==maxalphavalue(s,n);
   printf("output:%d\n",&a);
   return 0;
}
