#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter the coordinates of the point which is on the bottommost left : ");
    scanf("%d%d", &a, &b );
    printf("Enter the coordinates of the point which is on the topmost right : ");
    scanf("%d%d", &c, &d );
    printf("The four corners of the rectangle are: (%d,%d) , (%d,%d) , (%d,%d) , (%d,%d)\n", a, b, a, d, c, d, c, b);


    int p, q;
    printf("Enter the coordinates of the point to be checked : ");
    scanf("%d%d", &p, &q);
    if(p>a && p<c && q>b && q<d ){
            printf("The point (%d,%d) is inside the rectangle.", p, q);
    }
    else {
        printf("The point (%d,%d) is outside the rectangle.", p, q);
    }
return 0;
}
