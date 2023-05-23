#include<stdio.h>
#define pi 3.1415926535


int fact(int n){

if (n == 1){

    return 1;

}

else {


    return n*fact(n-1);

}




}




float pow(float x, int n){
if (n == 0){


    return 1;

}

else {

    return x*(pow(x,n-1));
}



}


double i_sin(double x){
double y;
double i;
y = x*(pi)/180;
float sin = 0;

for (i = 1; i <= 10; i++){

      sin += pow(-1,i+1)*pow(y,2*i-1)/fact(2*i - 1);
}

return sin;
}



int main(){
    float a;
    scanf("%f", &a);
    double b = i_sin(a);
    printf("%f,%f", b, b);


return 0;
}















