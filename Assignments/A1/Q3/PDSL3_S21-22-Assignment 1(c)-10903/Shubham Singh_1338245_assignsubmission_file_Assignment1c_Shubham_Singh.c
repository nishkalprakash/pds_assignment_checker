/*
Name: Shubham Singh
Roll No: 21EX10032
Department: Geology and Geophysics
Package: Codeblocks
Assignment Class: 1
*/

#include <stdio.h>
#include <math.h>
int main (){
    int m,d,k,temp;
    float bf,val;
    printf("Enter the number of machines : ");
    scanf("%d", &m);
    printf("Enter the day number (1-7) : ");
    scanf("%d", &d);
    switch (d)
    {
    case 1:
        printf("Number of manufactured cars = %d",m);
        break;
    case 2:

    val = m/1.0 + m/2.0 + m/4.0;
    temp = round(val);
     printf("Number of manufactured cars = %d",temp);
     break;
     case 3:
     case 6:
     printf("Enter the no. of machines under inspection : ");
     scanf("%d", &k);
     val =  (m-k)/2.0 + (m-k)/1.0 + (m-k)/4.0;
     temp = round(val);
     printf("Number  of manufactured cars : %d",temp);
     break;
     case 4:
     case 5:
     case 7:
     printf("Enter the boosting fraction : ");
     scanf("%f", &bf);
     val = round((m/1.0) + (bf*m));
     temp = round(val);
     printf("Number of manufactured cars : %d" ,temp);
     break;

    default:
    printf("Inputs enteres are worng..enter again");
        break;
    }

    return 0;
}

