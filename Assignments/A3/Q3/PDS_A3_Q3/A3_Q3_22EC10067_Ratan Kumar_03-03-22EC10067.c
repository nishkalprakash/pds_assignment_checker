#include<stdio.h>

int main(){
    float x1,y1,z1,x2,y2,z2,x3,y3,z3;
    printf("Enter the coordinates : \n");
    scanf("%f%f%f%f%f%f%f%f%f",&x1,&y1,&z1,&x2,&y2,&z2,&x3,&y3,&z3);
    printf("A(x1,y1,z1) : (%0.2f,%0.2f,%0.2f)\n",x1,y1,z1);
    printf("B(x2,y2,z2) : (%0.2f,%0.2f,%0.2f)\n",x2,y2,z2);
    printf("C(x3,y3,z3) : (%0.2f,%0.2f,%0.2f)\n\n",x3,y3,z3);
    int a,b,c,d,e,f;
    a=x2-x1;
    b=y2-y1;
    c=z2-z1;
    d=x3-x2;
    e=y3-y2;
    f=z3-z2;

    if(a==b&&b==c&&c==d&&d==e&&e==f){
        printf("The given three points are collinear.\n");
    }else{
    printf("The given three points are not collinear");}
    if(x3>=x2>=x1&&y3>=y2>=y1&&z3>=z2>=z1){
            printf("A(%0.2f,%0.2f,%0.2f) < B(%0.2f,%0.2f,%0.2f) < C (%0.2f,%0.2f,%0.2f)",x1,y1,z1,x2,y2,z2,x3,y3,z3);

    }else if(x3>=x2>=x1&&y2>=y1>=y3&&z2>=z1>=z2){
            printf("A(%0.2f,%0.2f,%0.2f) < B(%0.2f,%0.2f,%0.2f) < C (%0.2f,%0.2f,%0.2f)",x1,y1,z1,x2,y2,z2,x3,y3,z3);

    }else if(x2>=x1>=x3&&y3>=y1>=y2&&z2>=z1>=z3){
        printf("C(%0.2f,%0.2f,%0.2f) < A(%0.2f,%0.2f,%0.2f) < B (%0.2f,%0.2f,%0.2f)",x3,y3,z3,x1,y1,z1,x2,y2,z2);
    }
return 0;
}
