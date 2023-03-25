#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,d,e,f,g,h,i,s,w;
    printf("A(x1,y1,z1):\n");
    scanf("%f %f %f",&a,&b,&c);
    printf("B(x2,y2,z2):\n");
    scanf("%f %f %f",&d,&e,&f);
    printf("C(x3,y3,z3):\n");
    scanf("%f %f %f",&g,&h,&i);
    printf("A(x1,y1,z1):(%f,%f,%f)\nB(x2,y2,z2):(%f,%f,%f)\nC(x3,y3,z3):(%f,%f,%f)\n\n",a,b,c,d,e,f,g,h,i);
    s=pow((pow(d-a,2)+pow(e-b,2),pow(f-c,2)),0.5);
    w=pow((pow(g-a,2)+pow(h-b,2),pow(i-c,2)),0.5);
    if ((d-a)/s==(g-a)/w && (e-b)/s==(h-b)/w || (f-c)/s==(i-c)/w){
        printf("The given three points are collinear.\n\n");
    }
    else printf("The given points are not collinear.\n\n");
    if(a!=d && d!=g){
        if(a>d && d>g) printf("C(%f,%f,%f)<B(%f,%f,%f)<A(%f,%f,%f)",g,h,i,d,e,f,a,b,c);
        else if(a>g && g>d) printf("B(%f,%f,%f)<C(%f,%f,%f)<A(%f,%f,%f)",d,e,f,g,h,i,a,b,c);
        else if(d>g && g>a) printf("A(%f,%f,%f)<C(%f,%f,%f)<B(%f,%f,%f)",a,b,c,g,h,i,d,e,f);
        else if(d>a && a>g) printf("C(%f,%f,%f)<A(%f,%f,%f)<B(%f,%f,%f)",g,h,i,a,b,c,d,e,f);
        else if(g>a && a>d) printf("B(%f,%f,%f)<A(%f,%f,%f)<C(%f,%f,%f)",d,e,f,a,b,c,g,h,i);
        else if(g>d && d>a) printf("A(%f,%f,%f)<B(%f,%f,%f)<C(%f,%f,%f)",a,b,c,d,e,f,g,h,i);

    }

    if(a==d && d==g){
        if(b>e && e>h) printf("C(%f,%f,%f)<B(%f,%f,%f)<A(%f,%f,%f)",g,h,i,d,e,f,a,b,c);
        else if(b>h && h>e) printf("B(%f,%f,%f)<C(%f,%f,%f)<A(%f,%f,%f)",d,e,f,g,h,i,a,b,c);
        else if(e>h && h>b) printf("A(%f,%f,%f)<C(%f,%f,%f)<B(%f,%f,%f)",a,b,c,g,h,i,d,e,f);
        else if(e>b && b>h) printf("C(%f,%f,%f)<A(%f,%f,%f)<B(%f,%f,%f)",g,h,i,a,b,c,d,e,f);
        else if(h>b && b>e) printf("B(%f,%f,%f)<A(%f,%f,%f)<C(%f,%f,%f)",d,e,f,a,b,c,g,h,i);
        else if(h>e && e>b) printf("A(%f,%f,%f)<B(%f,%f,%f)<C(%f,%f,%f)",a,b,c,d,e,f,g,h,i);
    }
    if(a==d && d==g && b==e && e==h){
        if(c>f && f>i) printf("C(%f,%d,%d)<B(%d,%d,%d)<A(%d,%d,%d)",g,h,i,d,e,f,a,b,c);
        else if(c>i && i>f) printf("B(%f,%f,%f)<C(%f,%f,%f)<A(%f,%f,%f)",d,e,f,g,h,i,a,b,c);
        else if(f>i && i>c) printf("A(%f,%f,%f)<C(%f,%f,%f)<B(%f,%f,%f)",a,b,c,g,h,i,d,e,f);
        else if(f>c && c>i) printf("C(%f,%f,%f)<A(%f,%f,%f)<B(%f,%f,%f)",g,h,i,a,b,c,d,e,f);
        else if(i>c && c>f) printf("B(%f,%f,%f)<A(%f,%f,%f)<C(%f,%f,%f)",d,e,f,a,b,c,g,h,i);
        else if(i>f && f>c) printf("A(%f,%f,%f)<B(%f,%f,%f)<C(%f,%f,%f)",a,b,c,d,e,f,g,h,i);

    }


return 0;
}

