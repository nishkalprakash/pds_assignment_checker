/*
Name- Rishi Dhoble
Dept- Mechanical Engnn
Roll no- 21ME30053
Section- 3
package- code blocks
Q4
*/

#include<stdio.h>

int main() {

    int i;
    float arrx[10], arry[10], sumx=0, sumy=0, avgx, avgy, product_sumx=1, product_sumy=1, pro_sum=0, pro_sumx=0, slope, b;                            // fixed arrays for x and y cordinates

    printf("you may enter 10 points (can be float)\n");

    for (i=0; i<10; i++) {

        printf("enter x-cordinate %d :", i+1);                  //taking x cordinate
        scanf("%f", &arrx[i]);

        sumx+= arrx[i];                                      //sum of x

        printf("enter y-cordinate %d :", i+1);                  // taking y cordinates
        scanf("%f", &arry[i]);

        printf("\n");

        sumy+= arry[i];                                       // sum of y
    }

    avgx = (sumx)/10.0;
    avgy = (sumy)/10.0;

    for (i=0; i<10; i++) {

        product_sumx = arrx[i] - avgx ;                      //deviation of x
        product_sumy = arry[i] - avgy ;                      //deviation of y

        pro_sum += (product_sumx)*(product_sumy);             // numerator term of slope
        pro_sumx += (product_sumx)*(product_sumx);            // denominator of slope
    }

    slope = (pro_sum)/(pro_sumx) ;                            //slope

    b = avgy - (slope * avgx) ;                               //intercept

    printf("the equation of line is : y = %fx + %f", slope, b);

return 0;
}
