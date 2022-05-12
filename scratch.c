#include<stdio.h> /* Basic IO */
#include<math.h> /* For sqrt */
# include<stdlib.h> /* For fabs */

# define precision 0.000001


typedef struct Point{
    int x;
    int y;
}Point;

double dist(Point p1, Point p2){
    return sqrt(pow(p1.x - p2.x,2) + pow(p1.y - p2.y,2));
}



int eq(double a, double b){
    if(fabs(a-b) < precision)
        return 1;
    return 0;
}

double max(double a, double b,double c){
    double max = a;
    if(b > max)
        max = b;
    if(c > max)
        max = c;
    return max;
}

int checkDistinct(Point a,Point b, Point c){
    //if((a.x==b.x && a.y==b.y) || (a.x==c.x && a.y==c.y) || (b.x==c.x && b.y==c.y))
    if((eq(a.x,b.x) && eq(a.y,b.y)) || (eq(a.x,c.x) && eq(a.y,c.y)) || (eq(b.x,c.x) && eq(b.y,c.y)))
        return 0;
    return 1;
}

int main(int argc, char const *argv[])
{
    double side1,side2,side3;
    Point trianglePts[3];
    printf("Enter x, y coordinate of 1st point (space seperated) : ");
    scanf("%i %i",&trianglePts[0].x,&trianglePts[0].y);
    printf("Enter x, y coordinate of 2nd point (space seperated) : ");
    scanf("%i %i",&trianglePts[1].x,&trianglePts[1].y);
    printf("Enter x, y coordinate of 3rd point (space seperated) : ");
    scanf("%i %i",&trianglePts[2].x,&trianglePts[2].y);

    puts("----------------------Start of Log-----------------------------");
    if(checkDistinct(trianglePts[0],trianglePts[1],trianglePts[2]) == 0){
        puts("------------------------End of Log---------------------------");
        printf("\nInvalid Triangle. Points are not distinct\n");
        return 0;
    }

    side1 = dist(trianglePts[0],trianglePts[1]);
    side2 = dist(trianglePts[1],trianglePts[2]);
    side3 = dist(trianglePts[2],trianglePts[0]);

    printf("Sides are : %lf %lf %lf\n",side1,side2,side3);

    double maxSide = max(side1,side2,side3);
    double otherSides[2];

    if(side1 <= 0 || side2 <= 0 || side3 <= 0){
        puts("------------------------End of Log---------------------------");
        printf("\nInvalid Triangle. Sides are <=0 \n");
        return 0;
    }

    if(eq(maxSide,side1)){
        otherSides[0] = side2;
        otherSides[1] = side3;
    }
    else if(eq(maxSide,side2)){
        otherSides[0] = side1;
        otherSides[1] = side3;
    }
    else{
        otherSides[0] = side1;
        otherSides[1] = side2;
    }
    printf("Max side : %lf\n",maxSide);
    printf("Other sides : %lf %lf\n",otherSides[0],otherSides[1]);
    printf("Sum of other two sides : %lf\n",otherSides[0]+otherSides[1]);
    if(!eq(maxSide,otherSides[0] + otherSides[1]) && maxSide > otherSides[0] + otherSides[1]){
        puts("------------------------End of Log---------------------------");
        printf("\nInValid Triangle. Triangle property is not satisfied\n");
        return 0;
    }

    //printf("%lf %lf %lf\n",maxSide,otherSides[0],otherSides[1]);
    double sqmax,sqother1,sqother2;
    sqmax = maxSide*maxSide;
    sqother1 = otherSides[0] * otherSides[0];
    sqother2 = otherSides[1] * otherSides[1];

    printf("Square of sides : %lf %lf %lf\n",sqmax,sqother1,sqother2);
    printf("Sum of square of other two sides : %lf\n",sqother1+sqother2);
    puts("------------------------End of Log---------------------------");

    if(eq(sqother1+sqother2,sqmax)){
        printf("\nRight Angled Triangle\n");
    }
    else if (sqother1+sqother2>sqmax){
        printf("\nAcute Angled Triangle\n");
    }
    else if(sqother1+sqother2<sqmax){
        printf("\nObtuse Angled Triangle\n");
    }
    return 0;
}