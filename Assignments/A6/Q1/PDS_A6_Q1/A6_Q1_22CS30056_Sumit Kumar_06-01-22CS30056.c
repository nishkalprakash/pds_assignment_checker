#include<stdio.h>
/*name-Sumit Kumar
roll no-22CS30056
Description-calculate sin x by recursive and iterative functions an dcpu times.*/
#define o 16
#define PI 3.14285713
#include <time.h>
int fact(int n){
    if(n==1||n<0) return 1;
    else {
        return n*fact(n-1);
    }

}
float pow(float x,int n){
    if(n<1) return 1;
    else {
        return x*pow(x,n-1);
    }

}
double i_sin(double x){
    double sum=0;
    for (int i = 0; i <= o; i++) {
     sum+=pow(-1,i)*pow(x,2*i+1)/fact(2*i+1);

}
 return sum;
}
double r_sin(double x){
double sum;
    static int i=o;
    if(i==0) return x;
    else {
            i--;
           sum = (pow(-1,i+1)*pow(x,2*(i+1)+1)/fact(2*(i+1)+1))+r_sin(x);

    }
    return sum;
}

 int main(){
    float x;
    scanf("%f",&x);
    float p=x*(PI)/(double)180;
    clock_t start,end;
    double cpu_time_used;
    start=clock();
    double s=i_sin(p);
    printf("value in iterative function:%lf\n",s);
    end=clock();
    cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;
    //printf("cpu time is for iterative is:");
    //printf("%lf\n",cpu_time_used);


    double cpu_time_used1;
    start=clock();
    double k=r_sin(p);
    printf("value in iterative function:%lf\n",k);
    end=clock();
    cpu_time_used1=((double)(end-start))/CLOCKS_PER_SEC;
    //printf("cpu time is for recursive is:");
   // printf("%lf",cpu_time_used1);
        printf("cpu time is for iterative and recursive is %lf:",cpu_time_used-cpu_time_used1);



}

