/*TEJAARKA PIRIDI 21MT10036 LABTEST 1*/


#include <stdio.h>


int main()


{int x[10],y[10];



    printf("Enter the values of x-coordinates: ");


    for(int j = 0; j<=9; j++){

        if(j == 9)

        scanf("%d",&x[j]);

        else

        scanf("%d",&x[j]);

    }
    printf("\n");


    printf("Enter the values of y-coordinates:");


    for(int j = 0; j<=9; j++){


        if(j == 9)


        scanf("%d",&y[j]);

        else

        scanf("%d",&y[j]);

    }
    printf("\n");

    float Xn,Yn;

    Xn=0;

    Yn=0;
    for(int j = 0; j<10; j++){


        Xn=Xn+x[j];

    }
    for(int j = 0; j<10; j++){

        Yn=Yn+y[j];
    }
    Xn=Xn/10;

    Yn=Yn/10;

    float slope_numer;


    for(int j = 0;j<10;j++){


        slope_numer=(x[j] - Xn)*(y[j] - Yn);

    }

    float slope_denom;


    for(int j = 0;j<10;j++){


        slope_denom=(x[j] - Xn)*(x[j] - Xn);


    }
    slope_numer=slope_numer/slope_denom;


    float equation;

    equation=Yn - slope_numer*Xn;



    printf("\n");


    printf("slope = %f, ",slope_numer);



    printf("b = %f, ",equation);


    printf(" line equation y = %f x + %f ",slope_numer,equation);



    return 0;
}
