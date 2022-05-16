/*kethavath shivakumar
21MI31013*/

#include<stdio.h>
#include<conio.h>
int main()
{
    printf("x COORDINATE: ");
    int x[10],y[10];
    for(int i = 0; i<10; i++){
        if(i == 9)
        scanf("%d",&x[i]);

        else
        scanf("%d",&x[i]);
    }
    printf("\n");

printf("y COORDINATE: ");
    for(int i = 0; i<10; i++){
        if(i == 9)
        scanf("%d",&y[i]);

        else
        scanf("%d",&y[i]);
    }
    printf("\n");

       double xm,ym;

    xm=0;

    ym=0;
    for(int i = 0; i<10; i++){

        xm=xm+x[i];
    }
    for(int i = 0; i<10; i++){
    ym=ym+y[i];
    }
    xm=xm/10;

    ym=ym/10;

     double m;

    for(int i = 0;i<10;i++){
        m=(x[i] - xm)*(y[i] - ym);
      }
    double t;
    for(int i = 0;i<10;i++){

        t=(x[i] - xm)*(x[i] - xm);
      }
    m=m/t;
    double b;
    b=ym - m*xm;
    printf("\n");

    printf("m = %f,",m);

    printf("b = %f,",b);

    printf(" LINE EQUATION OF Y = %f x + %f ",m,b);

return 0;

}
