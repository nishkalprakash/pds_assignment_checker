/*chityala raviteja
dept. -CSE Dual
roll no: 21CS30016
package : online compiler
os- windows 10 */

#include <stdio.h>
#include <math.h>

int main() {
   float x1,y1,x2,y2,x3,y3,side1,side2,side3,cosine1,cosine2,cosine3;
   printf("Enter the three coordinates:");
   scanf("(%f,%f),(%f,%f),(%f,%f)",&x1,&y1,&x2,&y2,&x3,&y3);
   //calculating side lengths
   side1=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
   side2=sqrt(pow((x2-x3),2)+pow((y2-y3),2));
   side3=sqrt(pow((x3-x1),2)+pow((y3-y1),2));
   //checking triangle inequality property
   if (side1+side2<=side3||side2+side3<=side1||side3+side1<=side2){
       printf("This is a invalid triangle\n");
   }
   else {
       printf("This is a valid triangle\n");
   }
    //using cosine rule to check whether given triangle is acute or right or obtuse
    cosine1=(pow(side2,2)+pow(side3,2)-pow(side1,2))/(2*side2*side3);
    cosine2=(pow(side3,2)+pow(side1,2)-pow(side2,2))/(2*side3*side1);
    cosine3=(pow(side1,2)+pow(side2,2)-pow(side3,2))/(2*side1*side2);
    if (cosine1>0 && cosine2>0 && cosine3>0){
        printf("This is a acute-angled triangle");
    }
    else if (cosine1==0||cosine2==0||cosine3==0){
        printf("This is a right-angled triangle");
    }
    else {
        printf("This is a obtuse-angled triangle ");
    }
    return 0;
}