/* NAME- SATYAJIT BEHERA
   ROLL NO-21AG10034
   DEPT- AGRICULTURE AND FOOD ENGINEERING
   SECTION-03
   SOFTWARE- CODEBLOCK
   qestion no 2*/
#include <stdio.h>
#include <math.h>
int main()
{
    float x,ep,max_ite;
    float rtx;
    int count=0;
    float fx,fxd;
    float difference=0;
    //Here fx is the function x^(3)-25
    //Here fxd stands for the derivative of fx 3x^(2)
    //Here rtx stands for run_time_x0 or xn
    printf("Enter the value of x0:");
    scanf("%f",&x);
    printf("Enter the value of maximum error or epsilon:");
    scanf("%f",&ep);
    printf("Enter the value of maximum iterations:");
    scanf("%f",&max_ite);
    //The process stops if either of the two conditions get matched
    //The first one being if the error xn-x1 turns out to be less than the epsilon
    //Second one being if maximum iterations are reached before the first one
    fx=(pow(x,3))-25;
    fxd=3*(pow(x,2));
    rtx=x-(fx/fxd);
    if((rtx-x)>0)
        difference=rtx-x;
    else
        difference=x-rtx;
    printf("Iteration \t x0 \t x1 \t Error\n");
    while((difference>ep)&&(count<max_ite))
    {
        printf("%d \t %f \t %f \t %f\n ",count+1,x,rtx,x-rtx);
        x=rtx;
        fx=(pow(x,3))-25;
        fxd=3*(pow(x,2));
        rtx=x-(fx/fxd);
        if((rtx-x)>0)
            difference=rtx-x;
        else
            difference=x-rtx;
        count++;

    }
    printf("%d \t %f \t %f \t %f\n ",count+1,x,rtx,x-rtx);
    printf("The sqaure root is:%f ",rtx);
    return 0;
}
