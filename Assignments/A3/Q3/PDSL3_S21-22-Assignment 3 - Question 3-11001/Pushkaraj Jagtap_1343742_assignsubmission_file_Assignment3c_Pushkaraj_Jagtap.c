/*Name Pushkaraj Jagtap
  21MF3IM12
  Section 3  group-5
  Codeblocks
  Assigment 3c*/

#include<stdio.h>
#include<math.h>

int main(){
    float a1,b1,c1,a2,b2,c2,a3,b3,c3,x1,y1,x2,x3,y2,y3,a,b,c,area,s;
    printf(" Enter the coefficients (a, b, c) of three lines:\n");
    printf("line 1\n");
    scanf("%f%f%f",&a1,&b1,&c1);
    printf("line 2\n");
    scanf("%f%f%f",&a2,&b2,&c2);
    printf("line 3\n");
    scanf("%f%f%f",&a3,&b3,&c3);  //input taken from user of a,b,c

    x1=((c1*b2-b1*c2)/(a1*b2-b1*a2));
    y1=((c1*a2-c2*a1)/(a2*b1-a1*b2));
    x2=((c3*b2-b3*c2)/(a3*b2-b3*a2));
    y2=((c3*a2-c2*a3)/(a2*b3-a3*b2));
    x3=((c3*b1-b3*c1)/(a3*b1-b3*a1));
    y3=((c3*a1-c1*a3)/(a1*b3-a3*b1));    //point of intersection formula


   a=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
   b=sqrt(pow(x2-x3,2)+pow(y2-y3,2)) ;
   c=sqrt(pow(x3-x1,2)+pow(y3-y1,2));   // length of the side of triangle by distance formula

   s=a+b+c/2;                            // semi perimeter

   area=sqrt(s*(s-a)*(s-b)*(s-c));     // herons formula for area calculation

   if(area>0){

    printf("Point of intersection between L1 and L2 =%f%f\n",x1,y1);
    printf("Point of intersection between L3 and L2 =%f%f\n",x2,y2);
    printf("Point of intersection between L3 and L1 =%f%f\n",x3,y3);


   printf("side lengths=(%f)      (%f)       (%f)\n",a,b,c );
   printf("Area=%f\n",area);}

   else{
        printf("some lines are parallel\n");
        }

    if((a1/b1)==(a2/b2)){

        printf("Line L1 and L2 are parallel");
    }
    else if((a1/b1)==(a3/b3)){
        printf("Line L1 and L3 are parallel");

    }

    else if((a2/b2)==(a3/b3)){
        printf("L2 and L3 are parallel");
    }

    else{
        printf("Thank you");
    }
   }



