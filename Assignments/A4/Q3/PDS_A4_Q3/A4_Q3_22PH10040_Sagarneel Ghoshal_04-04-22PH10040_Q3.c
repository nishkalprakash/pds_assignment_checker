#include<stdio.h>

/*
* Section 2
* Roll No : 22PH10040
* Name : Sagarneel Ghoshal
* Assignment No : 4
* Description : Program to print pattern
*/

int main(){
       int n,j,k,i;                 //declaring variables required initially


       printf("Enter number of rows: ");           //taking in the number of rows
       scanf("%d",&n);

       for(i=1;i<=n;i++){                    //initializing the first loop
        for(j=1;j<=n-i;j++){                //using nested loop to print number of spaces
            printf(" ");
        }
        int f=0;
        f=i;
        for(k=1;k<=2*i-1;k++){             //using nested loop to print the digits at their right places
            printf("%d",f%10);

            if(k<i){                      //updating variables as required
                f++;
            }
            if(k>=i){f--;}
        }
        printf("\n");
       }
return 0;
}
