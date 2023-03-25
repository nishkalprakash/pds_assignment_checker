
#include<stdio.h>
#include<math.h>
int main(){
    float x1,x2,x3,y1,y2,y3,z1,z2,z3;
    scanf("%f%f%f%f%f%f%f%f%f",&x1,&x2,&x3,&y1,&y2,&y3);
    printf("A(x1,y1,z1)=(%f,%f,%f) \n",x1,y1,z1);
    printf("B(x2,y2,z2)=(%f,%f,%f) \n",x2,y2,z2);
    printf("C(x3,y3,z3)=(%f,%f,%f) \n",x3,y3,z3);
    float area;
    float s;
    float a =sqrt(pow(x1-x2,2) + pow(y1-y2,2) + pow(z1-z2,2));
    float b =sqrt(pow(x3-x2,2) + pow(y3-y2,2) + pow(z3-z2,2));
    float c =sqrt(pow(x1-x3,2) + pow(y1-y3,2) + pow(z1-z3,2));
    s=(a+b+c)/2.0;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    if(area == 0){
        printf("The given three points are collinear. \n");
    }
    else {
        printf("The given three points are not collinear. \n");
    }

    if(x1>x2 && x1>x3){
        if(x2<x3) printf("B<C<A");
        else if(x2>x3) printf("C<B<A");
        else if(x2==x3){
        if(y2>y3) printf("C<B<A");
        else if(y2<y3) printf("B<C<A");
        else if(y2==y3){
            if(z2>z3) printf("C<B<A");
            else printf("B<C<A");
        }
    }
    }
    else if(x2>x3 && x2>x1){
        if(x1>x3) printf("C<A<B");
        else if(x1<x3) printf("A<C<B");
        else if(x1==x3){
         if(y1>y3) printf("C<A<B");
         else if(y1<y3) printf("A<C<B");
         else if(y1==y3){
            if(z1>z3) printf("C<A<B");
            else printf("A<C<B");
         }
        }
    }

    else if(x3>x1 && x3> x2){
        if(x1>x2) printf("B<A<C");
        else if(x1<x2) printf("A<B<C");
        else if(x1==x2){
            if(y1>y2) printf("B<A<C");
            else if(y1<y2) printf("A<B<C");
            else if(y1==y2) {
                if(z1>z2) printf("B<A<C");
                else if(z1<z2) printf("A<B<C");
            }
        }
    }



    return 0;
}
