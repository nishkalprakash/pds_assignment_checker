#include<stdio.h>
#include<math.h>
// Harsh Raj
// Roll No. 21IE10017
int main()
{
    int i,k;
    float z,t,s;
    printf("z =");
    scanf("%f",&z);
    printf("k =");
    scanf("%d",&k);
    for(i=1;i<k+1&&z!=0;i++)
    {
        s=sqrt(z);
        t=z;
        z=z-s;
        if(z<0)
            {
                z=-z;
            }
        printf("( %f,%d )",z,i);
        if(z==t)
        {
            s=sqrt(z)-(1/k);
            i++;
            z=z-s*s;
            if(z<0)
            {
                z=-z;
            }
            printf("( %d,%d )",z,i);
        }
    }
}
