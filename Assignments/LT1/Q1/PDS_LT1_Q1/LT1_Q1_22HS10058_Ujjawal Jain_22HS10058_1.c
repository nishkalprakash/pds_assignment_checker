/*sec2
Assignment no.5
Roll no. 22HS10058
Name - Ujjawal Jain
Question no. 1
*/
#include<stdio.h>

int main()
{
    int x1,x2,x3,x4,y1,y2,y3,y4;
    int f =0;
    printf("(x1,y1) = ");
    scanf("%d,%d",&x1,&y1);
    printf("(x2,y2) = ");
    scanf("%d,%d",&x2,&y2);
    printf("(x3,y3) = ");
    scanf("%d,%d",&x3,&y3);
    printf("(x4,y4) = ");
    scanf("%d,%d",&x4,&y4);

    float area1,area2,area3,area4;
    area1 =   0.5*(x1*1.0*(y2-y3)+x2*1.0*(y3-y1)+x3*1.0*(y1-y2));
    area2 =   0.5*(x1*1.0*(y2-y4)+x2*1.0*(y4-y1)+x4*1.0*(y1-y2));
    area3 =   0.5*(x1*1.0*(y3-y4)+x3*1.0*(y4-y1)+x4*1.0*(y1-y3));
    area4 =   0.5*(x2*1.0*(y3-y4)+x3*1.0*(y2-y4)+x4*1.0*(y2-y3));

    if (area1 < 0) area1 = area1*(-1);
    if (area2 < 0) area2 = area2*(-1);
    if (area3 < 0) area3 = area3*(-1);
    if (area4 < 0) area4 = area4*(-1);



    if (area1 < area2 && area1 < area3 && area1 < area4) f = 1;
    else if (area2 < area1 && area2 < area3 && area2 < area4) f = 2;
    else if (area3 < area1 && area3 < area2 && area3 < area4) f = 3;
    else  f = 4;


    if (f==1){
            printf("Points having the minimum area : (%d,%d),(%d,%d),(%d,%d)\n",x1,y1,x2,y2,x3,y3);
            printf("Area = %0.2f",area1);

    }
    else if (f==2){
            printf("Points having the minimum area : (%d,%d),(%d,%d),(%d,%d)\n",x1,y1,x2,y2,x4,y4);
            printf("Area = %0.2f",area2);

    }
    else if (f==3){
            printf("Points having the minimum area : (%d,%d),(%d,%d),(%d,%d)\n",x1,y1,x3,y3,x4,y4);
            printf("Area = %0.2f",area4);

    }
    else if (f==4){
            printf("Points having the minimum area : (%d,%d),(%d,%d),(%d,%d)\n",x2,y2,x3,y3,x4,y4);
            printf("Area = %0.2f",area2);

    }






    return 0;
}

