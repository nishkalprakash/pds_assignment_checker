#include<stdio.h>
#include<math.h>
double area(int a, int b ,int c, int d , int e , int f){

return 0.5*(a*d - b*c + c*f - e*d + e*b - a*f);

}


int main(){
int x1, x2, x3, x4, y1, y2, y3, y4;
double perimeter;
double a1, a2, a3, a4;
printf("Write the value of x1 and y1");
scanf("%d %d", &x1,&y1);
printf("Write the value of x2 and y2");
scanf("%d %d", &x2,&y2);
printf("Write the value of x3 and y3");
scanf("%d %d", &x3,&y3);
printf("Write the value of x4 and y4");
scanf("%d %d", &x4,&y4);
a1 = area(x1, y1, x2, y2, x3, y3);
a2 = area(x2, y2, x3, y3, x4, y4);
a3 = area(x3, y3, x4, y4, x1 ,y1);
a4 = area(x4, y4, x1, y1, x2, y2);
if (a1 < 0){
    a1 = -a1;
}
if (a2 < 0){
    a2 = -a2;

}

if (a3 < 0){
    a3 = -a3;
}


if (a4 < 0){
    a4 = -a4;
}

if ((a1 > a2 || a1 == a2) && (a1 > a3 || a1 == a3) && (a1 > a4 || a1 == a4)){
    printf("Points having maximum area : (%d, %d), (%d, %d), (%d, %d)\n", x1, y1, x2, y2, x3, y3);
    if ((sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2)) + sqrt((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3))) <= (sqrt((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1)))){
        printf("Perimeter = 0");
    }
    else {
        printf("Perimeter = %f", ((sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2)) + sqrt((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3))) + (sqrt((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1)))) );
    }
}


else if ((a2 > a3 || a2 == a3) && (a2 > a1 || a2 == a1) && (a2 > a4 || a2 == a4)){
    printf("Points having maximum area : (%d, %d), (%d, %d), (%d, %d)", x2, y2, x3, y3, x4, y4);
    if ((sqrt((x2-x3)*(x2-x3) + (y2-y3)*(y2-y2)) + sqrt((x3-x4)*(x3-x4) + (y3-y4)*(y3-y4))) <= (sqrt((x4-x2)*(x4-x2) + (y4-y2)*(y4-y2)))){
        printf("Perimeter = 0");
    }
    else {
        printf("Perimeter = %f", ((sqrt((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3)) + sqrt((x3-x4)*(x3-x4) + (y3-y4)*(y3-y4))) + (sqrt((x4-x2)*(x4-x2) + (y4-y2)*(y4-y2)))) );
    }

}

else if ((a3 > a2 || a3 == a3) && (a3 > a1 || a3 == a1) && (a3 > a4 || a3==a4)){
    printf("Points having maximum area : (%d, %d), (%d, %d), (%d, %d)", x3, y3, x4, y4, x1, y1);

    if ((sqrt((x3-x4)*(x3-x4) + (y3-y4)*(y3-y4)) + sqrt((x4-x1)*(x4-x1) + (y4-y1)*(y4-y1))) <= (sqrt((x1-x3)*(x1-x3) + (y1-y3)*(y1-y3)))){
        printf("Perimeter = 0");
    }
    else {
        printf("Perimeter = %f", ((sqrt((x3-x4)*(x3-x4) + (y3-y4)*(y3-y4)) + sqrt((x4-x1)*(x4-x1) + (y4-y1)*(y4-y1))) + (sqrt((x1-x3)*(x1-x3) + (y1-y3)*(y1-y3)))) );
    }
}


else if ((a4 > a2 || a4 == a2) && (a4 > a1 || a4 == a1) && (a4 > a3 || a4 == a3)){
    printf("Points having maximum area : (%d, %d), (%d, %d), (%d, %d)", x4, y4, x1, y1, x2, y2);

    if ((sqrt((x4-x1)*(x4-x1) + (y4-y1)*(y4-y1)) + sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2))) <= (sqrt((x2-x4)*(x2-x4) + (y2-y4)*(y2-y4)))){
        printf("Perimeter = 0");
    }
    else {
        printf("Perimeter = %f", (sqrt((x4-x1)*(x4-x1) + (y4-y1)*(y4-y1)) + sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2))) + (sqrt((x2-x4)*(x2-x4) + (y2-y4)*(y2-y4))) );
    }
}
return 0;
}
