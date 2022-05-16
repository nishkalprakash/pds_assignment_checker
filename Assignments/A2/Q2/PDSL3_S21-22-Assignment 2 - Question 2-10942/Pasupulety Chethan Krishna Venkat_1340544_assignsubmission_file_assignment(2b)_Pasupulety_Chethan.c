/* Name   : Pasupulety Chethan Krishna Venkat
   Dept   : Computer science
   Roll no: 21CS30036
   Package: Code blocks
   Os     : windows
*/

#include <stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>

int main()
{
srand(time(NULL));

    int n,i,dist,p;
    long int k;

    printf("enter n:");
    scanf("%d",&n);

    printf("enter k:");
    scanf("%ld",&k);

    dist=0;
    float D=0;  // defining D to be square of the distances as in the question
    for(i=0;i<k;i++){

        for(i=0;i<n;i++){        //calculate dist travelled in n steps in each literation
        p = rand() & 1 ? -1 : 1;
        dist=dist+p;

    }
    D=D+dist*dist;       // adding them k number of times to get total

    }
    float exp_dist= sqrt(D/k); // using the given formula for finding expected distance

    printf("the expected distance is %f",exp_dist);






    return 0;
}

