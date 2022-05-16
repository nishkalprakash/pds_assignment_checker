/*
Name : Vankudoth Pavan
Department : Chemical Engineering
Roll No : 21CH10075
Package : Code blocks
Operating system : Windows
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    float xm=0,ym=0,m,b,num=0,den=0;
    printf("Enter the number of points :");
    scanf("%d",&n);
    float xcords[n],ycords[n];
    printf("x-coordinates:");
    for(i=0;i<n;i++){

    scanf("%f",xcords+i);
    }
    printf("y-coordinates:");
    for(i=0;i<n;i++){

    scanf("%f",ycords+i);
    }
   for(i=0;i<n;i++) {
        xm+=xcords[i];
   ym+=ycords[i];
   }
   xm/=(float)n;
   ym/=(float)n;
   for (i=0;i<n;i++){
    num+=(xcords[i]-xm)*(ycords[i]-ym);
   }
    for (i=0;i<n;i++){

    den+=pow((xcords[i]-xm),2);
    }
    m=(float)num/den;
    b=ym-(m*xm);
    printf("m=%2f,b=%2f,line equation y=%2fx+%2f",m,b,m,b);
    return 0;

}





