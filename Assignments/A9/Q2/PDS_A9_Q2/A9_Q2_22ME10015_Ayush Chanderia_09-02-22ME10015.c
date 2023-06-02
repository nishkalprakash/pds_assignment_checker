#include <stdio.h>
#include <math.h>
#include <stdlib.h>
typedef struct{
    int n;
    int *dim;
}vector;



void readVector(vector c){
    printf("Enter the dimension of vector");
    scanf("%d",&c.n);
    printf("Enter the values for vector");
    c.dim=(int*)malloc(c.n*sizeof(int));
    for(int i=0;i<c.n;i++){
        scanf("%d",&c.dim[i]);
    }
}



float magnitude(vector x){
float magn=0;
for(int i=0;i<x.n;i++){
    magn=sqrt((x.dim[i])*(x.dim[i]));
}
return magn;
}




int dotproduct(vector x, vector y){
int prod;
for(int i=0;i<x.n;i++){
    prod+= ((x.dim[i]) * (y.dim[i]));
}
return prod;
}



float checkVector(vector a,vector b){
    float theta=-1;
    theta= dotproduct(a,b)/((magnitude(a))*(magnitude(b)));
    return theta;
}





int main(){
int dim1,dim2;
float check_theta;
vector X;
vector Y;
/*printf("Enter the dimension of first vector:");
scanf("%d",&dim1);
X.dim=(int*)malloc(dim1*sizeof(int));
printf("Enter the values for vector 1:");
for(int i=0;i<dim1;i++){
scanf("%d",&X.dim[i]);
}
printf("Enter the dimension of second vector:");
scanf("%d",&dim2);
Y.dim=(int*)malloc(dim2*sizeof(int));
printf("Enter the values for vector 2:");
for(int i=0;i<dim2;i++){
scanf("%d",&Y.dim[i]);
}*/
printf("Vector 1:\n");
readVector(X);
printf("Vector 2:\n");
readVector(Y);
check_theta=checkVector(X,Y);
printf("%d",dotproduct(X,Y));
if(check_theta==0)
    printf("Vectors are orthogonal\n");
else if(check_theta==1)
    printf("Identical vectors\n");
else
    printf("Vectors are neither orthogonal nor similar");














return 0;
}
