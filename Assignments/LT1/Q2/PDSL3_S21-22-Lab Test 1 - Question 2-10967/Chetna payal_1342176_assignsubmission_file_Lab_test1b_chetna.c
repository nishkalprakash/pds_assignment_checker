#include<stdio.h>
#include<math.h>

/*Name-Chetna
  roll no.-21CS10019
  dep-CSE
  package-code blocks*/

  int main()
  {
    int iter;
    float xo,eps,xn,var,error;

    printf("X0 : ");
    scanf("%f",&xo);

    printf("EPS : ");
    scanf("%f",&eps);

    printf("Iterations : ");
    scanf("%d",&iter);
    printf("Iteration  X0 \t x1 \t error\n ");

    for(int i=1;i<=iter;i++)
    {
        var = xo*xo;
        xn = xo-((xo)/3)+(25/(3*var));
        error = xn-xo;
        if(error>0)
        {error=error*(1);}

        else
        {error = error*(-1);}

        if(error>eps)
        {printf("%d\t%f\t%f\t%f\n",i,xo,xn,error);}

        else
        {printf("%d\t%f\t%f\t%f\n",i,xo,xn,error);
        break;}

        xo=xn;
    }
    printf("The square root is %f",xn);

}

