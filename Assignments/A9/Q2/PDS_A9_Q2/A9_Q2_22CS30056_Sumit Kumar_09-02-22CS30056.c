#include<stdio.h>
#include<math.h>
/*NAME-Sumit Kumar
Roll nO.-22CS30056
Section-2
DEscription-FIbonacci numbers checking and printing nearby*/
typedef struct{
    int *m;
}n;
void read(n *vec,int l){

   vec->m=(int*)malloc(l*sizeof(int));
   for(int i=0;i<l;i++){
    scanf("%d",&vec->m[i]);
   }
}
int checkortho (n*vec1,n*vec2,int l,int z){
    int k=0;
    if(l!=z) printf("Error Input they can't be compared");
    else {
        for(int i=0;i<l;i++){
            k+=(vec1->m[i])*(vec2->m[i]);
        }
        if(k==0) return 1;
        else return 0;
    }

}
float mag(n*vec,int l){
    int k=0;
    for(int i=0;i<l;i++){
        k+=(vec->m[i])*(vec->m[i]);
    }
    return pow(k,0.5);
}
int checkiden(n*vec1,n*vec2,int l,int z){
    float g=0;
    if(l!=z) printf("Error Input they can't be compared");
    else {
            int k=0;
            for(int i=0;i<l;i++){
            k+=(vec1->m[i])*(vec2->m[i]);
           }
            float q=mag(vec1,l);
             float w=mag(vec2,z);
              g=(k/(q*w));
              g=(g>0?g:-g);
              int c=(int)g;

              if(g==1)return 1;
    }
}
int main(){
    n vector_a,vector_b;
    int o;
    scanf("%d",&o);

    read(&vector_a,o);
   printf("\n");
   int p;
    scanf("%d",&p);
   read(&vector_b,p);
   printf("\n");
   int y=checkortho(&vector_a,&vector_b,o,p);
   int ie=0;
   if(y==1) printf("Vectors are orthogonal\n");
   int s=checkiden(&vector_a,&vector_b,o,p);
   if(s==1) {

        printf("Identical Vectors \n");
        ie++;
    }
    if(ie==0&&y==0) printf("The vectors are neither similar nor orthogonal");


}
