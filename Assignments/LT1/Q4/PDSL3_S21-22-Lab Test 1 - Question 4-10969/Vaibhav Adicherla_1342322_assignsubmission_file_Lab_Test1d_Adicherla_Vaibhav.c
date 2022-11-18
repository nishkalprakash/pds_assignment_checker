/*name: Adicherla Vaibhav
  rollno: 21BT10002
  Department: Biotechnology and Biochemistry Btech
  package: code blocks
  OS: windows*/

#include<stdio.h>
int main()
{
    float x[10],y[10];
    int i;

    printf("Y Coordinates= ");
    for(i = 0; i<10; i++){
        if(i == 9)
        scanf("%f",&y[i]);

        else
        scanf("%f",&y[i]);
    }

    printf("X Coordinates= ");

    for( i = 0; i<10; i++){
        if(i == 9)
        scanf("%f",&x[i]);

        else
        scanf("%f",&x[i]);
    }

    float xN,yN;
     yN=0;
    xN=0;


    for(i = 0; i<10; i++){
        yN=yN+y[i];
    }
     for(i = 0; i<10; i++){
        xN=xN+x[i];
    }
    yN=yN/10;
    xN=xN/10;

    float n;
    for( i = 0;i<10;i++)
        {
        n=(x[i] - xN)*(y[i] - yN);
    }
    float m;
    for(int i = 0;i<10;i++){
        m=(x[i] - xN)*(x[i] - xN);
    }
    n=n/m;
    float a;
    a=yN - n*xM;
    printf("A = %f, ",a);
    printf("N = %f, ",n);

    printf("Line Equation y = %f x + %f ",n,a);
    return 0;
}
