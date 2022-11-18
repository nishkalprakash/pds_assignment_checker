/*Name- S Vigneswaran
Roll No- 21AE30020
Dept:Aerospace Engg Dual degree
package:codeblocks
operating system: Windows 10
Sec 3*/

#include<stdio.h>
#include<math.h>

float dist(){}
float area(){}
float poix(float a,float b,float c,float a1,float b1,float c1){
 float res[2];
 res[0]=(b*c1-b1*c)/(a*b1-a1*b);
 res[1]=(a1*c-a*c1)/(a*b1-a1*b);
 return res[0];
}
float poiy(float a,float b,float c,float a1,float b1,float c1){
 float res[2];
 res[0]=(b*c1-b1*c)/(a*b1-a1*b);
 res[1]=(a1*c-a*c1)/(a*b1-a1*b);
 return res[1];
int main(){
 float a,b,c,a1,b1,c1,a2,b2,c2,poi12[2],poi23[2],poi13[2],sl[3];
 printf("Enter line parameters (a b c) of 1st line");
 scanf("%f%f%f",&a,&b,&c);
 printf("Enter line parameters (a b c) of 2nd line");
 scanf("%f%f%f",&a1,&b1,&c1);
 printf("Enter line parameters (a b c) of 3rd line");
 scanf("%f%f%f",&a2,&b2,&c2);
 if( a/a1 == b/b1 || a1/a2 == b1/b2 || a/a2 == b/b2 ) {printf("the lines are parallel or coincident");return 0;}
  else{
    poi12[0]=poix(a,b,c,a1,b1,c1);
    poi12[1]=poiy(a,b,c,a1,b1,c1);
    poi23=poi(a1,b1,c1,a2,b2,c2);
    poi13=poi(a,b,c,a2,b2,c2);
    printf("\npoint of intersn between l1 n l2= (%f,%f)",poi12[0],poi12[1]);
    printf("\npoint of intersn between l2 n l3= (%f,%f)",poi23[0],poi23[1]);
    printf("\npoint of intersn between l1 n l3= (%f,%f)",poi13[0],poi13[1]);
    //printf("\nSide Lengths= %f,%f,%f.",sl[0],sl[1],sl[2]);
 }
}
