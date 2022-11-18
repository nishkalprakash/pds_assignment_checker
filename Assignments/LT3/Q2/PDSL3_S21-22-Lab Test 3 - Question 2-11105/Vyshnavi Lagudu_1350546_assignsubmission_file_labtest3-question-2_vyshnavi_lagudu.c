/*name           : vyshnavi_lagudu
dept             : EE
roll number      : 21EE10044
assignment class : 3c
package          : code blocks
comments:maximum size of input polynomial arrays is 50
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
  char s1[50],s2[50];
  printf("enter the first polynomial as string: ");
  scanf("%s",s1);
  printf("\nenter the second polynomial as string: ");
  scanf("%s",s2);
  printf("\n");
  int i,j,P1,P2;
  printf("Enter no.of terms in Polynomial 1:");
  scanf("%d",&P1);
  printf("\n");
  int a[P1];
  printf("Elements of Polynomial 1:\n");
  for(i=0;i<P1;i++){
     printf("Enter x^%d Co-Efficient of Polynomial 1:",i);
     scanf("%d",&a[i]);
     printf("\n");
   }
  printf("Enter no.of terms in Polynomial 2:");
  scanf("%d",&P2);
  printf("\n");
  int b[P2];
  printf("Enter Elements of Polynomial 2:\n");
  for(i=0;i<P2;i++) {
     printf("Enter x^%d Co-Efficient of Polynomial 2:",i);
     scanf("%d",&b[i]);
     printf("\n");
     }
  int product[P1+P2];
  for(i=0;i<P1+P2;i++){
     product[i]=0;
    }
  for(i=0;i<P1;i++){
     for(j=0;j<P2;j++){
         if(a[i]!=0 && b[j]!=0) product[i+j]+=a[i]*b[j];
         }
     }
   printf("resultant product polynomial as srting:\n");
   for(i=P1+P2-1;i>=0;i--){
      if(product[i]!=0){
                        if(i!=0){
                                  printf("%d x^%d + ",product[i],i);
                                  }
      else{
            printf("%d x^%d\n",product[i],i);
          }
         }
        }
    printf("\n");
    return 0;
}
