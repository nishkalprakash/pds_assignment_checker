/*name :MOHUL DUTTA
roll no. 22EC30035
QUESTION=1
*/
#include<stdio.h>
#include<time.h>

int n=1;
int k=1;
int p=1;
long fact(int z)
{
    if(z<=1)
        return 1;
    else
        return z*fact(z-1);
}
float pow(float x,int z)
{
    if(z<=0)
        return 1;
    else
        return x*pow(x,z-1);
}
double i_sin(double x)
{
    double s=0.0;
    int p=1;
    for(int i=0; pow(x,2*i+1)/fact(2*i+1)>1e-6; i++)
    {
        s+=p*pow(x,2*i+1)/fact(2*i+1);
        p=-p;
    }
    return s;
}
/*double r_sin(double x)
{

    if(pow(x,2*k-1)/fact(2*k-1)<1e-6)
        return x;
    else
    {
        k++;
        n=-n;
        return r_sin(x)-n*pow(x,(2*k-3)) /fact(2*k-3);
    }
}*/
double r_sin(double x,int i){
    double a;
if(pow(x,2*i+1)/fact(2*i+1)<1e-6)
    return 0.0;



    return pow(-1,i)*pow(x,2*i+1)/fact(2*i+1)+r_sin(x,i+1);


}
int main()
{
    int k=0;
    double x;
    scanf("%lf",&x);
    x=x*3.1415926535/180;
    double t1,t2;
    clock_t start, end;
    start=clock();
    double iter=i_sin(x);
    end=clock();
    t1=((double)(end -start));
    start=clock();
    double recur=r_sin(x,0);
    end=clock();
    t2=((double)(end -start));
    printf("%lf , %lf \n",iter,recur);
    (t1<t2)?printf("cpu difference time =%lf",t2-t1):printf("cpu difference time =%lf",t1-t2);
}
