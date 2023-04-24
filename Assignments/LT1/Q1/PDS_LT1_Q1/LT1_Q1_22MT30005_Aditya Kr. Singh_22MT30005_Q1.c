/*Name- Aditya Kumar Singh
  Sec - 2
  Roll - 22MT30005
  LAB TEST 1 */
#include<stdio.h>
int main()
{
    int x1, x2, x3, x4, y1, y2, y3, y4;
    printf("Enter the values for 1st points\n");
    scanf("%d%d", &x1, &y1);

    printf("Enter the values for 2nd points\n");
    scanf("%d%d", &x2, &y2);

    printf("Enter the values for 3rd points\n");
    scanf("%d%d", &x3, &y3);

    printf("Enter the values for 4th points\n");
    scanf("%d%d", &x4, &y4);

    float a1,a2,a3,a4;
    a1= 0.5*(x1*(y2-y3)-x2*(y3-y1)+x3*(y1-y2));
    a2= 0.5*(x4*(y2-y3)-x2*(y3-y4)+x3*(y4-y2));
    a3= 0.5*(x4*(y1-y3)-x1*(y3-y4)+x3*(y4-y1));
    a4= 0.5*(x4*(y2-y1)-x2*(y1-y4)+x1*(y4-y2));

    if (a1>a2 || a1>a3 || a1>a4)
        printf("Points having the maximum area: (%d,%d),(%d,%d),(%d,%d)\n",x1,y1,x2,y2,x3,y3);
    else if (a2>a1 || a2>a3 || a2>a4)
        printf("Points having the maximum area: (%d,%d),(%d,%d),(%d,%d)\n",x1,y1,x2,y2,x3,y3);
    else if (a3>a1 || a3>a2 || a3>a4)
        printf("Points having the maximum area: (%d,%d),(%d,%d),(%d,%d)\n",x1,y1,x3,y3,x4,y4);
    else if (a4>a1 || a4>a2 || a4>a3)
        printf("Points having the maximum area: (%d,%d),(%d,%d),(%d,%d)\n",x1,y1,x2,y2,x4,y4);





































    return 0;

}
