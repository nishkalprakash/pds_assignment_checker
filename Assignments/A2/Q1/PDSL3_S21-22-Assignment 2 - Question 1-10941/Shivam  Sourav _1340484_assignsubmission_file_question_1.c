#include<stdio.h>
#include<math.h>
void main()
{
    float z,s,t;
    int k,c=1;
 printf("enter initial height and the no. of iterations");
 scanf("%f%d",&z,&k);
 s=sqrt(z);
 while((z!=0)&&(c<=k))
 {

     z=z-s;
     if(z<0)
        z=-z;
        s=sqrt(z);
        if(z==t)
            s=s-1.0/(c*c);
        t=z;
    printf("(%f,%d) ",z,c);
     c++;
 }
}
