/*
name:SENJUTI GHOSH
ROLL:21CY10036
DEPT:Chemistry
Package:CODEBLOCKS
*/
#define size 200
#include<stdio.h>
/*polynomial will store the data mentioned in the question*/
typedef struct{
        int number_of_terms;
        int coefficient[100];
        int exponent[100];
}polynomial;
/*function to find number of terms in the polynomial*/
int findnumberofterms(char arr[]){
     int count=0;
     for (int i=0;i!='\0';i++){
          if (arr[i]==x){
              count++;
          }
     }
     return (count);
}
/*MAIN PROGRAM BEGINS HERE!!*/
int main();
/*Enter the polynomial strings*/
char first[size];
char second[size];
polynomial p;
polynomial q;
polynomial *pptr;
polynomial *qptr;
int j,k,l,m;
j=k=l=m=0;
p.number_of_terms=0;
q.number_of_terms=0;
printf("Enter first polynomial\n");
scanf("%s",first);
printf("Enter first polynomial\n");
scanf("%s",first);
/*stores the number of terms*/
p.number_of_terms=findnumberofterms(first);
q.number_of_terms=findnumberofterms(second);
/*finding exponents and coefficients in the polynomial and storing in the structures*/
for (int i=0;first[i]!='\0';i++){
     if (first[i]=='^'){
         p.exponent[j]=first[i+1];
         j++;
     }
     if (first[i]=='x'){
         p.coefficient[k]=first[i-1];
         k++;
     }
}
for (i=0;first[i]!='\0';i++){
     if (second[i]=='^'){
         q.exponent[l]=first[i+1];
         l++;
     }
     if (second[i]=='x'){
         p.coefficient[m]=first[i-1];
         m++;
     }
}
/*multiplying the two polynomials*/

}
