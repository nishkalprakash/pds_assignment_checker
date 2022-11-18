/*Name:- Shubhrashayak Sarkar;
Roll No:- 21NA30029
Package:- Visual Studio Code 
Assignment class:- 6
*/
#include<stdio.h>
#include<math.h>


int main()
{
    float a, u, alpha, t, s;
    float d;
    printf("Enter the position at time t=0\n");
    scanf("%f", &a);
    printf("Enter the initial velocity\n");
    scanf("%f", &u);
    printf("Enter the accleration\n");
    scanf("%f", &alpha);
    printf("Enter the time\n");
    scanf("%f", &t);
    s=(u*t)+((alpha*t*t)/2);//This gives the distance travelled by the time t
    d=a+s;//This gives the displacement of the particle(As the particle moves only along x-axis)
    printf("The distance travelled by the particle in %f time is %f", t, d);
return 0;
}