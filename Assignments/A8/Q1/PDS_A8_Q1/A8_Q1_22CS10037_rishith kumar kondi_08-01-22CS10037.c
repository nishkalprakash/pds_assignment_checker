#include<stdio.h>
#include<math.h>
typedef struct complex{
    float real;
    float img;
}complex;
void complexadd(struct complex *i,struct complex *j,struct complex *k)
{
    k->real=i->real+j->real;
    k->img=i->img+j->img;

}
void complexsub(struct complex *i,struct complex *j,struct complex *k)
{
    k->real=i->real-j->real;
    k->img=i->img-j->img;

}
void complexmul(struct complex *i,struct complex *j,struct complex *k)
{
    k->real=i->real*j->real-j->img*i->img;
    k->img=i->img*j->real+i->real*j->img;

}
float mod(struct complex i)
{
   return (sqrt(i.real*i.real+i.img*i.img));
};
void complexdiv(struct complex *i,struct complex *j,struct complex *k)
{
    k->real=(i->real*j->real+i->img*j->img)/(mod(*j)*mod(*j));
    k->img=(i->img*j->real-i->real*j->img)/(mod(*j)*mod(*j));
}
int main()
{
    struct complex a,b,c,d,e,f,g,v,u;float m,n,x;
   printf("enter the first complex number:\n");
   printf("enter the real part:");
   scanf("%f",&a.real);
   printf("\nenter imaginary part:");
   scanf("%f",&a.img);
   printf("enter the second complex number:\n");
   printf("enter the real part:");
   scanf("%f",&b.real);
   printf("\nenter imaginary part:");
   scanf("%f",&b.img);
    printf("enter the first complex number:\n");
   printf("enter the real part:");
   scanf("%f",&c.real);
   printf("\nenter imaginary part:");
   scanf("%f",&c.img);
   printf("the fist complex number is%f+%fi\n",a.real,a.img);
   printf("the second complex number is%f+%fi\n",b.real,b.img);
   complexadd(&a,&b,&d);
   printf("the addition is %f+%fi\n",d.real,d.img);
   complexsub(&a,&b,&e);
   printf("the subtraction is %f+%fi\n",e.real,e.img);
   complexmul(&a,&b,&f);
   printf("the muttiplication is %f+%fi\n",f.real,f.img);
   complexdiv(&a,&b,&g);
   printf("the division is %f+%fi\n",g.real,g.img);
   m=mod(a);n=mod(b);
   printf("modulus of complex num 1 is %f\n",m);
   printf("modulus of complex num 2 is %f\n",n);
   complexdiv(&e,&d,&v);
   complexmul(&v,&c,&u);
   u.real+=4.39;
   printf("the value of z is %f+%fi\n",u.real,u.img);
   x=mod(u);
   printf("the mod value of z is %f\n",x);

}