#include<stdio.h>

int main(){
    int n;  //Assigning the variable//
    printf("Enter a number n (100<=n<999):");
    scanf("%d",&n);         //taking input from the user//


    int S1=(n*(n+1))/2;    //defining the type of variable s1 and alloting its use using the mathematical formula to add first n natural numbers//

    int S2=(n*(n+1)*(2*n+1))/6;    //defining type of s2 and alloting its expression to add the square of the first n natural numbers//


    int S3;
    S3=n/100+n%10+(n-((n/100)*100)-(n%10))/10;    //Computing the value of s3 by first extracting its hundredth digit and them the ones digit and finally the ten's digit//

    printf("\nThe value of s1 is %d",S1);      //printing the values of s1,s2,s3//
    printf("\nThe value of s2 is %d",S2);
    printf("\nThe value of s3 is %d",S3);







return 0;
}
