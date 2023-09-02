//Lab 3
// Name- Shashank Sahil
// Roll number - 23CE10065
#include <stdio.h>
int x1,y1;
int x2,y2;
int main(){
    printf("Enter the coordinates of top right corner of the rectangle\n");
    scanf("%d%d",&x1,&y1);
    printf("Enter the coordinates of bottom left corner of the rectangle\n");
    scanf("%d%d",&x2,&y2);
    if (x1>x2 && y1>y2){
        int x,y;
    printf("Enter a pair of integers as coordinates of pont P \n");
    scanf("%d%d",&x,&y);
    if(x == x1 && y == y1){
        printf("P= (%d,%d) lies on the top right corner of reactangle\n",x,y);
    }
    if(x == x2 && y == y2){
        printf("P= (%d,%d) lies on the bottom left corner of reactangle\n",x,y);
    }
    if(x == x1 && y == y2){
        printf("P= (%d,%d) lies on the bottom right corner of reactangle\n",x,y);
    }
    if(x == x2 && y == y1){
        printf("P= (%d,%d) lies on the top left corner of reactangle\n",x,y);
    }
    if(x < x1 && x > x2 && y == y1){
        printf("P= (%d,%d) lies on the top side of the reactangle\n",x,y);
    }
   if(x < x1 && x > x2 &&y == y2){
        printf("P= (%d,%d) lies on the bottom side  of the reactangle\n",x,y);
    }
    if(y < y1 && y > y2 &&x == x1){
        printf("P= (%d,%d) lies on the right side  of the reactangle\n",x,y);
    }
    if(y < y1 && y > y2 &&x == x2){
        printf("P= (%d,%d) lies on the left side  of the reactangle\n",x,y);
    }
    if(y < y1 && y > y2 &&x > x2 && x < x1 ){
        printf("P= (%d,%d) lies inside  the reactangle\n",x,y);
    }
    if(y > y1 || y < y2 || x < x2 || x > x1 ){
        printf("P= (%d,%d) lies outside  the reactangle\n",x,y);
    }
    
        

    }
    else {
        printf("Ill formed Rectangle");
    }
    
}