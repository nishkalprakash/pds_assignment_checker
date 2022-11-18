/*
Name : Ankit Yadav
Roll No : 21EE30005
Department : Electrical Engineering
Package : Codeblocks
Operating system : Windows 11
Assignment class : 3
*/

#include<stdio.h>
#include<math.h>

float intersect(float x,float y,float z,float j,float k,float l,float inters[2],int flag)  //function to compute intersection point
{
if((x/j)!=(y/k)){
inters[0]=(((j*z)-(x*l))/((j*y)-(x*k)));
inters[1]=((z-(y*inters[0]))/x);
}else flag=1;

}




int main(){

  float a1,b1,c1,a2,b2,c2,a3,b3,c3,x1,y1,x2,y2,x3,y3,area,inters[2];
  int flag=0;
  double sl1,sl2,sl3;
  printf("Enter the value of a,b,c for the first line ax+by=c\n");
  scanf("%f %f %f",&a1,&b1,&c1);
  printf("Enter the value of a,b,c for the second line ax+by=c\n");
  scanf("%f %f %f",&a2,&b2,&c2);
  printf("Enter the value of a,b,c for the third line ax+by=c\n");
  scanf("%f %f %f",&a3,&b3,&c3);

  intersect(a1,b1,c1,a2,b2,c2,inters,flag);

 if(flag==0){
  x1=inters[1];
  y1=inters[0];

  }else {
  printf("\nThe lines 1 and 2 are parallel so Does not meet");
  return 1;}

  intersect(a3,b3,c3,a2,b2,c2,inters,flag);

 if(flag==0){
  x2=inters[1];
  y2=inters[0];

  }else {
  printf("\nThe lines 2 and 3 are parallel so Does not meet");
  return 1;}

  intersect(a1,b1,c1,a3,b3,c3,inters,flag);

 if(flag==0){
  x3=inters[1];
  y3=inters[0];

  }else {
  printf("\nThe lines 1 and 3 are parallel so Does not meet");
  return 1;}

  sl1=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
  sl2=sqrt(((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2)));  //side length calculation
  sl3=sqrt(((x1-x3)*(x1-x3))+((y1-y3)*(y1-y3)));

  area=0.5*((x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2)));

  printf("Point of intersection of line L1 and L2 = (%f %f)\n",x1,y1);
  printf("Point of intersection of line L2 and L3 = (%f %f)\n",x2,y2);
  printf("Point of intersection of line L3 and L1 = (%f %f)\n",x3,y3);


  printf("The side lengths are = %f %f %f\n",sl1,sl2,sl3);

  printf("The Area of the triangle formed is = %f",area);


return 0;
}

