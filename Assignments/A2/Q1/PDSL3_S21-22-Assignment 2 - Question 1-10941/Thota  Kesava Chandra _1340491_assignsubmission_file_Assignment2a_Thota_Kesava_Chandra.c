/*
Thota Kesava Chandra
Computer Science Department
21CS30056
Code Blocks
Windows
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float z,s;
    int k;
    printf("Enter the value of z :");
    scanf("%f",&z);
    printf("Enter the value of k :");
    scanf("%d",&k);
    for (int i =1;i<=k;i++)
    {
        s = sqrt(z);
        z = z - s;
        if (z<0)
        {
            z = 0-z;
        }
        printf("(%f,%d)\n",z,i);
        if(z==0)
        {
            break;
        }
        if (z-0.250000 == 0)
        {
            i++;
            if (i>50)
            {
                break;
            }
            printf("(%f,%d)\n",z,i);
            //printf("The current s is %lf\n",s);
            i++;
            if (i>50)
            {
                break;
            }
            s = s - (1.0/i);
            z = z - (s*s);
            printf("(%f,%d)\n",z,i);
        }
    }
    return 0;
}
