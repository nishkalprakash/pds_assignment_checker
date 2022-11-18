/* name: Adicherla Vaibhav
Roll no.:21BT10002
Department: Biotechnology and Biochemistry Btech4yrs
Package:code blocks
Operating system: Windows*/

#include<stdio.h>
#include<math.h>
int main(){
     float x1,y1,x2,y2,x3,y3,a,b,c,p,sum;
     printf("ENTER THE 3 COORDINATES:\n");
     printf("FIRST COORDINATES:\n");
     scanf("%f%f",&x1,&y1);
     printf("SECOND COORDINATES:\n");

     scanf("%f%f",&x2,&y2);
     printf("THIRD COORDINATES:\n");
     scanf("%f%f",&x3,&y3);
     a= sqrt(pow(x2-x1,2)+pow(y2-y1,2));
     b= sqrt(pow(x3-x1,2)+pow(y3-y1,2)) ;
     c= sqrt ((pow(x3-x2,2))+ pow(y3-y2,2) );

     p = a+b+c;
     if (a<p&&b<p&&c<p){
        printf("VALID TRIANGLE");
     }
        else {
            printf("INVALID TRIANGLE");
        }
     sum = a*a+b*b;
     if (sum>c*c){
        printf("ACUTE TRIANGLE");
     }
     else if (sum = c*c){
        printf (" RIGHT TRIANGLE");

     }else {
     printf("OBTUSE TRIANGLE");}
return 0;
}

