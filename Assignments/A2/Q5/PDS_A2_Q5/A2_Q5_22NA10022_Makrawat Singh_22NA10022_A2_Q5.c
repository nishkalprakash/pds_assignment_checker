#include<stdio.h>
#include<math.h>
int main() 
{
    int Y,n,dist;
    float e;
    scanf("%d %d",&Y,&n);
    //since the velocity is getting halved everytime it collides with the ground so the
    // height will get 1/4 of the previous one. 
    //So the coefficient of restitution is e=1/2=0.5
    e=0.5;
    //dist= Y[1+2e^2+2e^4+...+2e^2(n-1)] 
    // using the formula for geometric progression
    dist= Y*(((2*(1-pow(e,2*n)))/(1-(e*e)))-1);
    printf("The value of distance travelled by the ball is %d ", dist);
    return 0;
}
    
