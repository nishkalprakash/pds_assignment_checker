/*
* Section 2
* Roll No.: 22NA30019
* Name : Kavita Thakur
* Assignment No.: 9
* Description :
*/
#include<stdio.h>
#include<stdlib.h>

struct Vector{
  float* vector;
};

void createVector(struct Vector V);
int similarVector(struct Vector V1,struct Vector V2);
int orthogonalVector(struct Vector V1,struct Vector V2);

int n1,n2;

int main(){
 struct Vector V1,V2;
 printf("Enter dimension of vector V1: ");
 scanf("%d",&n1);
  V1.vector=(float*)malloc(n1*sizeof(float));
  createVector(V1);
 printf("Enter dimension of vector V2: ");
 scanf("%d",&n2);

 V2.vector=(float*)malloc(n2*sizeof(float));

 if(n1==n2){
 printf("Enter input for vector V1\n");

 printf("Enter input for vector V2\n");
 createVector(V2);

 if(similarVector(V1,V2)==1){
    printf("Identical vectors\n");
 }

 if(orthogonalVector(V1,V2)==1){
    printf("Orthogonal vectors");
 }

 if((similarVector(V1,V2)==0) && (orthogonalVector(V1,V2)==0)){
    printf(" The vectors are neither similar nor Orthogonal ");
 }

 }

 else {
    printf("error\nn1 is not equal to n2");
 }

return 0;
}

//function definition
void createVector(struct Vector V){
  for(int i=0;i<n1;i++){
    printf("Enter x%d : ",i+1);
    scanf("%f",V.vector + i);
  }
}

int similarVector(struct Vector V1,struct Vector V2){
    for(int i=0;i<n1;i++){
        if(((*(V1.vector))/(*(V2.vector)))!=((*(V1.vector + i))/(*(V2.vector + i)))){
           return 0;
           }

    }
    return 1;
}


int orthogonalVector(struct Vector V1,struct Vector V2){
   float prod=0.0;
    for(int i=0;i<n1;i++){
        prod+=(*(V1.vector + i))*(*(V2.vector + i));
    }

    if(prod==0.0){
        return 1;
    }
    else{
        return 0;
    }
}
