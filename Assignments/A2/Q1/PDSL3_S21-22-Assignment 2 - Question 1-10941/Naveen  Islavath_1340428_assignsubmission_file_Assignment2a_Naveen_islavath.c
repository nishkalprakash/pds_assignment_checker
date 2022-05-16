
#include<stdio.h>
#include<math.h>

int main()

{
    float z,prev;
    int count=1,k;

    printf("Enter the value of z: ");
    scanf("%f",&z);
    printf("Enter the value of k: ");
    scanf("%d",&k);

    while(1)
    {
        prev=z;  
        z=z-pow(z,0.5);
        if(z<0) z=-1*z;

        if(prev==z)  z=z-(1.0/(count*count)); 

        printf("(%f ,%d)",z,count);
        count++;

        if(count>k) {break;} 
        if (z==0) break;

    }

}
