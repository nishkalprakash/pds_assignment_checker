//sec 2
//Assignment no-8
//Roll no-22IE10015
//Name-Arunima Patra
//Question no-1
#include<stdio.h>
#include<math.h>
int n;
struct vector{
   int n;
   int dim[1000];
}v1, v2;
void createvector(struct vector *v){

    scanf("%d", &v->n);
    printf("Enter the elements:");
    for(int i=0; i<v->n; i++){
       scanf("%d", & v->dim[i]);

    }


}
void ans(float result){
 if(result==0){
      printf("Vectors are orthogonal");
   }
   else if(result==1 || result==-1){
      printf("Identical Vectors");
   }
   else{
      printf("Vectors are neither similar nor orthogonal");
   }



}
int main(){
   int p=0,q=0,r=0;
   float result;
   createvector(&v1);
   createvector(&v2);

   for(int i=0; i<v1.n; i++){
      p+=v1.dim[i]*(v2.dim[i]);
   }

   for(int i=0; i<v1.n; i++){
      q+=pow(v1.dim[i] ,2);
   }

    for(int i=0; i<v2.n; i++){
      r+=pow(v2.dim[i] ,2);
   }

   result=p/(pow(q,0.5)*pow(r,0.5));
   ans(result);
return 0;
}
