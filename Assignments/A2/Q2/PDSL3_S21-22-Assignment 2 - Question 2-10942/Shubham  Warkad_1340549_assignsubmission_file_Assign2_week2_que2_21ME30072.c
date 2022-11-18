//Name:Shubham Gajanan Warkad
//Roll No. 21ME30072
//Assignment 2 week 2 ques 3


#include <stdio.h>
#include <math.h>
#include<time.h>
#include<stdlib.h>
int main() {
     srand(time(NULL));
     int n,k,p,D=0,steps;
     float De=0;
     printf("Enter the value of n:");
     scanf("%d",&n);
     printf("Enter the value of k:");
     scanf("%d",&k);
     for (int i=0;i<k;i++){
         steps=0;
         for (int j=0;j<n;j++){
             p = rand() & 1 ? -1 : 1;
             steps+=p;

         }
         D+=pow(steps,2);
     }
     De=sqrt(D/(float)k);
     printf("Total distance travelled is %f",De);


    return 0;
}
