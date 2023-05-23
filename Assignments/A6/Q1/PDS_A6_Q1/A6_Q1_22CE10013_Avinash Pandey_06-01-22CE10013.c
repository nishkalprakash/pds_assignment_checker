

//  Question 1

#include<stdio.h>
#include<time.h>

int k= 1 , j;
                                           // some global variables for further uses
double sum = 0 , term = 1;


long int fact(int n){
                                              // program for factorial
     if(n == 0) return 1;
     return n*fact(n-1);

}




float pow( float x, int n){

    if (n == 0) return 1;                      // program for power of x

    return x*pow( x , n - 1) ;
}


double i_sin(double x){

    int n = 10, i = 1, j = 2;

    double sum = 0 ;                                          // calculation of sinx (iterative)
    for ( i = 1 , j = 2 ; j <= n ; j++ ){

        sum = sum + pow(-1, j)* pow(x , i)/fact(i) ;
        i = i +2;
    }

    return sum ;
}


double r_sin(double x , int i ){

    double term;

   if( i == 10) return 0;

   term = pow(x,k)*pow(-1 , j )/fact(k);                        // calculation of sinx(recursive)

   k = k +2 ;
   j= j +1 ;

   return term + r_sin(x, i + 1) ;

}

int main(){

float y , x ;

printf("enter the value of x" ) ;
                                                 // taking input
scanf("%f", y);


x = y*3.141592653/180 ;

clock_t start , end ;
                                                                            // cpu time calculation
double cpu_time_used1, cpu_time_used2,  time_difference ;




start = clock() ;

r_sin(x, 1);

end = clock();
                                                                           // for recursive
cpu_time_used1 = ((double)(end - start))/CLOCKS_PER_SEC;
printf("recursive time : %lf \n", cpu_time_used1) ;





start = clock() ;

i_sin(x);                                                                      // for iterative

end = clock();

cpu_time_used2 = ((double)(end - start))/CLOCKS_PER_SEC;

printf("iterrative time : %lf \n", cpu_time_used2 ) ;



time_difference = cpu_time_used1 -  cpu_time_used2 ;

printf("difference between recursive and iterative times : %lf", time_difference);                  // printing the time difference



return 0;
}
