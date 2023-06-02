/*name-samares malik
  roll no-22ME10072
  assignment9 q2*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct vector{
    int n;
    int x[30];

}v1,v2;
void is_similarOrOrthogonal(struct vector v1, struct vector v2 ){
    float cos,x,y,d;
    x=0;
    y=0;
    d=0;
    for(int i=0;i<v1.n;i++){
        x += (v1.x[i]*v1.x[i]);
    }
    x = sqrt(x);
    printf("%f\n",x);
    for(int i=0;i<v2.n;i++){
        y+=(v2.x[i]*v2.x[i]);
    }
    y = sqrt(y);
    printf("%f\n",y);
    for(int i=0;i<v1.n;i++){
        d+=(v1.x[i]*v2.x[i]);
    }
    cos = d/(x*y);
    if(cos==0){
        printf("Vectors are orthogonal\n");
    }
    else if(cos==1){
        printf("Vectors are identical\n");

    }
    else{
        printf("Vectors are neither similar nor orthogonal\n");
    }
}
void vector_input(){
    scanf("%d",&v1.n);
    for(int i=0;i<v1.n;i++){
        scanf("%d",&v1.x[i]);
    }
    scanf("%d",&v2.n);
    for(int i=0;i<v2.n;i++){
        scanf("%d",&v2.x[i]);
    }
}

int main(){
    vector_input();
    is_similarOrOrthogonal(v1,v2);

    return 0;

}
