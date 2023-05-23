#include<stdio.h>

 int fact(int n)

{
    if(n<= 15)
    {
    if(n == 1) return 1 ;
    return n*fact(n-1) ;
     }

    else if(n>=15) return ;
}

float pow(float x , int n)
{
    if(n == 0) { return 1;}
     n-- ;
     return x* pow(x,n) ;


}

double i_sin(double x )
{
  int i = 0 ;
  double term = x ,  sum  = 0 ;

while( sum >= 0.00001)
{
sum = sum + term ;
term = term *(((float)-x*x)/((2*i)*(2*i +1))) ; i++ ;
}

return sum ;
}

int main()
{
    int n , df ;
    float x , p , term ;


    scanf("%d",&n) ;
    scanf("%f",&x) ;
   df = fact(n) ;
    p = pow( x , n) ;

    //printing values//
    printf("%d\n",df) ;
    printf("%f\n",p) ;

    // calculating sin(x) i//

    double itr_sum ;
    itr_sum = i_sin(x)  ;
    printf("%lf\n",itr_sum) ;

    // calculating sin(x) r //




return 0 ;
}



