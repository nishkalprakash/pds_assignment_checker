#include<stdio.h>


typedef struct vector{
float v1[100];
float v2[100];
} vect;


int main(){
    int i,n,n1;
    vect vectors;
printf("Enter the dimension of vector 1 : ");
scanf("%d",&n);
printf("Vector 1 : ");
for(i=0;i<n;++i){
    scanf("%f ",&vectors.v1[i]);
    }
printf("Enter the dimension of vector 2 : ");
scanf("%d",&n1);
if(n!=n1) {printf("Wrong Input! Enter Again!");
}
if(n==n1){
//vect.a = (float *)malloc(n*sizeof(float));

printf("Enter two vectors of dimension %d : \n",n);




for(i=0;i<n;++i){
        printf("%f ",vectors.v1[i]);}
    printf("\n");
    printf("Vector 2 : ");
    for(i=0;i<n;++i){
    scanf("%f ",&vectors.v2[i]);
    }
 for(i=0;i<n;++i){
    printf("%f ",vectors.v2[i]);
}
}
return 0;
}
