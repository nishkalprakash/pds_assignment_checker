#include<stdio.h>

void main(){
float x1,y1,z1,x2,y2,z2,x3,y3,z3;
printf("A(x1,y1,z1) : ");
scanf("%f%f%f", &x1, &y1, &z1);
printf("\nB(x2,y2,z2) : ");
scanf("%f%f%f", &x2, &y2, &z2);
printf("\nC(x3,y3,z3) : ");
scanf("%f%f%f", &x3, &y3, &z3);

printf("A(x1,y1,z1) : (%.02f,%.02f,%.02f)", x1,y1,z1);
printf("\nB(x2,y2,z2) : (%.02f,%.02f,%.02f)", x2,y2,z2);
printf("\nC(x3,y3,z3) : (%.02f,%.02f,%.02f)\n\n", x3,y3,z3);

if( (x2 - x1)/(x3-x1) == (y2 - y1)/(y3-y1) == (z2 - z1)/(z3-z1) ){
    printf("the given three points are collinear\n\n");
}else{
printf("The given three points are not collinear\n\n");
}
float larx, smallx, midx, lary, smally, midy, larz, smallz, midz;

if(x1 > x2){
    larx = x1;
    lary = y1;
    larz = z1;
    smallx = x2;
    smally = y2;
    smallz = z2;
    }else if(x1 == x2){
        if(y1 > y2){
            larx = x1;
            lary = y1;
            larz = z1;
            smallx = x2;
            smally = y2;
            smallz = z2;
        }else if(y1 == y2){
              if(z1 > z2){
                 larx = x1;
                 lary = y1;
                 larz = z1;
                 smallx = x2;
                 smally = y2;
                 smallz = z2;
        }else{
               larx = x2;
               lary = y2;
               larz = z2;
               smallx = x1;
               smally = y1;
               smallz = z1;
        }
        }else{
            larx = x2;
            lary = y2;
            larz = z2;
            smallx = x1;
            smally = y1;
            smallz = z1;
        }
    }else{
       larx = x2;
       lary = y2;
       larz = z2;
       smallx = x1;
       smally = y1;
       smallz = z1;
}


if(x3 > larx){
    larx = x3;
    lary = y3;
    larz = z3;
}else if(larx == x3){
if(y3 > lary){
        larx = x3;
        lary = y3;
        larz = z3;
}else if(y3 == lary){
    if(z3 > larz){
        larx = x3;
        lary = y3;
        larz = z3;
      }
     }
    }

if(x3<smallx){
    smallx = x3;
    smally = y3;
    smallz = z3;
}else if(x3 == smallx){
     if(y3 < smally){
            smallx = x3;
            smally = y3;
            smallz = z3;
     }else if(y3 == smally){
           if(z3 < smallz){
                smallx = x3;
                smally = y3;
                smallz = z3;
           }
          }
         }//i am not completely sure about the working of the code after this line... like the smallest coordinate and the largest coordinate are coming in their own place, but the middle coordinate is giving isn't always correct
if(x2 != x3){
if(smallx==x2 || smallx==x3){
    midx = x1;
    midy = y1;
    midz = z1;}
}else if(smallx ==x3 || smallx == x1){
    midx = x2;
    midy = y2;
    midz = z2;
}else{
    midx = x3;
    midy = y3;
    midz = z3;
}
printf("(%.02f,%.02f,%.02f) < (%.02f,%.02f,%.02f) < (%.02f,%.02f,%.02f)", smallx,smally,smallz,midx,midy,midz,larx,lary,larz);
}
