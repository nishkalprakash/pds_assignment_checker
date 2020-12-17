#include<stdio.h>
int main()
{
    float a,b,c,d,z,w,e,f,p,q;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    z = a;
    w = d;
    e = c;
    f = b;
    printf("The four corners of the rectangle are (%f,%f) , (%f,%f), (%f,%f), (%f,%f)\n", a,b,c,d,z,w,e,f);
    scanf("%f%f",&p,&q);
    if(a<p&&p<c&&b<q&&q<d)
        printf("The given point(%f,%f) is inside the rectangle\n",p,q);
    else printf("The point (%f,%f) is outside the rectangle\n",p,q);

}
