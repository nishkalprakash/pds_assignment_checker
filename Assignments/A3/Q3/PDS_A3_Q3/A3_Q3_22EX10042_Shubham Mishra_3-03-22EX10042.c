#include<stdio.h>
#include<math.h>
int main(){
float x1,x2,x3,y1,y2,y3,z1,z2,z3;
printf("a(x1,y1,z1):");
scanf("%f%f%f",&x1,&y1,&z1);
printf("a(%f %f %f):\n",x1,y1,z1);
printf("b(x2,y2,z2):");
scanf("%f%f%f",&x2,&y2,&z2);
printf("b(%f %f %f):\n",x2,y2,z2);
printf("c(x3,y3,z3):");
scanf("%f%f%f",&x3,&y3,&z3);
printf("c(%f %f %f):\n",x3,y3,z3);
//collating sequence
if(fmax(x1,fmax(x2,x3))==x1)
{
    if(fmax(x2,x3)==x2)
    {


      printf("c(%f %f %f)<b(%f %f %f)<a(%f %f %f)",x3 ,y3 ,z3 ,x2 ,y2 ,z2 ,x1 ,y1 ,z1);
    }
    else{
          printf("b(%f %f %f)<c(%f %f %f)<a(%f %f %f)",x2 ,y2 ,z2 ,x3 ,y3 ,z3 ,x1 ,y1 ,z1);
     }
}
if(fmax(x1,fmax(x2,x3))==x2)
{
    if(fmax(x1,x3)==x1)
    {


      printf("c(%f %f %f)<a(%f %f %f)<b(%f %f %f)",x3 ,y3 ,z3 ,x1 ,y1 ,z1 ,x2 ,y2 ,z2);
    }
    else{
          printf("a(%f %f %f)<c(%f %f %f)<b(%f %f %f)",x1 ,y1 ,z1,x3 ,y3 ,z3 ,x2 ,y2 ,z2);
     }
}
if(fmax(x1,fmax(x2,x3))==x3)
{
    if(fmax(x2,x1)==x1)
    {


      printf("b(%f %f %f)<a(%f %f %f)<c(%f %f %f)",x2 ,y2 ,z2 ,x1 ,y1 ,z1 ,x3 ,y3 ,z3);
    }
    else{
          printf("a(%f %f %f)<b(%f %f %f)<c(%f %f %f)",x1 ,y1 ,z1 ,x2 ,y2 ,z2 ,x3 ,y3 ,z3);
     }
}
int x= x1*(y2*z1-z1*y3)-y1*(x2*z3-x3*z2)+z1(x2*y3-x3*y2);
if(x==0){
    printf("colliner points");
}
}
