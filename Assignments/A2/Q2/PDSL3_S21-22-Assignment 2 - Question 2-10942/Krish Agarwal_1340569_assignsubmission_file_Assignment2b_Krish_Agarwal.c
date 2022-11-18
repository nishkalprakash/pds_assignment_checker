/*Name- Krish Agarwal
Roll No.- 21NA10018
Department- Ocean Engineering and Naval Architecture
Section- 3
IDE-VS code
*/
#include <stdio.h>
#include <time.h>
#include <math.h>
int main()
{
    int n,k,x=0,d=0;
    float de=0.0;

    //Input part
    printf("Enter the number of steps : n = ");
    scanf("%d",&n);
    printf("Enter the number of repetitions : k = ");
    scanf("%d",&k);
    
    srand(time(NULL));//providing seed for generating random numbers

    for(int i=0;i<k;i++)// running outer loop for a large number of iterations 
    {
        for(int j=1;j<=n;j++)//running inner loop from 1 to the number of steps
        {
            x += rand() & 1 ? 1 : -1;//generating random number and adding it to get the distance travelled
        }
        d+=x*x;//adding squares of distance 
        x=0;
    }

    de=sqrt(((float)d)/k);//calculating expected distance
    printf("Expected Distance : %f",de);
    return 0;
}
