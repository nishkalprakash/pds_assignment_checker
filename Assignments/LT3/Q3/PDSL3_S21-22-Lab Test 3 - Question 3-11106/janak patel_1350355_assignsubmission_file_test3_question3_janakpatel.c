
/*
name: JANAK PATEL
roll: 21AG30027
dept: agricultural and food engineering
package: code blocks
Test 3: question 3
*/



#include<stdio.h>


int main()
{
    int c,d;
    again:
    printf("ENTER TWO DIGITS : \n");     //ENTER DIGIT BETWEEN 1 TO 9  //
    scanf("%d %d ", &c,&d );

    if (c < 0 || c > 9 || d < 0 || d > 9)
    {
        goto again;
    }

    printf("NUMBERS : \n");
    for(int k=0;k<2;k++)
    {
       for (int j=0;j<2; j++)
       {
           for (int l=0;l<2;l++)
           {
             for (int m ; m<2 ;m++)
                {
                    for(int n=0; n<2 ;n++)
                    {
                        int a = d*k*10000 + d*j*1000 + d*l*100  + d*m*10 + d*n ;      // formation of number from c and d

                        if (k==0){
                            a = a + c*10000;
                        }
                        if (j==0){
                            a = a + c*1000;
                        }
                        if (l==0){
                            a = a + c*100;
                        }
                        if (m==0){
                            a = a + c*10;
                        }
                        if (n==0){
                            a = a + c;
                        }
                        if ((a % (c+d)) != 0){       // CONDITION FOR NUMBER IS NOT DIVISIBLE BY c+d
                            printf("%d",a);           // a IS DIFFERENT NUMBER OF COMBINATION OF c AND d
                        }

                    }
                }
           }
       }
    }
    return 0;
}




