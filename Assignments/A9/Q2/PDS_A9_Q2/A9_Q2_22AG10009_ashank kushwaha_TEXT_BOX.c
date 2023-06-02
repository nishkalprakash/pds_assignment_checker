/*
SECTION:2
ROLL NO:22AG10009
NAME:ASHANK KUMAR KUSHWAHA
ASSIGNMENT NO: 9
DESCRIPTION:vectors
*/
#include<stdio.h>
#include<stdlib.h>
#include <math.h>
struct vector {
 int *v;
}*a;
void inputf(struct vector x,int n){
    //char c;
    int p,i;
    x.v=(int *)malloc(n*sizeof(int));
    for (i=0;i<n;i++){
        scanf("%d",&p);
        (x.v)[i]=p;
        //while (1){
        //c=getchar();
        // (c=='\n') break;
        //else if ((c>'0')&&(c<'9')){

         //   p*=10;
         //   p+=c-'0';
        //}
        //else printf("erroneous input ,enter again");
    }

    }


double m(int *x,int n){
    int k=0,i;
    for (i=0;i<n;i++){
        k+=x[i]*x[i];
    }
    return pow(k,0.5);
}
int d(int *x,int *y,int n){
    int p=0,i;
    for (i=0;i<n;i++){
            p+=x[i]*y[i];

    }
    return p;
}
int main(){
    int n,n1;
    char c;
    double angle;
    a=(struct vector *)malloc(2*sizeof(struct vector));
    scanf("%d",&n);
    inputf(a[0],n);
    while (1){
    scanf("%d",&n1);
    if (n1==n) break;
    else printf("dimension should be same as previous vector");
    }
    inputf(a[1],n);
    angle=((d((a[0].v),(a[1].v),n))/((m((a[0].v),n))*(m((a[1].v),n))));
    if (angle==0) printf("vectors are orthogonal");
    else if (angle ==1) printf("vectors are identical");
    else printf("vectors are neither similar nor orthogonal");
}