
# include<stdio.h>
# include<math.h>
int main(){
    double X0,Y0,alpha,theta,u,a,t,Xt,Yt;

    printf("enter input values :")
    scanf("X0 %lf Y0%lf u %lf theta  %lf n alpha  %lf time  %lf",&X0,&y0,&u,&theta,&alpha,&t);

    Xt = u*cosec(theta) + (1/2) * (alpha * cos ( theta)) t * t ;
    Yt = u * sin(theta) + (1/2) * ( alpha * sin ( theta )) t*t ;

     printf(" value of Xt and  Yt: %f%f\n",Xt,Yt);
     return 0;

}

