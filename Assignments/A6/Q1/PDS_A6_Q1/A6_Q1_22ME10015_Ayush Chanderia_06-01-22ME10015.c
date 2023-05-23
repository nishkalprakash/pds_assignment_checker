#include <stdio.h>
#define PI 3.1415926535
#include <time.h>
long int fact(int n){
 if(n==0 || n==1){
    return 1;
 }
 else{
    return n*fact(n-1);
 }
}
float pow(float x, int n){
if(n==0)
    return 1;
else
    return x*pow(x,n-1);
}
double i_sin(double x){
    double sum=0,d,c;
    int k;
    for(k=0;k<=15;k++){
        c=fact(2*k+1);
        d=((pow(-1,k))*pow(x,(2*k+1)))/c;
        sum=sum+d;


        }
        return sum;
    }

double r_sin(double x,int i){
    if(i==1)
        return x;
    else
        return (pow(-1,i+1)*pow(x,(2*i-1))/fact(2*i-1))+r_sin(x,i-1);

}
int main(){
    float xi;
    double io,ro;
    double diff;

   //printf("Enter the value of x:");

    /*while(xi>360 || xi<0){
        printf("Invalid input angle should lie between 0 degrees and 360 degrees\n");
        printf("Enter the value of x");
        scanf("%f",&xi);
    }*/

        clock_t starti,endi;
        double cpu_time_usedi;
        starti= clock();
        printf("Enter the value of x:");
        scanf("%f",&xi);
        xi=xi*(PI/180);
        io=i_sin(xi);


        endi=clock();
        cpu_time_usedi=((double)(endi-starti))/ CLOCKS_PER_SEC;


        clock_t startr,endr;
        double cpu_time_usedr;
        startr= clock();
        ro=r_sin(xi,15);
        endr=clock();
        cpu_time_usedr=((double)(endi-starti))/ CLOCKS_PER_SEC;
        printf("The Iterative output %lf:\t",io);
        printf("The Recursive output %lf\n",ro);
        diff=cpu_time_usedi-cpu_time_usedr;
        //if(diff>0){
        printf("Difference in CPU time:%lf",diff);
        //else{
          //  diff=cpu_time_usedr-cpu_time_usedi;
            //printf("Difference in CPU time:%lf",diff);
        //}



        return 0;


    }





