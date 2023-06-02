/*sec2
Assignment no.9
Roll no. 22HS10058
Name - Ujjawal Jain
Question no. 2
*/
#include<stdio.h>
#include<math.h>

struct vecto{

    int n;
    int dim[100];
}v1,v2;

void read_vector(struct vecto *a){
    scanf("%d",& a->n);
for(int i = 0;i< a->n;i++){
    scanf("%d",& a->dim[i]);
}

}

int main(){
read_vector(&v1);
read_vector(&v2);

int dot =0 , sqr1= 0,sqr2=0;
if(v1.n==v2.n){
    for(int i=0;i<v1.n;i++){
       dot = dot+v1.dim[i]*v2.dim[i];
       sqr1 = sqr1 + pow(v1.dim[i],2);
       sqr2 = sqr2 + pow(v2.dim[i],2);

    }
    float cos;
    cos = (dot)/(pow(sqr1,0.5)*pow(sqr2,0.5));

    if(cos==0){
        printf("Vectors are Orthogonal");
    }
    else if(cos==1 || cos ==-1){
        printf("Identical Vectors");
    }
    else{
        printf("The vectors are neither similar nor orthogonal");
    }


}













return 0;
}
