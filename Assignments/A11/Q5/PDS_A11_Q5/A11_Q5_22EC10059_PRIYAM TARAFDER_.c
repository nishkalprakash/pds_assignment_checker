/* NAME: PRIYAM TARAFDER
ROLL NO.: 22EC10059
SECTION: 14
ASSIGNMENT NO.: 11
QUESTION NO.: 5
DESCRIPTION: 2d matrix operations via structure
*/

#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int n;
    int *p;
} matrix;
void initmat(matrix *c,int a){
    c->p=(int *)malloc(a*a*sizeof(int));       
}
void zeromat(matrix *c, int a){
    for(int t=0;t<a*a;t++)
            *((c->p)+t/a+t%a)=0;
}
void printmat(matrix *c, int a){
    for(int t=0;t<a*a;t++){
            printf("%d ",*((c->p)+t/a+t%a));
    }
}
void getmat(matrix *c, int a){
    c->n=a;
    initmat(c,c->n);
    zeromat(c,c->n);
    for(int t=0;t<a*a;t++)
            scanf("%d",((c->p)+t/a+t%a));
    printmat(c,c->n);   
}
void multmat(matrix *a,matrix *b, matrix *c){
    if(a->n!=b->n)
        printf("matrix cannot be multiplied");
    else{
        initmat(c,a->n);
        for(int i=0;i<b->n*b->n;i++){
            int s=0;
            for(int j=0;j<a->n;j++)
                s+=*((a->p)+i/a->n+j)+ *((b->p)+i%a->n+a->n*j);
            *((c->p)+i/a->n+i%a->n)=s;
        }
        printf("the matrix M1*M2 is: \n");
        printmat(c, a->n);
    }
}
int main(){
    matrix *a,*b,*c;
    a=(matrix *)malloc(sizeof(matrix *));
    b=(matrix *)malloc(sizeof(matrix *));
    c=(matrix *)malloc(sizeof(matrix *));
    int n;
    scanf("%d",&n);
    getmat(a,n);
    getmat(b,n);
    multmat(a,b,c);
}