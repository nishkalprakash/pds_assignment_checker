/*
Name : Souvik Mandal
Roll No. : 21MF10036
Section : 3 
Group : 5
Department : Manufacturing Science And ENGG.
Package : VS Code
Operating System : Windows
*/

# include <stdio.h> 

int main(){


    printf("X : coordinates = ");
    int x[10],y[10];

    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&x[i]);
    }

    printf("Y : coordinates = ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&y[i]);
    }


    float x_i=0 ,y_i=0;


    for (int i = 0; i < 10; i++)
    {
        x_i=x_i + x[i];

    }

    for (int i = 0; i < 10; i++)
    {
        y_i = y_i + y[i];

    }


    float x_mean , y_mean;

    x_mean = x_i / 10;

    y_mean = y_i / 10;


    printf("Mean of X coordinates : %f\n",x_mean);
    printf("Mean of Y coordinates : %f\n",y_mean);
    
    float m;

    float a = 0,p = 0;

    for (int i = 0; i < 10; i++)
    {
        a+=((x[i]-x_mean)*(y[i]-y_mean));
        p+=((x[i]-x_mean)*(x[i]-x_mean));
    }

    m = a/p ;

    printf("Slope of m is : %.1f\n",m);
    
    
    float b;

    b = y_mean - (m*x_mean);

    printf("The value of b is :  %.1f\n",b);


    printf("The line equation is in form y = mx + b --> \n y = %.1f x + %.1f",m,b);
    
    
    return 0;
}