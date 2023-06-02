#include <stdio.h>
#include <math.h>

/*
   sec-2
   Assignment no.- 9
   Roll no- 22IE10035
   Name- Roctotpal Sandilya
   Que no.- 2
*/
struct vector{
    int n;
    float dim[10000000];
}vec1,vec2;

void fun(struct vector *vec){
 int m;
 float k;
 scanf("%d", &m);
 vec->n =m;
 for(int i=0; i<m; i++){
    scanf("%f", &k);
    (*vec).dim[i] = k;
 }
}

int similar(struct vector *veca, struct vector *vecb){
        float sum=0, moda=0, modb=0;
        for(int i=0; i<(*veca).n; i++){
            sum+= (*veca).dim[i]*(*vecb).dim[i];
            moda += pow((*veca).dim[i], 2);
            modb += pow((*vecb).dim[i], 2);
        }
        float cos = sum/(pow(moda, 0.5)*pow(modb, 0.5));
        if(cos==1) return 1;
        else return 0;
}

int ortho(struct vector *veca, struct vector *vecb){
        float sum=0, moda=0, modb=0;
        for(int i=0; i<(*veca).n; i++){
            sum+= (*veca).dim[i]*(*vecb).dim[i];
            moda += pow((*veca).dim[i], 2);
            modb += pow((*vecb).dim[i], 2);
        }
        float cos = sum/(pow(moda, 0.5)*pow(modb, 0.5));
        if(cos==0) return 1;
        else return 0;
}

void check(struct vector *veca, struct vector *vecb){
    if(similar(&veca, &vecb)) printf("Identical vectors");
    else if(ortho(&veca, &vecb)) printf("Vectors are orthogonal");
    else printf("The vectors are neither similar nor orthgonal");
}
int main(){

//scanf("%d", &vec1.n);
//for(int i=0; i<vec1.n; i++) scanf("%f", &vec1.dim[i]);

//scanf("%d", &vec2.n);
//for(int i=0; i<vec2.n; i++) scanf("%f", &vec2.dim[i]);

fun(&vec1);
fun(&vec2);

if(similar(&vec1, &vec2)) printf("Identical vectors");
else if(ortho(&vec1, &vec2)) printf("Vectors are orthogonal");
else printf("The vectors are neither similar nor orthgonal");
return 0;
}
