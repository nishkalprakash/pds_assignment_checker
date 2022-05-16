/*Name:- Shubhrashayak Sarkar;
Roll No:- 21NA30029
Package:- Visual Studio Code 
Assignment class:- 6
*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>


int main()
{
    int p, n, d, k, D=1;//Here I initialized D with 1 so that whatever I multiply with it I get that number
    double expectedDistance;
    srand(time(NULL));
    p= rand() &1 ? -1 : 1;
    printf("Enter the total number of steps\n");
    scanf("%d", &n);
    printf("Enter the number of iterations you want to run\n");
    scanf("%d", &k);
    for (int i = 0; i < k; i++)
    {
        int temp;
        d=n*p;//This gives the distance covered in each step
        temp=d*d;
        D=temp*D;//As I initialized D with 1 so in the first iteration D will be assigned to d*d
    }
    expectedDistance=sqrt((double)D/k);
    printf("%lf", expectedDistance);
return 0;
}