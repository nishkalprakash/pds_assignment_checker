/* Name   : Pasupulety Chethan Krishna Venkat
   Dept   : Computer science
   Roll no: 21CS30036
   Package: Code blocks
   Os     : windows
*/



#include <stdio.h>
#include <string.h>


//defining the polynomial structure
struct polynomial{
    int terms;
    int coeff[10];
    int exponent[10];


};

//defining the product structure
struct pro{
    int degree;
    int coeff;
};

int main()
{
    //initializing product structure
    struct pro product[10];
    //taking polynomials as string inputs
    char s1[100],s2[100];
    int count=-1,j;
    printf("enter first polynomial:"); scanf("%s",s1);
    printf("enter second polynomial:"); scanf("%s",s2);

    //initializing polynomials
    struct polynomial a[2];

    //getting the values of coefficients from the string1
    a[0].coeff[0]=s1[0]-48;
    int k=1,i;
    int l=0;
    for(i=1;s1[i]!='\0';i++){

            if(s1[i]=='+') {a[0].coeff[k]=s1[i+1]-48; k++;}
            if(s1[i]=='-') {a[0].coeff[k]=48-s1[i+1]; k++;}
            if(s1[i]=='^') {a[0].exponent[l]=s1[i+1]-48; l++;}





    }
    int noofterms1=k;

    a[0].exponent[l]=1;
    a[0].exponent[++l]=0;

    //getting the values of coefficients from the string2
     if(s2[0]=='x') a[1].coeff[0]=1;
    else a[1].coeff[0]=s2[0]-48;
    int m=1;
    int n=0;
    for(i=1;s2[i]!='\0';i++){

            if(s2[i]=='+') {a[1].coeff[m]=s2[i+1]-48; m++;}
            if(s2[i]=='-') {a[1].coeff[m]=48-s2[i+1]; m++;}
            if(s2[i]=='^') {a[1].exponent[l]=s2[i+1]-48; n++;}





    }
    a[1].exponent[n]=1;
    a[1].exponent[++n]=0;

    int noofterms2=m;

    printf("%d %d\n",noofterms1,noofterms2);
    for(i=0;i<m;i++){
        printf("%d   %d\n",a[1].coeff[i],a[1].exponent[i]);
    }



//finding the product of the two polynomials
    for(i=0;i<noofterms1;i++){
         for (j=0;j<noofterms2;j++){

               product[++count].degree=a[0].exponent[i]+a[1].exponent[j];
               product[count].coeff=(a[0].coeff[i])*(a[1].coeff[j]);
          }/*End of j for loop*/
          }/*End of i for loop*/

    printf("\nThe Product Of Two Polynomials Is: \n");
      for(i=0;i<=count;i++)
       {
        if(product[i].degree==0)
         printf("%d ",product[i].coeff);
         else if(product[i].degree==1)
         printf("%dx ",product[i].coeff);
        else
         {
          printf("%dx^%d ",product[i].coeff,product[i].degree);
          }
          if(i!=count)
          printf("+ ");
          }/*End of i for loop*/

return 0;
}
















