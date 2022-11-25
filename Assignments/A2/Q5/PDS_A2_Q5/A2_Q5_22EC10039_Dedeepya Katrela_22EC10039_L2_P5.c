#include<stdio.h>
#include<math.h>

int main()
{   

    int Y,n;
    float v,d,g;
    g=9.78;//g is acceleration due to gravity in m^2/sec
    printf("enter the Y value:"); //Y is the initial height
    scanf("%d",&Y);
    v=sqrt(2*g*Y); // v is the velocity of the ball when it touched the ground for the first time
    printf("enter the value of n:");// n is the count of ball touched the ground
    scanf("%d",&n);
    d=((v*v/2*g)+(v*v/3*g)*(1-pow(0.25,n-1)));// d is the distance traversed by the ball when it touches the ground for the nth time 
    printf("total distance traversed d:%f",d);
  return 0;

}
    
    
    

