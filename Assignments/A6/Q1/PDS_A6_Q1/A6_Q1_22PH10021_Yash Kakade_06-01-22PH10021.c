
/*
* Section 2
* Roll No.: 22PH10021
* Name : Kakade Yash Ashok
* Assignment No : 6
* Description : To find factorial,power & sinx
*/

#include <stdio.h>



long long int fact(int n){          //Function to calculate factorial
   if (n==1){
    return (1);
     }
   else{
    return n*fact(n-1);
        }
}





float pow(float y, int n){            //Function to calculate power of numbers
    if(n==1) {return y;}
    else{
        return y*pow(y,n-1);
    }
          }




double i_sin(double y){              //Function to calculate sinx using loops
    double siny=y;
    int i;
    int t;

    int p=25;

    for(i=1;i<p;i++){
            t=2*i+1;
     siny=siny+(((pow(-1,i))*(pow(y,t)))/fact(t));
    }

    return siny;



          }




int main(){                                                //main function
    long long int n;
    float x,y;

    printf("Enter an integer to calculate factorial: ");
    scanf("%lld",&n);

    long long int f=fact(n);

    printf("\nEnter the value of x to calculate sinx: ");
    scanf("%f",&x);

    y=(x*3.1415926535)/180;

    float yn=pow(y,n);

    printf("\nThe factorial is: %lld",f);
    printf("\nThe power of x(converted to degrees) and n is %f",yn);
    printf("\n");

    float sin=i_sin(y);
    printf("\nThe value of sinx is: %lf \n",sin);

    return 0;

}














