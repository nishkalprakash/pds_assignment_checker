/*Name- Pushkaraj Jagtap
  Roll- 21MF3IM12
  Codeblock*/
#include<stdio.h>
int main(){
    struct polynomial{

          int n;  // number of terms
          int coeff[100]; //the coefficient
          int exp[100];  //The exponent
    }a,b,c;
 int i,j,k;
    int ;
         scanf("%d",&a.n);
          scanf("%d",&b.n);
    for(i=0;i<(a.n);i++){
       printf("Coeff of a");
         scanf("%d",&a.coeff[i]);

       printf("Expo of a");
         scanf("%d",&a.exp[i]);

    }
    for(i=0;i<(b.n);i++){
       printf("coeff of b");
         scanf("%d",&b.coeff[i]);
       printf("Expo of b");
         scanf("%d",&b.exp[i]);
         }


    for(k=0;k<(a.n*b.n);k++){
      for(i=0;i<(a.n);i++){
        for(j=0;j<(b.n);j++){
            c.coeff[k]=a.coeff[i]*b.coeff[j];
        }
    }
  }
    for(k=0;k<(a.n+b.n);k++){
      for(i=0;i<(a.n);i++){
        for(j=0;j<(b.n);j++){
            c.exp[k]=a.exp[i]+b.exp[j];
         }
        }
      }
     for(k=0;k<(a.n*b.n);k++){
        for(i=0;i<(a.n+b.n);i++){
           printf("%d*x^%d",c.coeff[k],c.exp[i]);
        }
     }
}
