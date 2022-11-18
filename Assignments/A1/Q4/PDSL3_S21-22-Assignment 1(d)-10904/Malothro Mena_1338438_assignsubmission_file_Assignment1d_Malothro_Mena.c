#include<stdio.h>
#include<math.h>
int main(){
    float a, b, c, d, e, f;
    float AB, AC, BC, max, p,q;
    printf("enter coordinate A of triangle\n");
    scanf("%f%f", &a, &b);
    printf("coordinate is A(%f,%f)\n", a, b);
    printf("enter coordinate B of triangle\n");
    scanf("%f%f", &c, &d);
    printf("coordinate is B(%f,%f)\n", c, d);
    printf("enter coordinate C of triangle\n");
    scanf("%f%f", &e, &f);
    printf("coordinate is C(%f,%f)\n", e, f);
    AB=sqrt((d-b)*(d-b)+(c-a)*(c-a));
    printf("AB=%f\n", AB);
    AC=sqrt((f-b)*(f-b)+(e-a)*(e-a));
    printf("AC=%f\n", AC);
    BC=sqrt((f-d)*(f-d)+(e-c)*(e-c));
    printf("BC=%f\n", BC);
    if(AB>AC&&AB>BC){
         max==AB;
         p==BC;
         q==AC;
    }
    else if(AC>BC&&AC>AB){
         max==AC;
         p==BC;
         q==AB;
    }
    else if(BC>AC&&BC>AB){
         max==BC;
         p==AB;
         q==AC;
    }
    if(AB>AC+BC||AC>AB+BC||BC>AB+AC){
        printf("points represent a triangle\n");
        if(pow(max,2)>pow(p,2)+pow(q,2)) printf("triangle is obtuse\n");
        else if(pow(max,2)<pow(p,2)+pow(q,2)) printf("triangle is acute\n");
        else if(pow(max,2)==pow(p,2)+pow(q,2)) printf("triangle is right angled\n");
    }
    return 0;
}

