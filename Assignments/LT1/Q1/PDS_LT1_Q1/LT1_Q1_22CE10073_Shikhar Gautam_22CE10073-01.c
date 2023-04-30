#include <stdio.h>
#include <math.h>
int main (){

float s1,s2,s3,s4;
int x1,x2,x3,x4,y1,y2,y3,y4;

/* decleration of variables and Coordinates
we are going to use in our program*/

printf("Enter (x1,y1) : "); // taking input for (x1,y1)
scanf("%d%d", &x1,&y1);

printf("Enter (x2,y2) : "); //taking input for (x2,y2)
scanf("%d%d", &x2,&y2);

printf("Enter (x3,y3) : "); //taking input for (x3,y3)
scanf("%d%d", &x3,&y3);

printf("Enter (x4,y4) : ");//taking input for (x4,y4)
scanf("%d%d", &x4,&y4);

s1=0.5(x1*(y3-y4)+x3*(y4-y1)+x4*(y1-y3)); // area for triangle 1

s2=0.5(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)); // area for triangle 2

s3=0.5(x2*(y2-y4)+x3*(y4-y2)+x4*(y1-y2)); //area for triangle 3

s4=0.5(x2*(y1-y2)+x1*(y2-y3)+x4(y3-y1)); //area for triangle 4

if(s1>=0,s2>=0,s3>=0,s4>=0 && s1>s2){
    printf("Points having the maximum area : (%d,%d),(%d,%d),(%d,%d)", x1,y1,x3,y3,x4,y4);/*printing
  the coodinates with largest triangle*/

else if(s1>=0,s2>=0,s3>=0,s4>=0 && s2>s3){
    printf("Points having the maximum area : (%d%d),(%d,%d),(%d,%d)",x2,y2,x3,y3,x4,y4);/*printing
    the coordinates with largest trianlge*/
}
else if (s1>=0,s2>=0,s3>=0,s4>=0 && s3>s4){
    printf("Points having the maximum area : (%d%d),(%d,%d),(%d,%d)",x3,y3,x4,y4,x1,y1);/*printing
    the coodinates with largest triangle*/
}
else if(s1>=0,s2>=0,s3>=0,s4>=0 && s4>s1){
    printf ("Points having the maximum area : (%d,%d),(%d,%d),(%d,%d)", x4,y4,x1,y1,x2,y2);/*printing
    the coodinates with largest triangle */
}
}

float s5;/*declaring
 variable for perimeter*/

s5=0.5(x1*(y2-y3)+x2*(y3-y4)+x3(y4-y1)+x4(y1-y2));/* Calculating
perimeter of the triangle*/

printf("Perimeter Of The Triangle : %d",s5);/* printing
the area of the triangle*/


return 0;
}
