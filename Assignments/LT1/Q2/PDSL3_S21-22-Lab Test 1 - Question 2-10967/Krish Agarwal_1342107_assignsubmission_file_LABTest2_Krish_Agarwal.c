/*Name- Krish Agarwal
Roll No.- 21NA10018
Department- Ocean Engineering and Naval Architecture
Section- 3
IDE-VS code
*/
#include <stdio.h>
#include <math.h>
int main()
{
    //Variable declaration
    float x0,x1,error,e,fx,fdx;
    int imax,itr=0;
    //Taking input
    printf("Enter the first approximate value : x0= ");
    scanf("%f",&x0);
    printf("Enter the max iteration value : imax= ");
    scanf("%f",&imax);
    printf("Enter the error limit : e= ");
    scanf("%f",&e);
    //Displaying the title of output
    printf("Iteration\tx0\t\t\tx1\t\t\tError\n");
    for(itr=1;itr<=imax;itr++)//running loop till max iteration
    {
        fx=pow(x0,3)-25;//calculating f(x0)
        fdx=3*x0*x0;//calculating f'(x0)
        x1=x0-(fx/fdx);//Approximating
        error=x0-x1;//Error calculation
        printf("%d\t\t%f\t\t%f\t\t%f\n",itr,x0,x1,error);//Display
        x0=x1;
        if(error<e)//once error limit is reached terminating th iteration
        break;
    }
    printf("The square root is %f",x1);
}
