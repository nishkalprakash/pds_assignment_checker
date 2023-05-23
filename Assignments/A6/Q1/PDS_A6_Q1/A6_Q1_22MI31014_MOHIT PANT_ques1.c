#include<stdio.h>
#include<time.h>
int fact(int n){
    if (n==1) return 1;
    else{
        return n*fact(n-1);

    }

}
float pow(float x,int n){
    if (n==0) return 1;
    else if(n==1) return x;
    else{
        return x*pow(x,n-1);
    }
}
double i_sin(double x){
    float z=1,s=0;
    for(int i=0;i<10;i++){
        z=(pow(-1.0,i)*pow(x,2*i+1))/fact(2*i+1);
        s+=z;

    }
    return s;

}

int main(){
    double x,y,m;
    scanf("%lf",&x);
    m=(x*3.14)/180;

    clock_t start,end;
    double cpu_time_used;
    start=clock();
    y=i_sin(m);
    end=clock();
    printf("%lf\n",y);
    printf("Difference in cpu time %lf",(double)(end-start));
    return 0;


}
