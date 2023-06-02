#include<stdio.h>
#include<math.h>

struct vetor{
int dimension;
int a[100];

} V1,V2;

void check_condition(struct vector *V1,struct vector *V2, int dimension){
int i;dot_prod =0,temp1,temp2;
float cos,mod1,mod2;

for(i=0;i<dimension;i++){
    dot_product=dot_product+V1.a[i]*V2.a[i];
}
for(i=0;i<dimension;i++){
    temp1=temp1+V1.a[i]*V1.a[i];
    
}
mod1=sqrt(temp1);
for(i=0;i<dimension;i++){
    temp2=temp2+V2.a[i]*V2.a[i];
}
mod2=sqrt(temp2);
cos=float(dot_product)/(mod1*mod1);

if(cos==1){
    printf("vectors are identical\n");
    }
  else if(cos==0){
    printf("vectors are orthogonal\n");
  }  
    else printf("vectors are neither identical nor orthogonal\n");

}


int main(){
   printf("enter the dimension of first vector \n");
   scanf("%d",&V1.dimension);
   printf("enter the elements of first vector\n");
   for(i=0;i<dimension;i++){
    scanf("%d",&V1.a[i]);
   }
    printf("enter the dimension of second vector \n");
   scanf("%d",&V2.dimension);
   printf("enter the elements of second vector\n");
   for(i=0;i<dimension;i++){
    scanf("%d",&V2.a[i]);
   }
   
   check_condition(struct vector &V1,struct vector &V2,dimrnsion);
   return 0;
    
}