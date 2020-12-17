#include <stdio.h>
#include <math.h>
int main(){
    int a, b, c, d, e, f;
    printf("Enter the coordinates of the bottom left corner:\n");
    scanf("%d%d",&a,&b);
    printf("Enter the coordinates of the top right corner:\n");
    scanf("%d%d",&c,&d);
    printf("The four corners of the rectangle are:(%d,%d),(%d,%d),(%d,%d),(%d,%d)\n",a,b,a,d,c,d,c,b);
    printf("Enter the coordinates of the test point:\n");
    scanf("%d%d",&e,&f);
    if( ( a<e && e<c ) && ( b<f && f<d ) )
        printf("The point (%d,%d) is inside the rectangle.",e,f);
    else
        printf("The point (%d,%d) is outside the rectangle.",e,f);
}
