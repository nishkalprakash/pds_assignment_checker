/*Name- Krish Agarwal
Roll No.- 21NA10018
Department- Ocean Engineering and Naval Architecture
Section- 3
IDE-VS code
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int k;
    float z,zi,s;
    //Taking required inputs
    printf("Enter the value of z: ");
    scanf("%f",&z);
    printf("Enter the value of k: ");
    scanf("%d",&k);
    //Calculation starts here
    for(int i=1;i<=k;i++)
    {
        zi=z;//assigning current value of z before any operation 
        s=sqrt(z);
        z=z-s;
        
        if(z<0)// for negative values making the value positive
        {
            z=fabs(z);
        }
        
        if(zi==z)//Trapped situation
        {
            s=s-(1/k);
            z=z-(s*s);
        }

        printf("(%f,%d),",z,i);//Output display
        if(z==0)//if the value of z is zero terminating the program
        break;
        
    }
    return 0;
}